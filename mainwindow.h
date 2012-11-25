#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);


    void drawpoints(QList<QPointF> *list, double k);

    QList<QPointF> koh(QPointF pnt1, QPointF pnt2);
    QList<QPointF> square(QPointF pnt1, QPointF pnt2);
    QList<QPointF> freak(QPointF pnt1, QPointF pnt2);
    QList<QPointF> tree(QPointF pnt1, QPointF pnt2);

    ~MainWindow();
    
private:
    Ui::MainWindow *ui;

private slots:
        void func();
        void scaleGraph();
        void drawLines(QGraphicsScene *scene);
};

#endif // MAINWINDOW_H
