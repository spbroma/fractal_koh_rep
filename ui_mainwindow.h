/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue 27. Nov 02:01:51 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGraphicsView *graphicsView;
    QSlider *verticalSlider;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QCheckBox *internCheck;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QCheckBox *externCheck;
    QSpinBox *spinBox;
    QComboBox *genBox;
    QComboBox *formBox;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(881, 765);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        gridLayout_2->addWidget(graphicsView, 0, 0, 1, 2);

        verticalSlider = new QSlider(centralWidget);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setMinimum(1);
        verticalSlider->setMaximum(400);
        verticalSlider->setValue(40);
        verticalSlider->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(verticalSlider, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(413, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        internCheck = new QCheckBox(centralWidget);
        internCheck->setObjectName(QString::fromUtf8("internCheck"));

        gridLayout->addWidget(internCheck, 0, 0, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 1, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 3, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 4, 1, 1);

        externCheck = new QCheckBox(centralWidget);
        externCheck->setObjectName(QString::fromUtf8("externCheck"));
        externCheck->setCheckable(true);
        externCheck->setChecked(true);
        externCheck->setTristate(false);

        gridLayout->addWidget(externCheck, 1, 0, 1, 1);

        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        gridLayout->addWidget(spinBox, 1, 1, 1, 1);

        genBox = new QComboBox(centralWidget);
        genBox->setObjectName(QString::fromUtf8("genBox"));

        gridLayout->addWidget(genBox, 1, 2, 1, 1);

        formBox = new QComboBox(centralWidget);
        formBox->setObjectName(QString::fromUtf8("formBox"));

        gridLayout->addWidget(formBox, 1, 3, 1, 1);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(lineEdit, 1, 4, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 1, 2, 1);

        horizontalSpacer_2 = new QSpacerItem(413, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 881, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        internCheck->setText(QApplication::translate("MainWindow", "\320\222\320\275\321\203\321\202\321\200\320\270", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "\320\230\321\202\320\265\321\200\320\260\321\206\320\270\320\270", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "\320\223\320\265\320\275\320\265\321\200\320\260\321\202\320\276\321\200", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "\320\244\320\276\321\200\320\274\320\260", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\320\242\320\276\321\207\320\272\320\270", 0, QApplication::UnicodeUTF8));
        externCheck->setText(QApplication::translate("MainWindow", "\320\241\320\275\320\260\321\200\321\203\320\266\320\270", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
