/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QWidget *centralWidget;
    QLabel *label_algorithms;
    QListView *listView_algorithms;
    QLabel *label_inputdata;
    QLineEdit *lineEdit_inputdata;
    QPushButton *pushButton_inputdata;
    QCheckBox *checkBox_webcamera;
    QSpinBox *spinBox_webcamera;
    QCheckBox *checkBox_imageseq;
    QLabel *label_startat;
    QSpinBox *spinBox_startat;
    QLabel *label_stopat;
    QSpinBox *spinBox_stopat;
    QLabel *label_input;
    QLabel *label_img_in;
    QLabel *label_img_fg;
    QLabel *label_img_bg;
    QLabel *label_foreground;
    QLabel *label_background;
    QCheckBox *checkBox_save_im;
    QCheckBox *checkBox_save_fg;
    QCheckBox *checkBox_save_bg;
    QPushButton *pushButton_stop;
    QPushButton *pushButton_start;
    QProgressBar *progressBar;
    QLabel *label_exectime;
    QLabel *label_fps_txt;
    QLabel *label_framenumber;
    QLabel *label_framenumber_txt;
    QLabel *label_status;
    QLabel *label_frameres;
    QLabel *label_frameresw_txt;
    QLabel *label_frameresh_txt;
    QLabel *label_frameres_2;
    QLineEdit *lineEdit_out_in;
    QPushButton *pushButton_out_in;
    QLineEdit *lineEdit_out_fg;
    QPushButton *pushButton_out_fg;
    QPushButton *pushButton_out_bg;
    QLineEdit *lineEdit_out_bg;
    QCheckBox *checkBox_kfn;
    QLabel *label_config;
    QLineEdit *lineEdit_config;
    QMenuBar *menuBar;
    QMenu *menuBGSLibrary;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1070, 559);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        label_algorithms = new QLabel(centralWidget);
        label_algorithms->setObjectName("label_algorithms");
        label_algorithms->setGeometry(QRect(10, 10, 251, 16));
        listView_algorithms = new QListView(centralWidget);
        listView_algorithms->setObjectName("listView_algorithms");
        listView_algorithms->setGeometry(QRect(10, 30, 256, 361));
        listView_algorithms->setEditTriggers(QAbstractItemView::NoEditTriggers);
        label_inputdata = new QLabel(centralWidget);
        label_inputdata->setObjectName("label_inputdata");
        label_inputdata->setGeometry(QRect(280, 10, 601, 16));
        lineEdit_inputdata = new QLineEdit(centralWidget);
        lineEdit_inputdata->setObjectName("lineEdit_inputdata");
        lineEdit_inputdata->setGeometry(QRect(280, 30, 721, 22));
        pushButton_inputdata = new QPushButton(centralWidget);
        pushButton_inputdata->setObjectName("pushButton_inputdata");
        pushButton_inputdata->setGeometry(QRect(1010, 30, 40, 21));
        checkBox_webcamera = new QCheckBox(centralWidget);
        checkBox_webcamera->setObjectName("checkBox_webcamera");
        checkBox_webcamera->setGeometry(QRect(590, 60, 131, 20));
        spinBox_webcamera = new QSpinBox(centralWidget);
        spinBox_webcamera->setObjectName("spinBox_webcamera");
        spinBox_webcamera->setGeometry(QRect(720, 60, 42, 20));
        checkBox_imageseq = new QCheckBox(centralWidget);
        checkBox_imageseq->setObjectName("checkBox_imageseq");
        checkBox_imageseq->setGeometry(QRect(770, 60, 151, 20));
        label_startat = new QLabel(centralWidget);
        label_startat->setObjectName("label_startat");
        label_startat->setGeometry(QRect(945, 60, 55, 20));
        spinBox_startat = new QSpinBox(centralWidget);
        spinBox_startat->setObjectName("spinBox_startat");
        spinBox_startat->setGeometry(QRect(1000, 60, 50, 20));
        spinBox_startat->setMaximum(9999);
        label_stopat = new QLabel(centralWidget);
        label_stopat->setObjectName("label_stopat");
        label_stopat->setGeometry(QRect(945, 85, 55, 20));
        spinBox_stopat = new QSpinBox(centralWidget);
        spinBox_stopat->setObjectName("spinBox_stopat");
        spinBox_stopat->setGeometry(QRect(1000, 85, 50, 20));
        spinBox_stopat->setMaximum(9999);
        label_input = new QLabel(centralWidget);
        label_input->setObjectName("label_input");
        label_input->setGeometry(QRect(280, 120, 250, 16));
        label_input->setAlignment(Qt::AlignCenter);
        label_img_in = new QLabel(centralWidget);
        label_img_in->setObjectName("label_img_in");
        label_img_in->setGeometry(QRect(280, 140, 250, 250));
        label_img_in->setFrameShape(QFrame::Box);
        label_img_in->setAlignment(Qt::AlignCenter);
        label_img_fg = new QLabel(centralWidget);
        label_img_fg->setObjectName("label_img_fg");
        label_img_fg->setGeometry(QRect(540, 140, 250, 250));
        label_img_fg->setFrameShape(QFrame::Box);
        label_img_fg->setAlignment(Qt::AlignCenter);
        label_img_bg = new QLabel(centralWidget);
        label_img_bg->setObjectName("label_img_bg");
        label_img_bg->setGeometry(QRect(800, 140, 250, 250));
        label_img_bg->setFrameShape(QFrame::Box);
        label_img_bg->setAlignment(Qt::AlignCenter);
        label_foreground = new QLabel(centralWidget);
        label_foreground->setObjectName("label_foreground");
        label_foreground->setGeometry(QRect(540, 120, 250, 16));
        label_foreground->setAlignment(Qt::AlignCenter);
        label_background = new QLabel(centralWidget);
        label_background->setObjectName("label_background");
        label_background->setGeometry(QRect(800, 120, 250, 16));
        label_background->setAlignment(Qt::AlignCenter);
        checkBox_save_im = new QCheckBox(centralWidget);
        checkBox_save_im->setObjectName("checkBox_save_im");
        checkBox_save_im->setGeometry(QRect(280, 400, 52, 20));
        checkBox_save_fg = new QCheckBox(centralWidget);
        checkBox_save_fg->setObjectName("checkBox_save_fg");
        checkBox_save_fg->setGeometry(QRect(540, 400, 52, 20));
        checkBox_save_bg = new QCheckBox(centralWidget);
        checkBox_save_bg->setObjectName("checkBox_save_bg");
        checkBox_save_bg->setGeometry(QRect(800, 400, 52, 20));
        pushButton_stop = new QPushButton(centralWidget);
        pushButton_stop->setObjectName("pushButton_stop");
        pushButton_stop->setGeometry(QRect(960, 470, 93, 23));
        pushButton_start = new QPushButton(centralWidget);
        pushButton_start->setObjectName("pushButton_start");
        pushButton_start->setGeometry(QRect(850, 470, 93, 23));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(280, 470, 550, 23));
        progressBar->setValue(0);
        label_exectime = new QLabel(centralWidget);
        label_exectime->setObjectName("label_exectime");
        label_exectime->setGeometry(QRect(10, 400, 121, 16));
        label_fps_txt = new QLabel(centralWidget);
        label_fps_txt->setObjectName("label_fps_txt");
        label_fps_txt->setGeometry(QRect(210, 400, 55, 16));
        label_fps_txt->setLayoutDirection(Qt::LeftToRight);
        label_fps_txt->setFrameShape(QFrame::Box);
        label_fps_txt->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_framenumber = new QLabel(centralWidget);
        label_framenumber->setObjectName("label_framenumber");
        label_framenumber->setGeometry(QRect(10, 420, 121, 16));
        label_framenumber_txt = new QLabel(centralWidget);
        label_framenumber_txt->setObjectName("label_framenumber_txt");
        label_framenumber_txt->setGeometry(QRect(210, 420, 55, 16));
        label_framenumber_txt->setLayoutDirection(Qt::LeftToRight);
        label_framenumber_txt->setFrameShape(QFrame::Box);
        label_framenumber_txt->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_status = new QLabel(centralWidget);
        label_status->setObjectName("label_status");
        label_status->setGeometry(QRect(209, 470, 61, 23));
        label_frameres = new QLabel(centralWidget);
        label_frameres->setObjectName("label_frameres");
        label_frameres->setGeometry(QRect(10, 440, 121, 16));
        label_frameresw_txt = new QLabel(centralWidget);
        label_frameresw_txt->setObjectName("label_frameresw_txt");
        label_frameresw_txt->setGeometry(QRect(140, 440, 55, 16));
        label_frameresw_txt->setLayoutDirection(Qt::LeftToRight);
        label_frameresw_txt->setFrameShape(QFrame::Box);
        label_frameresw_txt->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_frameresh_txt = new QLabel(centralWidget);
        label_frameresh_txt->setObjectName("label_frameresh_txt");
        label_frameresh_txt->setGeometry(QRect(210, 440, 55, 16));
        label_frameresh_txt->setLayoutDirection(Qt::LeftToRight);
        label_frameresh_txt->setFrameShape(QFrame::Box);
        label_frameresh_txt->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_frameres_2 = new QLabel(centralWidget);
        label_frameres_2->setObjectName("label_frameres_2");
        label_frameres_2->setGeometry(QRect(193, 440, 21, 16));
        label_frameres_2->setAlignment(Qt::AlignCenter);
        lineEdit_out_in = new QLineEdit(centralWidget);
        lineEdit_out_in->setObjectName("lineEdit_out_in");
        lineEdit_out_in->setGeometry(QRect(348, 400, 140, 20));
        pushButton_out_in = new QPushButton(centralWidget);
        pushButton_out_in->setObjectName("pushButton_out_in");
        pushButton_out_in->setGeometry(QRect(490, 400, 40, 20));
        lineEdit_out_fg = new QLineEdit(centralWidget);
        lineEdit_out_fg->setObjectName("lineEdit_out_fg");
        lineEdit_out_fg->setGeometry(QRect(608, 400, 140, 20));
        pushButton_out_fg = new QPushButton(centralWidget);
        pushButton_out_fg->setObjectName("pushButton_out_fg");
        pushButton_out_fg->setGeometry(QRect(750, 400, 40, 20));
        pushButton_out_bg = new QPushButton(centralWidget);
        pushButton_out_bg->setObjectName("pushButton_out_bg");
        pushButton_out_bg->setGeometry(QRect(1010, 400, 40, 20));
        lineEdit_out_bg = new QLineEdit(centralWidget);
        lineEdit_out_bg->setObjectName("lineEdit_out_bg");
        lineEdit_out_bg->setGeometry(QRect(868, 400, 140, 20));
        checkBox_kfn = new QCheckBox(centralWidget);
        checkBox_kfn->setObjectName("checkBox_kfn");
        checkBox_kfn->setGeometry(QRect(280, 420, 141, 20));
        checkBox_kfn->setChecked(true);
        label_config = new QLabel(centralWidget);
        label_config->setObjectName("label_config");
        label_config->setGeometry(QRect(280, 60, 91, 23));
        lineEdit_config = new QLineEdit(centralWidget);
        lineEdit_config->setObjectName("lineEdit_config");
        lineEdit_config->setGeometry(QRect(280, 90, 641, 22));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1070, 22));
        menuBGSLibrary = new QMenu(menuBar);
        menuBGSLibrary->setObjectName("menuBGSLibrary");
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuBGSLibrary->menuAction());
        menuBGSLibrary->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "BGSLibrary QT GUI", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        label_algorithms->setText(QCoreApplication::translate("MainWindow", "Algorithms", nullptr));
        label_inputdata->setText(QCoreApplication::translate("MainWindow", "Input (specify a video file or a directory path containing the sequence of images)", nullptr));
        lineEdit_inputdata->setText(QCoreApplication::translate("MainWindow", "./dataset/video.avi", nullptr));
        pushButton_inputdata->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        checkBox_webcamera->setText(QCoreApplication::translate("MainWindow", "Use web camera", nullptr));
        checkBox_imageseq->setText(QCoreApplication::translate("MainWindow", "Sequence of images?", nullptr));
        label_startat->setText(QCoreApplication::translate("MainWindow", "Start at:", nullptr));
        label_stopat->setText(QCoreApplication::translate("MainWindow", "Stop at:", nullptr));
        label_input->setText(QCoreApplication::translate("MainWindow", "Input", nullptr));
        label_img_in->setText(QCoreApplication::translate("MainWindow", "IMG_INPUT", nullptr));
        label_img_fg->setText(QCoreApplication::translate("MainWindow", "IMG_FOREGROUND", nullptr));
        label_img_bg->setText(QCoreApplication::translate("MainWindow", "IMG_BACKGROUND", nullptr));
        label_foreground->setText(QCoreApplication::translate("MainWindow", "Foreground mask", nullptr));
        label_background->setText(QCoreApplication::translate("MainWindow", "Background model", nullptr));
        checkBox_save_im->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        checkBox_save_fg->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        checkBox_save_bg->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        pushButton_stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        pushButton_start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        label_exectime->setText(QCoreApplication::translate("MainWindow", "Estimated FPS:", nullptr));
        label_fps_txt->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_framenumber->setText(QCoreApplication::translate("MainWindow", "Frame number:", nullptr));
        label_framenumber_txt->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_status->setText(QCoreApplication::translate("MainWindow", "Progress:", nullptr));
        label_frameres->setText(QCoreApplication::translate("MainWindow", "Frame resolution:", nullptr));
        label_frameresw_txt->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_frameresh_txt->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_frameres_2->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        lineEdit_out_in->setText(QCoreApplication::translate("MainWindow", "./output/in/", nullptr));
        pushButton_out_in->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        lineEdit_out_fg->setText(QCoreApplication::translate("MainWindow", "./output/fg/", nullptr));
        pushButton_out_fg->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        pushButton_out_bg->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        lineEdit_out_bg->setText(QCoreApplication::translate("MainWindow", "./output/bg/", nullptr));
        checkBox_kfn->setText(QCoreApplication::translate("MainWindow", "Keep frame number", nullptr));
        label_config->setText(QCoreApplication::translate("MainWindow", "Config folder", nullptr));
        lineEdit_config->setText(QCoreApplication::translate("MainWindow", "./config", nullptr));
        menuBGSLibrary->setTitle(QCoreApplication::translate("MainWindow", "BGSLibrary", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
