/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_trem1;
    QLabel *label_trilho1;
    QLabel *label_trilho2;
    QLabel *label_trilho3;
    QLabel *label_trilho4;
    QLabel *label_trilho4_2;
    QLabel *label_trilho1_2;
    QLabel *label_trilho2_2;
    QLabel *label_trem2;
    QLabel *label_trem3;
    QLabel *label_trem5;
    QLabel *label_trem4;
    QLabel *label_trilho3_2;
    QLabel *label_trilho4_3;
    QLabel *label_trilho1_3;
    QLabel *label_trilho2_3;
    QLabel *label_trilho4_4;
    QLabel *label_trilho1_4;
    QLabel *label_trilho2_4;
    QLabel *label_trilho3_4;
    QLabel *label_trilho1_5;
    QLabel *label_trilho2_5;
    QSlider *horizontalSlider_1;
    QSlider *horizontalSlider_2;
    QSlider *horizontalSlider_3;
    QSlider *horizontalSlider_4;
    QSlider *horizontalSlider_5;
    QLabel *vT1;
    QLabel *vT2;
    QLabel *vT3;
    QLabel *vT4;
    QLabel *vT5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(932, 636);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_trem1 = new QLabel(centralWidget);
        label_trem1->setObjectName(QString::fromUtf8("label_trem1"));
        label_trem1->setGeometry(QRect(190, 20, 21, 17));
        QPalette palette;
        QBrush brush(QColor(128, 0, 128, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        label_trem1->setPalette(palette);
        label_trem1->setStyleSheet(QString::fromUtf8("QLabel { background: purple}"));
        label_trilho1 = new QLabel(centralWidget);
        label_trilho1->setObjectName(QString::fromUtf8("label_trilho1"));
        label_trilho1->setGeometry(QRect(210, 20, 250, 17));
        label_trilho1->setStyleSheet(QString::fromUtf8("QLabel { background: grey}"));
        label_trilho2 = new QLabel(centralWidget);
        label_trilho2->setObjectName(QString::fromUtf8("label_trilho2"));
        label_trilho2->setGeometry(QRect(210, 140, 250, 17));
        label_trilho2->setStyleSheet(QString::fromUtf8("QLabel { background: grey}"));
        label_trilho3 = new QLabel(centralWidget);
        label_trilho3->setObjectName(QString::fromUtf8("label_trilho3"));
        label_trilho3->setGeometry(QRect(460, 20, 21, 137));
        label_trilho3->setStyleSheet(QString::fromUtf8("QLabel { background: grey}"));
        label_trilho4 = new QLabel(centralWidget);
        label_trilho4->setObjectName(QString::fromUtf8("label_trilho4"));
        label_trilho4->setGeometry(QRect(190, 20, 21, 137));
        label_trilho4->setStyleSheet(QString::fromUtf8("QLabel { background: grey}"));
        label_trilho4_2 = new QLabel(centralWidget);
        label_trilho4_2->setObjectName(QString::fromUtf8("label_trilho4_2"));
        label_trilho4_2->setGeometry(QRect(730, 20, 21, 137));
        label_trilho4_2->setStyleSheet(QString::fromUtf8("QLabel { background: grey}"));
        label_trilho1_2 = new QLabel(centralWidget);
        label_trilho1_2->setObjectName(QString::fromUtf8("label_trilho1_2"));
        label_trilho1_2->setGeometry(QRect(480, 20, 250, 17));
        label_trilho1_2->setStyleSheet(QString::fromUtf8("QLabel { background: grey}"));
        label_trilho2_2 = new QLabel(centralWidget);
        label_trilho2_2->setObjectName(QString::fromUtf8("label_trilho2_2"));
        label_trilho2_2->setGeometry(QRect(480, 140, 250, 17));
        label_trilho2_2->setStyleSheet(QString::fromUtf8("QLabel { background: grey}"));
        label_trem2 = new QLabel(centralWidget);
        label_trem2->setObjectName(QString::fromUtf8("label_trem2"));
        label_trem2->setGeometry(QRect(460, 20, 21, 16));
        label_trem2->setStyleSheet(QString::fromUtf8("QLabel { background: orange}"));
        label_trem3 = new QLabel(centralWidget);
        label_trem3->setObjectName(QString::fromUtf8("label_trem3"));
        label_trem3->setGeometry(QRect(50, 140, 21, 17));
        label_trem3->setStyleSheet(QString::fromUtf8("QLabel { background: blue}"));
        label_trem5 = new QLabel(centralWidget);
        label_trem5->setObjectName(QString::fromUtf8("label_trem5"));
        label_trem5->setGeometry(QRect(590, 140, 21, 16));
        label_trem5->setStyleSheet(QString::fromUtf8("QLabel { background: green}"));
        label_trem4 = new QLabel(centralWidget);
        label_trem4->setObjectName(QString::fromUtf8("label_trem4"));
        label_trem4->setGeometry(QRect(320, 140, 21, 17));
        label_trem4->setStyleSheet(QString::fromUtf8("QLabel { background: red}"));
        label_trilho3_2 = new QLabel(centralWidget);
        label_trilho3_2->setObjectName(QString::fromUtf8("label_trilho3_2"));
        label_trilho3_2->setGeometry(QRect(590, 140, 21, 137));
        label_trilho3_2->setStyleSheet(QString::fromUtf8("QLabel { background: grey}"));
        label_trilho4_3 = new QLabel(centralWidget);
        label_trilho4_3->setObjectName(QString::fromUtf8("label_trilho4_3"));
        label_trilho4_3->setGeometry(QRect(320, 140, 21, 137));
        label_trilho4_3->setStyleSheet(QString::fromUtf8("QLabel { background: grey}"));
        label_trilho1_3 = new QLabel(centralWidget);
        label_trilho1_3->setObjectName(QString::fromUtf8("label_trilho1_3"));
        label_trilho1_3->setGeometry(QRect(340, 140, 250, 17));
        label_trilho1_3->setStyleSheet(QString::fromUtf8("QLabel { background: grey}"));
        label_trilho2_3 = new QLabel(centralWidget);
        label_trilho2_3->setObjectName(QString::fromUtf8("label_trilho2_3"));
        label_trilho2_3->setGeometry(QRect(340, 260, 250, 17));
        label_trilho2_3->setStyleSheet(QString::fromUtf8("QLabel { background: grey}"));
        label_trilho4_4 = new QLabel(centralWidget);
        label_trilho4_4->setObjectName(QString::fromUtf8("label_trilho4_4"));
        label_trilho4_4->setGeometry(QRect(50, 140, 21, 137));
        label_trilho4_4->setStyleSheet(QString::fromUtf8("QLabel { background: grey}"));
        label_trilho1_4 = new QLabel(centralWidget);
        label_trilho1_4->setObjectName(QString::fromUtf8("label_trilho1_4"));
        label_trilho1_4->setGeometry(QRect(70, 140, 250, 17));
        label_trilho1_4->setStyleSheet(QString::fromUtf8("QLabel { background: grey}"));
        label_trilho2_4 = new QLabel(centralWidget);
        label_trilho2_4->setObjectName(QString::fromUtf8("label_trilho2_4"));
        label_trilho2_4->setGeometry(QRect(70, 260, 250, 17));
        label_trilho2_4->setStyleSheet(QString::fromUtf8("QLabel { background: grey}"));
        label_trilho3_4 = new QLabel(centralWidget);
        label_trilho3_4->setObjectName(QString::fromUtf8("label_trilho3_4"));
        label_trilho3_4->setGeometry(QRect(860, 140, 21, 137));
        label_trilho3_4->setStyleSheet(QString::fromUtf8("QLabel { background: grey}"));
        label_trilho1_5 = new QLabel(centralWidget);
        label_trilho1_5->setObjectName(QString::fromUtf8("label_trilho1_5"));
        label_trilho1_5->setGeometry(QRect(610, 140, 250, 17));
        label_trilho1_5->setStyleSheet(QString::fromUtf8("QLabel { background: grey}"));
        label_trilho2_5 = new QLabel(centralWidget);
        label_trilho2_5->setObjectName(QString::fromUtf8("label_trilho2_5"));
        label_trilho2_5->setGeometry(QRect(610, 260, 250, 17));
        label_trilho2_5->setStyleSheet(QString::fromUtf8("QLabel { background: grey}"));
        horizontalSlider_1 = new QSlider(centralWidget);
        horizontalSlider_1->setObjectName(QString::fromUtf8("horizontalSlider_1"));
        horizontalSlider_1->setGeometry(QRect(70, 330, 160, 16));
        horizontalSlider_1->setStyleSheet(QString::fromUtf8("background-color: rgb(145, 65, 172);"));
        horizontalSlider_1->setMinimum(0);
        horizontalSlider_1->setMaximum(200);
        horizontalSlider_1->setValue(100);
        horizontalSlider_1->setSliderPosition(100);
        horizontalSlider_1->setOrientation(Qt::Horizontal);
        horizontalSlider_1->setInvertedAppearance(true);
        horizontalSlider_1->setInvertedControls(false);
        horizontalSlider_2 = new QSlider(centralWidget);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(70, 360, 160, 16));
        horizontalSlider_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 120, 0);"));
        horizontalSlider_2->setMaximum(200);
        horizontalSlider_2->setValue(100);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        horizontalSlider_2->setInvertedAppearance(true);
        horizontalSlider_3 = new QSlider(centralWidget);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setGeometry(QRect(70, 390, 160, 16));
        horizontalSlider_3->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 113, 216);"));
        horizontalSlider_3->setMaximum(200);
        horizontalSlider_3->setValue(100);
        horizontalSlider_3->setOrientation(Qt::Horizontal);
        horizontalSlider_3->setInvertedAppearance(true);
        horizontalSlider_4 = new QSlider(centralWidget);
        horizontalSlider_4->setObjectName(QString::fromUtf8("horizontalSlider_4"));
        horizontalSlider_4->setGeometry(QRect(70, 420, 160, 16));
        horizontalSlider_4->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 51, 59);"));
        horizontalSlider_4->setMaximum(200);
        horizontalSlider_4->setValue(100);
        horizontalSlider_4->setOrientation(Qt::Horizontal);
        horizontalSlider_4->setInvertedAppearance(true);
        horizontalSlider_5 = new QSlider(centralWidget);
        horizontalSlider_5->setObjectName(QString::fromUtf8("horizontalSlider_5"));
        horizontalSlider_5->setGeometry(QRect(70, 450, 160, 16));
        horizontalSlider_5->setLayoutDirection(Qt::LeftToRight);
        horizontalSlider_5->setStyleSheet(QString::fromUtf8("background-color: rgb(38, 162, 105);"));
        horizontalSlider_5->setMaximum(200);
        horizontalSlider_5->setValue(100);
        horizontalSlider_5->setOrientation(Qt::Horizontal);
        horizontalSlider_5->setInvertedAppearance(true);
        vT1 = new QLabel(centralWidget);
        vT1->setObjectName(QString::fromUtf8("vT1"));
        vT1->setGeometry(QRect(240, 330, 67, 17));
        vT1->setFrameShape(QFrame::Box);
        vT1->setLineWidth(2);
        vT1->setAlignment(Qt::AlignCenter);
        vT2 = new QLabel(centralWidget);
        vT2->setObjectName(QString::fromUtf8("vT2"));
        vT2->setGeometry(QRect(240, 360, 67, 17));
        vT2->setFrameShape(QFrame::Box);
        vT2->setLineWidth(2);
        vT2->setAlignment(Qt::AlignCenter);
        vT3 = new QLabel(centralWidget);
        vT3->setObjectName(QString::fromUtf8("vT3"));
        vT3->setGeometry(QRect(240, 390, 67, 17));
        vT3->setFrameShape(QFrame::Box);
        vT3->setLineWidth(2);
        vT3->setAlignment(Qt::AlignCenter);
        vT4 = new QLabel(centralWidget);
        vT4->setObjectName(QString::fromUtf8("vT4"));
        vT4->setGeometry(QRect(240, 420, 67, 17));
        vT4->setFrameShape(QFrame::Box);
        vT4->setFrameShadow(QFrame::Plain);
        vT4->setLineWidth(2);
        vT4->setAlignment(Qt::AlignCenter);
        vT5 = new QLabel(centralWidget);
        vT5->setObjectName(QString::fromUtf8("vT5"));
        vT5->setGeometry(QRect(240, 450, 67, 17));
        vT5->setFrameShape(QFrame::Box);
        vT5->setFrameShadow(QFrame::Plain);
        vT5->setLineWidth(2);
        vT5->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        label_trilho3_4->raise();
        label_trilho4_2->raise();
        label_trilho1_5->raise();
        label_trilho2_5->raise();
        label_trilho2_2->raise();
        label_trilho4_4->raise();
        label_trilho1_4->raise();
        label_trilho2_4->raise();
        label_trilho4_3->raise();
        label_trilho2->raise();
        label_trilho1_3->raise();
        label_trilho4->raise();
        label_trilho2_3->raise();
        label_trilho3_2->raise();
        label_trilho1->raise();
        label_trilho3->raise();
        label_trem1->raise();
        label_trilho1_2->raise();
        label_trem2->raise();
        label_trem3->raise();
        label_trem5->raise();
        label_trem4->raise();
        horizontalSlider_1->raise();
        horizontalSlider_2->raise();
        horizontalSlider_3->raise();
        horizontalSlider_4->raise();
        horizontalSlider_5->raise();
        vT1->raise();
        vT2->raise();
        vT3->raise();
        vT4->raise();
        vT5->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 932, 22));
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
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_trem1->setText(QCoreApplication::translate("MainWindow", "T1", nullptr));
        label_trilho1->setText(QString());
        label_trilho2->setText(QString());
        label_trilho3->setText(QString());
        label_trilho4->setText(QString());
        label_trilho4_2->setText(QString());
        label_trilho1_2->setText(QString());
        label_trilho2_2->setText(QString());
        label_trem2->setText(QCoreApplication::translate("MainWindow", "T2", nullptr));
        label_trem3->setText(QCoreApplication::translate("MainWindow", "T3", nullptr));
        label_trem5->setText(QCoreApplication::translate("MainWindow", "T5", nullptr));
        label_trem4->setText(QCoreApplication::translate("MainWindow", "T4", nullptr));
        label_trilho3_2->setText(QString());
        label_trilho4_3->setText(QString());
        label_trilho1_3->setText(QString());
        label_trilho2_3->setText(QString());
        label_trilho4_4->setText(QString());
        label_trilho1_4->setText(QString());
        label_trilho2_4->setText(QString());
        label_trilho3_4->setText(QString());
        label_trilho1_5->setText(QString());
        label_trilho2_5->setText(QString());
        vT1->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        vT2->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        vT3->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        vT4->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        vT5->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
