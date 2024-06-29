#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QDateTime>
#include <QLabel>
#include <QSpinBox>
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->treeWidget->clear();

    //header
    QTreeWidgetItem* headItem=new QTreeWidgetItem();
    headItem->setText(colItem,"目录和文件");
    headItem->setText(colItemType,"节点类型");
    headItem->setText(colDate,"最后修改日期");
    headItem->setTextAlignment(colItem,Qt::AlignHCenter|Qt::AlignVCenter);
    headItem->setTextAlignment(colItemType,Qt::AlignHCenter|Qt::AlignVCenter);
    headItem->setTextAlignment(colDate,Qt::AlignHCenter|Qt::AlignVCenter);
    ui->treeWidget->setHeaderItem(headItem);

    //添加根节点
    QIcon icon(":/icon/25.png");
    QTreeWidgetItem* topItem=new QTreeWidgetItem(itTopItem);
    topItem->setIcon(colItem,icon);
    topItem->setText(colItem,"图片文件");
    topItem->setText(colItemType,"Top Item");
    topItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled|Qt::ItemIsAutoTristate);
    topItem->setCheckState(colItem,Qt::Checked);
    ui->treeWidget->addTopLevelItem(topItem);

    //status bar
    labNodeText=new QLabel("节点标题",this);
    labNodeText->setMinimumWidth(200);
    ui->statusbar->addWidget(labNodeText);

    spinRatio=new QSpinBox(this);
    spinRatio->setRange(0,2000);
    spinRatio->setValue(100);
    spinRatio->setSuffix(" %");
    spinRatio->setReadOnly(false);
    spinRatio->setButtonSymbols(QAbstractSpinBox::NoButtons);
    ui->statusbar->addPermanentWidget(spinRatio);

    labFileName=new QLabel("文件名",this);
    ui->statusbar->addPermanentWidget(labFileName);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actAddCatalog_triggered()
{
    QString noodName=QFileDialog::getExistingDirectory();
    if(noodName.isEmpty())
        return;
    QTreeWidgetItem* parItem=ui->treeWidget->currentItem();
    if(parItem==nullptr)
        return;
    if(parItem->type()!=itImageItem)
    {
        int cnt=noodName.size();
        int i=noodName.lastIndexOf("/");
        QString str=noodName.last(cnt-i-1);
        QTreeWidgetItem* item=new QTreeWidgetItem(itGroupItem);
        item->setIcon(colItem,QIcon(":/icon/14.png"));
        item->setText(colItem,str);
        item->setText(colItemType,"Group Item");
        item->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsAutoTristate|Qt::ItemIsEnabled);
        item->setCheckState(colItem,Qt::Checked);
        item->setData(colItem,Qt::UserRole,QVariant(noodName));
        parItem->addChild(item);
    }
}


void MainWindow::on_actAddFile_triggered()
{
    QStringList files=QFileDialog::getOpenFileNames(this,"选择文件","*.png");
    if(files.isEmpty())
        return;
    QTreeWidgetItem* parItem,* item;
    item=ui->treeWidget->currentItem();
    if(item==nullptr)
        item=ui->treeWidget->topLevelItem(0);
    if(item->type()==itImageItem)
    {
        parItem=item->parent();
    }
    else
    {
        parItem=item;
    }

    for(int i=0;i<files.size();i++)
    {
        //QFileInfo类型可以拿到文件名，文件最后修改时间
        QFileInfo noodName(files.at(i));
        QString fileName=noodName.fileName();
        QTreeWidgetItem* item=new QTreeWidgetItem(itImageItem);
        item->setIcon(colItem,QIcon(":/icon/2.png"));
        item->setText(colItem,fileName);
        item->setText(colItemType,"Image Item");
        QDateTime dateTime=noodName.lastModified();
        item->setText(colDate,dateTime.toString("yyyy-MM-dd HH-mm-ss"));
        item->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsAutoTristate);
        item->setCheckState(colItem,Qt::Checked);
        parItem->addChild(item);
        item->setData(colItem,Qt::UserRole,QVariant(files.at(i)));
    }
    parItem->setExpanded(true);
}


