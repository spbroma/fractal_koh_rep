#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cmath"
#include <QtGui>


QList<QPointF> list2;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->verticalSlider, SIGNAL(valueChanged(int)), this, SLOT(func()));
    connect(ui->spinBox, SIGNAL(valueChanged(int)), this, SLOT(func()));

    func();
}


void MainWindow::func()
{

    QGraphicsScene* scene = new QGraphicsScene;
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);

    double k = ui->verticalSlider->value();
    int iter = ui->spinBox->value();
QTransform matrix;
    matrix.scale(1*k, -1*k);

    ui->graphicsView->setTransform(matrix);

    QList<QPointF> list;
    QPointF pt1, pt2;
    pt1.setX(-5);
    pt1.setY(1);
    pt2.setX(5);
    pt2.setY(1);

    list.append(pt1);
    list.append(pt2);

    for(int i = 0; i<=iter; i++)
    {
        list2.clear();
        for(int j = 0; j<list.size()-1; j++)
        {
            list2.append(koh(list.at(j), list.at(j+1)));
        }
        list = list2;
    }

//    for(int i = 0; i<list.size()-1; i++)
//    {

//        list2.append(koh(list.at(i), list.at(i+1)));
//    }

//    for(int i = 0; i<5; i++)
//    {
//        drawpoints(scene, &list, k);
//    }

    drawLines(scene);
    ui->lineEdit->setText(QString::number(list2.size()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

QList<QPointF> MainWindow::koh(QPointF pnt1, QPointF pnt2)
{
    //������ ������
    double x1, x2;
    double y1, y2;

//    x1 = list->at(0).x();
//    y1 = list->at(0).y();

//    x2 = list->at(1).x();
//    y2 = list->at(1).y();

    x1 = pnt1.x();
    y1 = pnt1.y();

    x2 = pnt2.x();
    y2 = pnt2.y();

    //���������� ����� � ����
    double dx, dy, ang;

    dx = x1;
    dy = y1;
    ang = -atan((y2 - y1)/(x2 - x1));

    //������
    double xr = x2 - x1;
    double yr = y2 - y1;
    double x = (xr*cos(ang) - yr*sin(ang))/2.0;

    //������� �������
    dx += x;


    QList<QPointF> fractal;
    QPointF pnt;

    pnt.setX(-x + dx);
    pnt.setY(dy);
    fractal.append(pnt);

    pnt.setX(-x/3.0 + dx);
    pnt.setY(dy);
    fractal.append(pnt);

    pnt.setX(dx);
    pnt.setY(x/sqrt(3) + dy);
    fractal.append(pnt);

    pnt.setX(x/3.0 + dx);
    pnt.setY(dy);
    fractal.append(pnt);

    pnt.setX(x + dx);
    pnt.setY(dy);
    fractal.append(pnt);

    //������� ���

    QList<QPointF> fractalRot;
    double y;

    for(int i = 0; i < 5; i++)
    {
        xr = fractal.at(i).x() - fractal.at(0).x();
        yr = fractal.at(i).y() - fractal.at(0).y();

        x = xr*cos(-ang) - yr*sin(-ang) + fractal.at(0).x();
        y = xr*sin(-ang) + yr*cos(-ang) + fractal.at(0).y();

        pnt.setX(x);
        pnt.setY(y);

        fractalRot.append(pnt);
    }

    return fractalRot;
}

void MainWindow::drawpoints(QList<QPointF>* list, double k)
{
//    double dotSize = 5/k;
//    double x;
//    double y;

//    for(int i = 0; i<list->size(); i++)
//    {
//        x = list->at(i).x() - dotSize/2;
//        y = list->at(i).y() - dotSize/2;

//        scene.addEllipse(x, y, dotSize, dotSize, QPen(Qt::NoPen), QBrush(Qt::red));
//    }

}

void MainWindow::drawLines(QGraphicsScene *scene)
{
    double k = ui->verticalSlider->value();
//    matrix.scale(k, -k);
//    ui->graphicsView->setTransform(matrix);

    QPen pen;
    pen.setWidthF(1/k);
    for(int i = 0; i<list2.size()-1; i++)
    {
        scene->addLine(list2.at(i).x(), list2.at(i).y(), list2.at(i+1).x(), list2.at(i+1).y(), pen);
    }

}

void MainWindow::scaleGraph()
{
//    double k = ui->verticalSlider->value();
//    matrix.scale(k, -k);
////    ui->graphicsView->setTransform(matrix);
////    scene->update();
}