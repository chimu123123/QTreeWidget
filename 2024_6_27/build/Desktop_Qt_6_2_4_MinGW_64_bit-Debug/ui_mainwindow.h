/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actAddCatalog;
    QAction *actAddFile;
    QAction *actDeleteNode;
    QAction *actTraverseNode;
    QAction *actAMP;
    QAction *actRED;
    QAction *actCurrentAMP_RDE;
    QAction *actWide;
    QAction *actHeight;
    QAction *actWindowsFloat;
    QAction *actWindowsShow;
    QAction *actQuit;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_3;
    QLabel *labPic;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout;
    QTreeWidget *treeWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(938, 600);
        actAddCatalog = new QAction(MainWindow);
        actAddCatalog->setObjectName(QString::fromUtf8("actAddCatalog"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/20.png"), QSize(), QIcon::Normal, QIcon::Off);
        actAddCatalog->setIcon(icon);
        actAddCatalog->setMenuRole(QAction::NoRole);
        actAddFile = new QAction(MainWindow);
        actAddFile->setObjectName(QString::fromUtf8("actAddFile"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/19.png"), QSize(), QIcon::Normal, QIcon::Off);
        actAddFile->setIcon(icon1);
        actAddFile->setMenuRole(QAction::NoRole);
        actDeleteNode = new QAction(MainWindow);
        actDeleteNode->setObjectName(QString::fromUtf8("actDeleteNode"));
        actDeleteNode->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/10.png"), QSize(), QIcon::Normal, QIcon::Off);
        actDeleteNode->setIcon(icon2);
        actDeleteNode->setMenuRole(QAction::NoRole);
        actTraverseNode = new QAction(MainWindow);
        actTraverseNode->setObjectName(QString::fromUtf8("actTraverseNode"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/8.png"), QSize(), QIcon::Normal, QIcon::Off);
        actTraverseNode->setIcon(icon3);
        actTraverseNode->setMenuRole(QAction::NoRole);
        actAMP = new QAction(MainWindow);
        actAMP->setObjectName(QString::fromUtf8("actAMP"));
        actAMP->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/4.png"), QSize(), QIcon::Normal, QIcon::Off);
        actAMP->setIcon(icon4);
        actAMP->setMenuRole(QAction::NoRole);
        actRED = new QAction(MainWindow);
        actRED->setObjectName(QString::fromUtf8("actRED"));
        actRED->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icon/16.png"), QSize(), QIcon::Normal, QIcon::Off);
        actRED->setIcon(icon5);
        actRED->setMenuRole(QAction::NoRole);
        actCurrentAMP_RDE = new QAction(MainWindow);
        actCurrentAMP_RDE->setObjectName(QString::fromUtf8("actCurrentAMP_RDE"));
        actCurrentAMP_RDE->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icon/1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actCurrentAMP_RDE->setIcon(icon6);
        actCurrentAMP_RDE->setMenuRole(QAction::NoRole);
        actWide = new QAction(MainWindow);
        actWide->setObjectName(QString::fromUtf8("actWide"));
        actWide->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icon/13.png"), QSize(), QIcon::Normal, QIcon::Off);
        actWide->setIcon(icon7);
        actWide->setMenuRole(QAction::NoRole);
        actHeight = new QAction(MainWindow);
        actHeight->setObjectName(QString::fromUtf8("actHeight"));
        actHeight->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icon/23.png"), QSize(), QIcon::Normal, QIcon::Off);
        actHeight->setIcon(icon8);
        actHeight->setMenuRole(QAction::NoRole);
        actWindowsFloat = new QAction(MainWindow);
        actWindowsFloat->setObjectName(QString::fromUtf8("actWindowsFloat"));
        actWindowsFloat->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icon/15.png"), QSize(), QIcon::Normal, QIcon::Off);
        actWindowsFloat->setIcon(icon9);
        actWindowsFloat->setMenuRole(QAction::NoRole);
        actWindowsShow = new QAction(MainWindow);
        actWindowsShow->setObjectName(QString::fromUtf8("actWindowsShow"));
        actWindowsShow->setCheckable(true);
        actWindowsShow->setChecked(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icon/9.png"), QSize(), QIcon::Normal, QIcon::Off);
        actWindowsShow->setIcon(icon10);
        actWindowsShow->setMenuRole(QAction::NoRole);
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QString::fromUtf8("actQuit"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icon/17.png"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon11);
        actQuit->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 725, 466));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        labPic = new QLabel(scrollAreaWidgetContents);
        labPic->setObjectName(QString::fromUtf8("labPic"));
        labPic->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(labPic, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 938, 25));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        gridLayout = new QGridLayout(dockWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        treeWidget = new QTreeWidget(dockWidgetContents);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        gridLayout->addWidget(treeWidget, 0, 0, 1, 1);

        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(Qt::LeftDockWidgetArea, dockWidget);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(actAddCatalog);
        menu->addAction(actAddFile);
        menu->addAction(actDeleteNode);
        menu->addAction(actTraverseNode);
        menu->addAction(actQuit);
        menu_2->addAction(actAMP);
        menu_2->addAction(actRED);
        menu_2->addAction(actCurrentAMP_RDE);
        menu_2->addAction(actWide);
        menu_2->addAction(actHeight);
        menu_2->addAction(actWindowsFloat);
        menu_2->addAction(actWindowsShow);
        toolBar->addAction(actAddCatalog);
        toolBar->addAction(actAddFile);
        toolBar->addAction(actDeleteNode);
        toolBar->addAction(actTraverseNode);
        toolBar->addSeparator();
        toolBar->addAction(actAMP);
        toolBar->addAction(actRED);
        toolBar->addAction(actCurrentAMP_RDE);
        toolBar->addAction(actWide);
        toolBar->addAction(actHeight);
        toolBar->addSeparator();
        toolBar->addAction(actWindowsFloat);
        toolBar->addAction(actWindowsShow);
        toolBar->addAction(actQuit);

        retranslateUi(MainWindow);
        QObject::connect(actQuit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actAddCatalog->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\347\233\256\345\275\225", nullptr));
#if QT_CONFIG(tooltip)
        actAddCatalog->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\347\233\256\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
        actAddFile->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\346\226\207\344\273\266", nullptr));
#if QT_CONFIG(tooltip)
        actAddFile->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        actDeleteNode->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\212\202\347\202\271", nullptr));
#if QT_CONFIG(tooltip)
        actDeleteNode->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\212\202\347\202\271", nullptr));
#endif // QT_CONFIG(tooltip)
        actTraverseNode->setText(QCoreApplication::translate("MainWindow", "\351\201\215\345\216\206\350\212\202\347\202\271", nullptr));
#if QT_CONFIG(tooltip)
        actTraverseNode->setToolTip(QCoreApplication::translate("MainWindow", "\351\201\215\345\216\206\350\212\202\347\202\271", nullptr));
#endif // QT_CONFIG(tooltip)
        actAMP->setText(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247", nullptr));
#if QT_CONFIG(tooltip)
        actAMP->setToolTip(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247", nullptr));
#endif // QT_CONFIG(tooltip)
        actRED->setText(QCoreApplication::translate("MainWindow", "\347\274\251\345\260\217", nullptr));
#if QT_CONFIG(tooltip)
        actRED->setToolTip(QCoreApplication::translate("MainWindow", "\347\274\251\345\260\217", nullptr));
#endif // QT_CONFIG(tooltip)
        actCurrentAMP_RDE->setText(QCoreApplication::translate("MainWindow", "\345\256\236\351\231\205\345\244\247\345\260\217", nullptr));
#if QT_CONFIG(tooltip)
        actCurrentAMP_RDE->setToolTip(QCoreApplication::translate("MainWindow", "\345\256\236\351\231\205\345\244\247\345\260\217", nullptr));
#endif // QT_CONFIG(tooltip)
        actWide->setText(QCoreApplication::translate("MainWindow", "\345\220\210\351\200\202\345\256\275\345\272\246", nullptr));
#if QT_CONFIG(tooltip)
        actWide->setToolTip(QCoreApplication::translate("MainWindow", "\345\220\210\351\200\202\345\256\275\345\272\246", nullptr));
#endif // QT_CONFIG(tooltip)
        actHeight->setText(QCoreApplication::translate("MainWindow", "\345\220\210\351\200\202\351\253\230\345\272\246", nullptr));
#if QT_CONFIG(tooltip)
        actHeight->setToolTip(QCoreApplication::translate("MainWindow", "\345\220\210\351\200\202\351\253\230\345\272\246", nullptr));
#endif // QT_CONFIG(tooltip)
        actWindowsFloat->setText(QCoreApplication::translate("MainWindow", "\347\252\227\345\217\243\346\265\256\345\212\250", nullptr));
#if QT_CONFIG(tooltip)
        actWindowsFloat->setToolTip(QCoreApplication::translate("MainWindow", "\347\252\227\345\217\243\346\265\256\345\212\250", nullptr));
#endif // QT_CONFIG(tooltip)
        actWindowsShow->setText(QCoreApplication::translate("MainWindow", "\347\252\227\345\217\243\345\217\257\350\247\201", nullptr));
#if QT_CONFIG(tooltip)
        actWindowsShow->setToolTip(QCoreApplication::translate("MainWindow", "\347\252\227\345\217\243\345\217\257\350\247\201", nullptr));
#endif // QT_CONFIG(tooltip)
        actQuit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        actQuit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        labPic->setText(QString());
        menu->setTitle(QCoreApplication::translate("MainWindow", "\347\233\256\345\275\225\346\240\221", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\350\247\206\345\233\276", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271\347\261\273\345\236\213", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "\347\233\256\345\275\225", nullptr));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
