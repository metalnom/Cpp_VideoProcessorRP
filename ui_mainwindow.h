/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView_org;
    QLabel *label_2;
    QTabWidget *tabWidget;
    QWidget *tab_RGB;
    QGraphicsView *graphicsView_BR;
    QGraphicsView *graphicsView_B;
    QGraphicsView *graphicsView_G;
    QGraphicsView *graphicsView_R;
    QGraphicsView *graphicsView_RG;
    QGraphicsView *graphicsView_GB;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QWidget *tab_HISTO;
    QGraphicsView *graphicsView_H_R;
    QGraphicsView *graphicsView_H_RH;
    QGraphicsView *graphicsView_H_G;
    QGraphicsView *graphicsView_H_GH;
    QGraphicsView *graphicsView_H_B;
    QGraphicsView *graphicsView_H_BH;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *tab_BLUREDGE;
    QGraphicsView *graphicsView_GAUSS;
    QGraphicsView *graphicsView_CANNY;
    QLabel *label_15;
    QLabel *label_16;
    QWidget *tab_MOVE;
    QFrame *frame;
    QGraphicsView *graphicsView_MOV;
    QPushButton *pushButton_MOV_UP;
    QPushButton *pushButton_MOV_DOWN;
    QPushButton *pushButton_MOV_RIGHT;
    QPushButton *pushButton_MOV_LEFT;
    QPushButton *pushButton_MOV_HOME;
    QPushButton *pushButton_MOV_zin;
    QPushButton *pushButton_MOV_zout;
    QLabel *label_3;
    QLabel *label_11;
    QWidget *tab_DETECT;
    QGraphicsView *graphicsView_DET;
    QRadioButton *radioButton_car;
    QRadioButton *radioButton_face;
    QWidget *tab_SENSORctrl;
    QGraphicsView *graphicsView_SEN;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_26;
    QLCDNumber *SEN_Number;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *CameraIndex;
    QPushButton *startBtn_MAIN;
    QPushButton *pushButtonRCCW;
    QPushButton *pushButtonTORG;
    QPushButton *pushButtonRCW;
    QGraphicsView *graphicsView_ROT;
    QLabel *label_10;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_13;
    QLineEdit *PATH_CAP;
    QPushButton *startBtn_CAP;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_14;
    QLineEdit *PATH_REC;
    QPushButton *startBtn_REC;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1133, 751);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        graphicsView_org = new QGraphicsView(centralwidget);
        graphicsView_org->setObjectName(QStringLiteral("graphicsView_org"));
        graphicsView_org->setGeometry(QRect(10, 90, 511, 331));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(13, 70, 67, 17));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(530, 70, 591, 671));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(238, 238, 236, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(246, 246, 245, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(119, 119, 118, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(159, 159, 157, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush7(QColor(0, 0, 0, 128));
        brush7.setStyle(Qt::SolidPattern);
//        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
//        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
//        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
        tabWidget->setPalette(palette);
        tab_RGB = new QWidget();
        tab_RGB->setObjectName(QStringLiteral("tab_RGB"));
        graphicsView_BR = new QGraphicsView(tab_RGB);
        graphicsView_BR->setObjectName(QStringLiteral("graphicsView_BR"));
        graphicsView_BR->setGeometry(QRect(310, 450, 271, 181));
        graphicsView_B = new QGraphicsView(tab_RGB);
        graphicsView_B->setObjectName(QStringLiteral("graphicsView_B"));
        graphicsView_B->setGeometry(QRect(10, 450, 271, 181));
        graphicsView_G = new QGraphicsView(tab_RGB);
        graphicsView_G->setObjectName(QStringLiteral("graphicsView_G"));
        graphicsView_G->setGeometry(QRect(10, 240, 271, 181));
        graphicsView_R = new QGraphicsView(tab_RGB);
        graphicsView_R->setObjectName(QStringLiteral("graphicsView_R"));
        graphicsView_R->setGeometry(QRect(10, 30, 271, 181));
        graphicsView_RG = new QGraphicsView(tab_RGB);
        graphicsView_RG->setObjectName(QStringLiteral("graphicsView_RG"));
        graphicsView_RG->setGeometry(QRect(310, 30, 271, 181));
        graphicsView_GB = new QGraphicsView(tab_RGB);
        graphicsView_GB->setObjectName(QStringLiteral("graphicsView_GB"));
        graphicsView_GB->setGeometry(QRect(310, 240, 271, 181));
        label_20 = new QLabel(tab_RGB);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(12, 10, 67, 17));
        label_21 = new QLabel(tab_RGB);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(12, 220, 67, 17));
        label_22 = new QLabel(tab_RGB);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(12, 430, 67, 17));
        label_23 = new QLabel(tab_RGB);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(312, 10, 101, 17));
        label_24 = new QLabel(tab_RGB);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(312, 220, 101, 17));
        label_25 = new QLabel(tab_RGB);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(312, 430, 101, 17));
        tabWidget->addTab(tab_RGB, QString());
        tab_HISTO = new QWidget();
        tab_HISTO->setObjectName(QStringLiteral("tab_HISTO"));
        graphicsView_H_R = new QGraphicsView(tab_HISTO);
        graphicsView_H_R->setObjectName(QStringLiteral("graphicsView_H_R"));
        graphicsView_H_R->setGeometry(QRect(10, 30, 271, 181));
        graphicsView_H_RH = new QGraphicsView(tab_HISTO);
        graphicsView_H_RH->setObjectName(QStringLiteral("graphicsView_H_RH"));
        graphicsView_H_RH->setGeometry(QRect(310, 30, 271, 181));
        graphicsView_H_G = new QGraphicsView(tab_HISTO);
        graphicsView_H_G->setObjectName(QStringLiteral("graphicsView_H_G"));
        graphicsView_H_G->setGeometry(QRect(10, 240, 271, 181));
        graphicsView_H_GH = new QGraphicsView(tab_HISTO);
        graphicsView_H_GH->setObjectName(QStringLiteral("graphicsView_H_GH"));
        graphicsView_H_GH->setGeometry(QRect(310, 240, 271, 181));
        graphicsView_H_B = new QGraphicsView(tab_HISTO);
        graphicsView_H_B->setObjectName(QStringLiteral("graphicsView_H_B"));
        graphicsView_H_B->setGeometry(QRect(10, 450, 271, 181));
        graphicsView_H_BH = new QGraphicsView(tab_HISTO);
        graphicsView_H_BH->setObjectName(QStringLiteral("graphicsView_H_BH"));
        graphicsView_H_BH->setGeometry(QRect(310, 450, 271, 181));
        label_4 = new QLabel(tab_HISTO);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(12, 10, 67, 17));
        label_5 = new QLabel(tab_HISTO);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(12, 220, 67, 17));
        label_6 = new QLabel(tab_HISTO);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(12, 430, 67, 17));
        label_7 = new QLabel(tab_HISTO);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(312, 10, 71, 17));
        label_8 = new QLabel(tab_HISTO);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(312, 220, 91, 17));
        label_9 = new QLabel(tab_HISTO);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(312, 430, 91, 17));
        tabWidget->addTab(tab_HISTO, QString());
        tab_BLUREDGE = new QWidget();
        tab_BLUREDGE->setObjectName(QStringLiteral("tab_BLUREDGE"));
        graphicsView_GAUSS = new QGraphicsView(tab_BLUREDGE);
        graphicsView_GAUSS->setObjectName(QStringLiteral("graphicsView_GAUSS"));
        graphicsView_GAUSS->setGeometry(QRect(10, 10, 421, 311));
        graphicsView_CANNY = new QGraphicsView(tab_BLUREDGE);
        graphicsView_CANNY->setObjectName(QStringLiteral("graphicsView_CANNY"));
        graphicsView_CANNY->setGeometry(QRect(150, 330, 431, 301));
        label_15 = new QLabel(tab_BLUREDGE);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(440, 10, 101, 17));
        label_16 = new QLabel(tab_BLUREDGE);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(50, 610, 91, 17));
        tabWidget->addTab(tab_BLUREDGE, QString());
        tab_MOVE = new QWidget();
        tab_MOVE->setObjectName(QStringLiteral("tab_MOVE"));
        frame = new QFrame(tab_MOVE);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(8, 10, 601, 461));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        graphicsView_MOV = new QGraphicsView(frame);
        graphicsView_MOV->setObjectName(QStringLiteral("graphicsView_MOV"));
        graphicsView_MOV->setGeometry(QRect(160, 130, 256, 192));
        pushButton_MOV_UP = new QPushButton(tab_MOVE);
        pushButton_MOV_UP->setObjectName(QStringLiteral("pushButton_MOV_UP"));
        pushButton_MOV_UP->setGeometry(QRect(360, 500, 71, 25));
        pushButton_MOV_DOWN = new QPushButton(tab_MOVE);
        pushButton_MOV_DOWN->setObjectName(QStringLiteral("pushButton_MOV_DOWN"));
        pushButton_MOV_DOWN->setGeometry(QRect(360, 580, 71, 25));
        pushButton_MOV_RIGHT = new QPushButton(tab_MOVE);
        pushButton_MOV_RIGHT->setObjectName(QStringLiteral("pushButton_MOV_RIGHT"));
        pushButton_MOV_RIGHT->setGeometry(QRect(440, 540, 71, 25));
        pushButton_MOV_LEFT = new QPushButton(tab_MOVE);
        pushButton_MOV_LEFT->setObjectName(QStringLiteral("pushButton_MOV_LEFT"));
        pushButton_MOV_LEFT->setGeometry(QRect(280, 540, 71, 25));
        pushButton_MOV_HOME = new QPushButton(tab_MOVE);
        pushButton_MOV_HOME->setObjectName(QStringLiteral("pushButton_MOV_HOME"));
        pushButton_MOV_HOME->setGeometry(QRect(360, 540, 71, 25));
        pushButton_MOV_zin = new QPushButton(tab_MOVE);
        pushButton_MOV_zin->setObjectName(QStringLiteral("pushButton_MOV_zin"));
        pushButton_MOV_zin->setGeometry(QRect(110, 520, 89, 25));
        pushButton_MOV_zout = new QPushButton(tab_MOVE);
        pushButton_MOV_zout->setObjectName(QStringLiteral("pushButton_MOV_zout"));
        pushButton_MOV_zout->setGeometry(QRect(110, 560, 89, 25));
        label_3 = new QLabel(tab_MOVE);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 500, 41, 17));
        label_11 = new QLabel(tab_MOVE);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(290, 500, 41, 17));
        tabWidget->addTab(tab_MOVE, QString());
        tab_DETECT = new QWidget();
        tab_DETECT->setObjectName(QStringLiteral("tab_DETECT"));
        graphicsView_DET = new QGraphicsView(tab_DETECT);
        graphicsView_DET->setObjectName(QStringLiteral("graphicsView_DET"));
        graphicsView_DET->setGeometry(QRect(20, 50, 551, 361));
        radioButton_car = new QRadioButton(tab_DETECT);
        radioButton_car->setObjectName(QStringLiteral("radioButton_car"));
        radioButton_car->setGeometry(QRect(140, 470, 251, 23));
        radioButton_face = new QRadioButton(tab_DETECT);
        radioButton_face->setObjectName(QStringLiteral("radioButton_face"));
        radioButton_face->setGeometry(QRect(140, 510, 231, 23));
        tabWidget->addTab(tab_DETECT, QString());
        tab_SENSORctrl = new QWidget();
        tab_SENSORctrl->setObjectName(QStringLiteral("tab_SENSORctrl"));
        graphicsView_SEN = new QGraphicsView(tab_SENSORctrl);
        graphicsView_SEN->setObjectName(QStringLiteral("graphicsView_SEN"));
        graphicsView_SEN->setGeometry(QRect(20, 50, 551, 361));
        layoutWidget_8 = new QWidget(tab_SENSORctrl);
        layoutWidget_8->setObjectName(QStringLiteral("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(130, 520, 341, 41));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_26 = new QLabel(layoutWidget_8);
        label_26->setObjectName(QStringLiteral("label_26"));

        horizontalLayout_8->addWidget(label_26);

        SEN_Number = new QLCDNumber(layoutWidget_8);
        SEN_Number->setObjectName(QStringLiteral("SEN_Number"));

        horizontalLayout_8->addWidget(SEN_Number);

        tabWidget->addTab(tab_SENSORctrl, QString());
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(660, 10, 451, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        CameraIndex = new QLineEdit(layoutWidget);
        CameraIndex->setObjectName(QStringLiteral("CameraIndex"));

        horizontalLayout->addWidget(CameraIndex);

        startBtn_MAIN = new QPushButton(layoutWidget);
        startBtn_MAIN->setObjectName(QStringLiteral("startBtn_MAIN"));

        horizontalLayout->addWidget(startBtn_MAIN);

        pushButtonRCCW = new QPushButton(centralwidget);
        pushButtonRCCW->setObjectName(QStringLiteral("pushButtonRCCW"));
        pushButtonRCCW->setGeometry(QRect(50, 700, 141, 41));
        pushButtonTORG = new QPushButton(centralwidget);
        pushButtonTORG->setObjectName(QStringLiteral("pushButtonTORG"));
        pushButtonTORG->setGeometry(QRect(200, 700, 141, 41));
        pushButtonRCW = new QPushButton(centralwidget);
        pushButtonRCW->setObjectName(QStringLiteral("pushButtonRCW"));
        pushButtonRCW->setGeometry(QRect(350, 700, 141, 41));
        graphicsView_ROT = new QGraphicsView(centralwidget);
        graphicsView_ROT->setObjectName(QStringLiteral("graphicsView_ROT"));
        graphicsView_ROT->setGeometry(QRect(120, 500, 291, 191));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(50, 510, 67, 31));
        layoutWidget_4 = new QWidget(centralwidget);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(20, 430, 491, 31));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget_4);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_4->addWidget(label_13);

        PATH_CAP = new QLineEdit(layoutWidget_4);
        PATH_CAP->setObjectName(QStringLiteral("PATH_CAP"));

        horizontalLayout_4->addWidget(PATH_CAP);

        startBtn_CAP = new QPushButton(layoutWidget_4);
        startBtn_CAP->setObjectName(QStringLiteral("startBtn_CAP"));

        horizontalLayout_4->addWidget(startBtn_CAP);

        layoutWidget_5 = new QWidget(centralwidget);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(20, 460, 491, 31));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget_5);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_5->addWidget(label_14);

        PATH_REC = new QLineEdit(layoutWidget_5);
        PATH_REC->setObjectName(QStringLiteral("PATH_REC"));

        horizontalLayout_5->addWidget(PATH_REC);

        startBtn_REC = new QPushButton(layoutWidget_5);
        startBtn_REC->setObjectName(QStringLiteral("startBtn_REC"));

        horizontalLayout_5->addWidget(startBtn_REC);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 10, 381, 51));
        QFont font;
        font.setPointSize(28);
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(430, 20, 181, 31));
        QFont font1;
        font1.setPointSize(15);
        pushButton_3->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Original", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "RED", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "GREEN", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "BLUE", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "RED-GREEN", nullptr));
        label_24->setText(QApplication::translate("MainWindow", "GREEN-BLUE", nullptr));
        label_25->setText(QApplication::translate("MainWindow", "BLUE-RED", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_RGB), QApplication::translate("MainWindow", "RGB", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "RED", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "GREEN", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "BLUE", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "RED-HIST", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "GREEN-HIST", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "BLUE-HIST", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_HISTO), QApplication::translate("MainWindow", "HISTO", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "Gaussian Blur", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "Canny Edge", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_BLUREDGE), QApplication::translate("MainWindow", "BLUR_EDGE", nullptr));
        pushButton_MOV_UP->setText(QApplication::translate("MainWindow", "UP", nullptr));
        pushButton_MOV_DOWN->setText(QApplication::translate("MainWindow", "DOWN", nullptr));
        pushButton_MOV_RIGHT->setText(QApplication::translate("MainWindow", "RIGHT", nullptr));
        pushButton_MOV_LEFT->setText(QApplication::translate("MainWindow", "LEFT", nullptr));
        pushButton_MOV_HOME->setText(QApplication::translate("MainWindow", "HOME", nullptr));
        pushButton_MOV_zin->setText(QApplication::translate("MainWindow", "+", nullptr));
        pushButton_MOV_zout->setText(QApplication::translate("MainWindow", "-", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Zoom", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Move", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_MOVE), QApplication::translate("MainWindow", "MOVE", nullptr));
        radioButton_car->setText(QApplication::translate("MainWindow", "START DETECTING CAR", nullptr));
        radioButton_face->setText(QApplication::translate("MainWindow", "START DETECTING FACE", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_DETECT), QApplication::translate("MainWindow", "DETECT", nullptr));
        label_26->setText(QApplication::translate("MainWindow", "SENSOR VALUE : ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_SENSORctrl), QApplication::translate("MainWindow", "SENSORctrl", nullptr));
        label->setText(QApplication::translate("MainWindow", "Camera Index :", nullptr));
        CameraIndex->setText(QApplication::translate("MainWindow", "0", nullptr));
        startBtn_MAIN->setText(QApplication::translate("MainWindow", "Start", nullptr));
        pushButtonRCCW->setText(QApplication::translate("MainWindow", "Rotate CounterCW", nullptr));
        pushButtonTORG->setText(QApplication::translate("MainWindow", "To Original POS ", nullptr));
        pushButtonRCW->setText(QApplication::translate("MainWindow", "Rotate Clockwise", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "GRAY\n"
"ROTATED", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "CAPTURE PATH : ", nullptr));
        PATH_CAP->setText(QApplication::translate("MainWindow", "./capture_image.png", nullptr));
        startBtn_CAP->setText(QApplication::translate("MainWindow", "CAPTURE", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "RECORD PATH : ", nullptr));
        PATH_REC->setText(QApplication::translate("MainWindow", "./record_video.avi", nullptr));
        startBtn_REC->setText(QApplication::translate("MainWindow", "RECORD", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "VIDEO PROCESSOR", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Jung Changdo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