void MainWindow::on_actDeleteNode_triggered()
{
    QTreeWidgetItem* item=ui->treeWidget->currentItem();
    QTreeWidgetItem* parItem=item->parent();
    parItem->removeChild(item);
}


void MainWindow::on_treeWidget_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous)
{
    if(current==nullptr||current==previous)
        return;
    switch (current->type()) {
    case itTopItem:
        ui->actAddCatalog->setEnabled(true);
        ui->actAddFile->setEnabled(true);
        ui->actDeleteNode->setEnabled(false);
        break;
    case itGroupItem:
        ui->actAddCatalog->setEnabled(true);
        ui->actAddFile->setEnabled(true);
        ui->actDeleteNode->setEnabled(true);
        break;
    case itImageItem:
        ui->actAddCatalog->setEnabled(false);
        ui->actAddFile->setEnabled(true);
        ui->actDeleteNode->setEnabled(true);
        displayImage(current);
        break;
    }
}


void MainWindow::on_actTraverseNode_triggered()
{
    QTreeWidgetItem* parItem=ui->treeWidget->currentItem();
    if(parItem==nullptr)
        parItem=ui->treeWidget->topLevelItem(0);
    on_traverse(parItem);

}

void MainWindow::on_traverse(QTreeWidgetItem *item)
{
    item->setText(colItem,"*"+item->text(colItem));
    if(item->childCount()>0)
    {
        int x=item->childCount();
        for(int i=0;i<x;i++)
        {
            QTreeWidgetItem* child=item->child(i);
            on_traverse(child);
        }
    }
}

void MainWindow::displayImage(QTreeWidgetItem *item)
{
    QString filename=item->data(colItem,Qt::UserRole).toString();
    labFileName->setText(filename);
    labNodeText->setText(item->text(colItem));
    m_pixmap.load(filename);
    ui->actHeight->triggered();

    ui->actHeight->setEnabled(true);
    ui->actWide->setEnabled(true);
    ui->actAMP->setEnabled(true);
    ui->actRED->setEnabled(true);
    ui->actCurrentAMP_RDE->setEnabled(true);
}


void MainWindow::on_actWide_triggered()
{
    int w=ui->scrollArea->width()-30;
    int realw=m_pixmap.width();
    m_ratio=float(w)/realw;

    spinRatio->setValue(m_ratio*100);
    QPixmap pix=m_pixmap.scaledToWidth(w-30);
    ui->labPic->setPixmap(pix);
}


void MainWindow::on_actHeight_triggered()
{
    int h=ui->scrollArea->height()-30;
    int realh=m_pixmap.height();
    m_ratio=float(h)/realh;

    spinRatio->setValue(m_ratio*100);
    QPixmap pix=m_pixmap.scaledToHeight(h-30);
    ui->labPic->setPixmap(pix);
}


void MainWindow::on_actCurrentAMP_RDE_triggered()
{
    ui->labPic->setPixmap(m_pixmap);
    m_ratio=1;
    spinRatio->setValue(100);
}


void MainWindow::on_actAMP_triggered()
{
    m_ratio*=1.2;
    int w=m_ratio*m_pixmap.width();
    int h=m_ratio*m_pixmap.height();
    ui->labPic->setPixmap(m_pixmap.scaled(w,h));
    spinRatio->setValue(100*m_ratio);
}


void MainWindow::on_actRED_triggered()
{
    m_ratio/=1.2;
    int w=m_ratio*m_pixmap.width();
    int h=m_ratio*m_pixmap.height();
    ui->labPic->setPixmap(m_pixmap.scaled(w,h));
    spinRatio->setValue(100/m_ratio);
}


void MainWindow::on_actWindowsShow_triggered(bool checked)
{
    ui->dockWidget->setVisible(checked);
}


void MainWindow::on_actWindowsFloat_triggered(bool checked)
{
    ui->dockWidget->setFloating(checked);
}


void MainWindow::on_dockWidget_visibilityChanged(bool visible)
{
    ui->actWindowsShow->setChecked(visible);

}


void MainWindow::on_dockWidget_topLevelChanged(bool topLevel)
{
    ui->actWindowsFloat->setChecked(topLevel);
}

