#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class QTreeWidgetItem;
class QLabel;
class QSpinBox;
class QPixmap;
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    enum treeColNum{colItem=0,colItemType,colDate};
    enum treeItemType{itTopItem=1001,itGroupItem,itImageItem};
    void on_traverse(QTreeWidgetItem* item);
    void displayImage(QTreeWidgetItem* item);

    QLabel* labFileName;
    QLabel* labNodeText;
    QSpinBox* spinRatio;

    QPixmap m_pixmap;
    float m_ratio;
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actAddCatalog_triggered();

    void on_actAddFile_triggered();

    void on_actDeleteNode_triggered();

    void on_treeWidget_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous);

    void on_actTraverseNode_triggered();



    void on_actWide_triggered();

    void on_actHeight_triggered();

    void on_actCurrentAMP_RDE_triggered();

    void on_actAMP_triggered();

    void on_actRED_triggered();

    void on_actWindowsShow_triggered(bool checked);

    void on_actWindowsFloat_triggered(bool checked);

    void on_dockWidget_visibilityChanged(bool visible);

    void on_dockWidget_topLevelChanged(bool topLevel);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
