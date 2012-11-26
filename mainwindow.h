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

    QList<QPointF> koh(QPointF pnt1, QPointF pnt2, bool end);
    QList<QPointF> square(QPointF pnt1, QPointF pnt2, bool end);
    QList<QPointF> freak(QPointF pnt1, QPointF pnt2, bool end);
    QList<QPointF> levi(QPointF pnt1, QPointF pnt2, bool end);
    QList<QPointF> cube(QPointF pnt1, QPointF pnt2, bool end);

    ~MainWindow();
    
private:
    Ui::MainWindow *ui;

private slots:
        void func();
        void scaleGraph();
        void drawLines(QGraphicsScene *scene);
        void on_internCheck_clicked(bool checked);
        void on_externCheck_clicked(bool checked);
};

#endif // MAINWINDOW_H
