/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *start_Page;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *s_Left_Spacer;
    QVBoxLayout *s_V_Layout;
    QPushButton *s_NewGame_Button;
    QPushButton *s_LoadGame_Button;
    QPushButton *s_Options_Button;
    QPushButton *s_Credits_Button;
    QPushButton *s_Exit_Button;
    QSpacerItem *s_Right_Spacer;
    QWidget *newGame_Page;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QLabel *n_Type_Label;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *n_H_Layout;
    QSpacerItem *n_Left_Spacer;
    QListView *n_Games_List;
    QSpacerItem *n_Right_Spacer;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *n_H_Layout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *n_Back_Button;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *n_Play_Button;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QWidget *loadGame_Page;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_5;
    QLabel *l_Savedata_Label;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *l_H_Layout;
    QSpacerItem *l_Left_Spacer;
    QListWidget *l_Saves_List;
    QSpacerItem *l_Right_Spacer;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *l_H_Layout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *l_Back_Button;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *l_Continue_Button;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_8;
    QWidget *options_Page;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *o_Left_Spacer;
    QVBoxLayout *o_V_Layout;
    QPushButton *o_Video_Button;
    QPushButton *o_Sound_Button;
    QPushButton *o_Back_Button;
    QSpacerItem *o_Right_Spacer;
    QWidget *video_Page;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *ov_Left_Spacer;
    QGridLayout *ov_Grid_Layout;
    QPushButton *ov_Back_Button;
    QPushButton *ov_Save_Button;
    QSpacerItem *ov_H_Spacer;
    QRadioButton *ov_Fullscreen_RadioButton;
    QRadioButton *ov_Window_RadioButton;
    QSpacerItem *ov_Right_Spacer;
    QWidget *sound_Page;
    QGridLayout *gridLayout_4;
    QLCDNumber *os_Music_LCD;
    QLCDNumber *os_Master_LCD;
    QLCDNumber *os_Effects_LCD;
    QSpacerItem *os_Left_Spacer;
    QSpacerItem *os_Right_Spacer;
    QSlider *os_Master_Slider;
    QSlider *os_Music_Slider;
    QSlider *os_Effects_Slider;
    QSpacerItem *os_V_Spacer_2;
    QLabel *os_Master_Label;
    QLabel *os_Music_Label;
    QSpacerItem *os_V_Spacer_3;
    QLabel *os_Effects_Label;
    QHBoxLayout *os_H_Layout;
    QPushButton *os_Back_Button;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *os_Save_Button;
    QSpacerItem *os_V_Spacer_5;
    QSpacerItem *os_V_Spacer;
    QSpacerItem *os_V_Spacer_4;
    QWidget *credits_Page;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *c_Left_Spacer;
    QGroupBox *c_Grid_Layout;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_9;
    QPushButton *c_Back_Button;
    QLabel *c_Credits_Label;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *c_Right_Spacer;
    QWidget *gameFrame_Page;
    QHBoxLayout *horizontalLayout_2;
    QOpenGLWidget *widgetGL;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QStringLiteral("MainWindowClass"));
        MainWindowClass->resize(1500, 1000);
        MainWindowClass->setMinimumSize(QSize(1500, 1000));
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setStyleSheet(QStringLiteral(".QStackedWidget { border-image: url(:/MainMenu/Background); }"));
        start_Page = new QWidget();
        start_Page->setObjectName(QStringLiteral("start_Page"));
        horizontalLayout = new QHBoxLayout(start_Page);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        s_Left_Spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(s_Left_Spacer);

        s_V_Layout = new QVBoxLayout();
        s_V_Layout->setSpacing(6);
        s_V_Layout->setObjectName(QStringLiteral("s_V_Layout"));
        s_NewGame_Button = new QPushButton(start_Page);
        s_NewGame_Button->setObjectName(QStringLiteral("s_NewGame_Button"));

        s_V_Layout->addWidget(s_NewGame_Button);

        s_LoadGame_Button = new QPushButton(start_Page);
        s_LoadGame_Button->setObjectName(QStringLiteral("s_LoadGame_Button"));

        s_V_Layout->addWidget(s_LoadGame_Button);

        s_Options_Button = new QPushButton(start_Page);
        s_Options_Button->setObjectName(QStringLiteral("s_Options_Button"));

        s_V_Layout->addWidget(s_Options_Button);

        s_Credits_Button = new QPushButton(start_Page);
        s_Credits_Button->setObjectName(QStringLiteral("s_Credits_Button"));

        s_V_Layout->addWidget(s_Credits_Button);

        s_Exit_Button = new QPushButton(start_Page);
        s_Exit_Button->setObjectName(QStringLiteral("s_Exit_Button"));

        s_V_Layout->addWidget(s_Exit_Button);


        horizontalLayout->addLayout(s_V_Layout);

        s_Right_Spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(s_Right_Spacer);

        stackedWidget->addWidget(start_Page);
        newGame_Page = new QWidget();
        newGame_Page->setObjectName(QStringLiteral("newGame_Page"));
        verticalLayout_3 = new QVBoxLayout(newGame_Page);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        n_Type_Label = new QLabel(newGame_Page);
        n_Type_Label->setObjectName(QStringLiteral("n_Type_Label"));
        n_Type_Label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(n_Type_Label);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        n_H_Layout = new QHBoxLayout();
        n_H_Layout->setSpacing(6);
        n_H_Layout->setObjectName(QStringLiteral("n_H_Layout"));
        n_Left_Spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        n_H_Layout->addItem(n_Left_Spacer);

        n_Games_List = new QListView(newGame_Page);
        n_Games_List->setObjectName(QStringLiteral("n_Games_List"));

        n_H_Layout->addWidget(n_Games_List);

        n_Right_Spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        n_H_Layout->addItem(n_Right_Spacer);


        verticalLayout_3->addLayout(n_H_Layout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        n_H_Layout_2 = new QHBoxLayout();
        n_H_Layout_2->setSpacing(6);
        n_H_Layout_2->setObjectName(QStringLiteral("n_H_Layout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        n_H_Layout_2->addItem(horizontalSpacer);

        n_Back_Button = new QPushButton(newGame_Page);
        n_Back_Button->setObjectName(QStringLiteral("n_Back_Button"));

        n_H_Layout_2->addWidget(n_Back_Button);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        n_H_Layout_2->addItem(horizontalSpacer_3);

        n_Play_Button = new QPushButton(newGame_Page);
        n_Play_Button->setObjectName(QStringLiteral("n_Play_Button"));

        n_H_Layout_2->addWidget(n_Play_Button);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        n_H_Layout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(n_H_Layout_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        stackedWidget->addWidget(newGame_Page);
        loadGame_Page = new QWidget();
        loadGame_Page->setObjectName(QStringLiteral("loadGame_Page"));
        verticalLayout_4 = new QVBoxLayout(loadGame_Page);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);

        l_Savedata_Label = new QLabel(loadGame_Page);
        l_Savedata_Label->setObjectName(QStringLiteral("l_Savedata_Label"));
        l_Savedata_Label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(l_Savedata_Label);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_6);

        l_H_Layout = new QHBoxLayout();
        l_H_Layout->setSpacing(6);
        l_H_Layout->setObjectName(QStringLiteral("l_H_Layout"));
        l_Left_Spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        l_H_Layout->addItem(l_Left_Spacer);

        l_Saves_List = new QListWidget(loadGame_Page);
        l_Saves_List->setObjectName(QStringLiteral("l_Saves_List"));

        l_H_Layout->addWidget(l_Saves_List);

        l_Right_Spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        l_H_Layout->addItem(l_Right_Spacer);


        verticalLayout_4->addLayout(l_H_Layout);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_7);

        l_H_Layout_2 = new QHBoxLayout();
        l_H_Layout_2->setSpacing(6);
        l_H_Layout_2->setObjectName(QStringLiteral("l_H_Layout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        l_H_Layout_2->addItem(horizontalSpacer_4);

        l_Back_Button = new QPushButton(loadGame_Page);
        l_Back_Button->setObjectName(QStringLiteral("l_Back_Button"));

        l_H_Layout_2->addWidget(l_Back_Button);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        l_H_Layout_2->addItem(horizontalSpacer_5);

        l_Continue_Button = new QPushButton(loadGame_Page);
        l_Continue_Button->setObjectName(QStringLiteral("l_Continue_Button"));

        l_H_Layout_2->addWidget(l_Continue_Button);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        l_H_Layout_2->addItem(horizontalSpacer_6);


        verticalLayout_4->addLayout(l_H_Layout_2);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_8);

        stackedWidget->addWidget(loadGame_Page);
        options_Page = new QWidget();
        options_Page->setObjectName(QStringLiteral("options_Page"));
        horizontalLayout_8 = new QHBoxLayout(options_Page);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        o_Left_Spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(o_Left_Spacer);

        o_V_Layout = new QVBoxLayout();
        o_V_Layout->setSpacing(6);
        o_V_Layout->setObjectName(QStringLiteral("o_V_Layout"));
        o_Video_Button = new QPushButton(options_Page);
        o_Video_Button->setObjectName(QStringLiteral("o_Video_Button"));

        o_V_Layout->addWidget(o_Video_Button);

        o_Sound_Button = new QPushButton(options_Page);
        o_Sound_Button->setObjectName(QStringLiteral("o_Sound_Button"));

        o_V_Layout->addWidget(o_Sound_Button);

        o_Back_Button = new QPushButton(options_Page);
        o_Back_Button->setObjectName(QStringLiteral("o_Back_Button"));

        o_V_Layout->addWidget(o_Back_Button);


        horizontalLayout_8->addLayout(o_V_Layout);

        o_Right_Spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(o_Right_Spacer);

        stackedWidget->addWidget(options_Page);
        video_Page = new QWidget();
        video_Page->setObjectName(QStringLiteral("video_Page"));
        horizontalLayout_12 = new QHBoxLayout(video_Page);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        ov_Left_Spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(ov_Left_Spacer);

        ov_Grid_Layout = new QGridLayout();
        ov_Grid_Layout->setSpacing(6);
        ov_Grid_Layout->setObjectName(QStringLiteral("ov_Grid_Layout"));
        ov_Back_Button = new QPushButton(video_Page);
        ov_Back_Button->setObjectName(QStringLiteral("ov_Back_Button"));

        ov_Grid_Layout->addWidget(ov_Back_Button, 4, 0, 1, 1);

        ov_Save_Button = new QPushButton(video_Page);
        ov_Save_Button->setObjectName(QStringLiteral("ov_Save_Button"));

        ov_Grid_Layout->addWidget(ov_Save_Button, 4, 2, 1, 1);

        ov_H_Spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ov_Grid_Layout->addItem(ov_H_Spacer, 4, 1, 1, 1);

        ov_Fullscreen_RadioButton = new QRadioButton(video_Page);
        ov_Fullscreen_RadioButton->setObjectName(QStringLiteral("ov_Fullscreen_RadioButton"));

        ov_Grid_Layout->addWidget(ov_Fullscreen_RadioButton, 2, 1, 1, 1);

        ov_Window_RadioButton = new QRadioButton(video_Page);
        ov_Window_RadioButton->setObjectName(QStringLiteral("ov_Window_RadioButton"));

        ov_Grid_Layout->addWidget(ov_Window_RadioButton, 3, 1, 1, 1);


        horizontalLayout_12->addLayout(ov_Grid_Layout);

        ov_Right_Spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(ov_Right_Spacer);

        stackedWidget->addWidget(video_Page);
        sound_Page = new QWidget();
        sound_Page->setObjectName(QStringLiteral("sound_Page"));
        gridLayout_4 = new QGridLayout(sound_Page);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        os_Music_LCD = new QLCDNumber(sound_Page);
        os_Music_LCD->setObjectName(QStringLiteral("os_Music_LCD"));

        gridLayout_4->addWidget(os_Music_LCD, 8, 4, 1, 1);

        os_Master_LCD = new QLCDNumber(sound_Page);
        os_Master_LCD->setObjectName(QStringLiteral("os_Master_LCD"));

        gridLayout_4->addWidget(os_Master_LCD, 2, 4, 1, 1);

        os_Effects_LCD = new QLCDNumber(sound_Page);
        os_Effects_LCD->setObjectName(QStringLiteral("os_Effects_LCD"));

        gridLayout_4->addWidget(os_Effects_LCD, 5, 4, 1, 1);

        os_Left_Spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(os_Left_Spacer, 5, 0, 1, 1);

        os_Right_Spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(os_Right_Spacer, 5, 5, 1, 1);

        os_Master_Slider = new QSlider(sound_Page);
        os_Master_Slider->setObjectName(QStringLiteral("os_Master_Slider"));
        os_Master_Slider->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(os_Master_Slider, 2, 3, 1, 1);

        os_Music_Slider = new QSlider(sound_Page);
        os_Music_Slider->setObjectName(QStringLiteral("os_Music_Slider"));
        os_Music_Slider->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(os_Music_Slider, 8, 3, 1, 1);

        os_Effects_Slider = new QSlider(sound_Page);
        os_Effects_Slider->setObjectName(QStringLiteral("os_Effects_Slider"));
        os_Effects_Slider->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(os_Effects_Slider, 5, 3, 1, 1);

        os_V_Spacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(os_V_Spacer_2, 3, 3, 1, 1);

        os_Master_Label = new QLabel(sound_Page);
        os_Master_Label->setObjectName(QStringLiteral("os_Master_Label"));

        gridLayout_4->addWidget(os_Master_Label, 1, 3, 1, 1);

        os_Music_Label = new QLabel(sound_Page);
        os_Music_Label->setObjectName(QStringLiteral("os_Music_Label"));

        gridLayout_4->addWidget(os_Music_Label, 7, 3, 1, 1);

        os_V_Spacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(os_V_Spacer_3, 6, 3, 1, 1);

        os_Effects_Label = new QLabel(sound_Page);
        os_Effects_Label->setObjectName(QStringLiteral("os_Effects_Label"));

        gridLayout_4->addWidget(os_Effects_Label, 4, 3, 1, 1);

        os_H_Layout = new QHBoxLayout();
        os_H_Layout->setSpacing(6);
        os_H_Layout->setObjectName(QStringLiteral("os_H_Layout"));
        os_Back_Button = new QPushButton(sound_Page);
        os_Back_Button->setObjectName(QStringLiteral("os_Back_Button"));

        os_H_Layout->addWidget(os_Back_Button);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        os_H_Layout->addItem(horizontalSpacer_7);

        os_Save_Button = new QPushButton(sound_Page);
        os_Save_Button->setObjectName(QStringLiteral("os_Save_Button"));

        os_H_Layout->addWidget(os_Save_Button);


        gridLayout_4->addLayout(os_H_Layout, 10, 3, 1, 1);

        os_V_Spacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(os_V_Spacer_5, 11, 3, 1, 1);

        os_V_Spacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(os_V_Spacer, 0, 3, 1, 1);

        os_V_Spacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(os_V_Spacer_4, 9, 3, 1, 1);

        stackedWidget->addWidget(sound_Page);
        credits_Page = new QWidget();
        credits_Page->setObjectName(QStringLiteral("credits_Page"));
        horizontalLayout_10 = new QHBoxLayout(credits_Page);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        c_Left_Spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(c_Left_Spacer);

        c_Grid_Layout = new QGroupBox(credits_Page);
        c_Grid_Layout->setObjectName(QStringLiteral("c_Grid_Layout"));
        gridLayout = new QGridLayout(c_Grid_Layout);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_9, 4, 0, 1, 1);

        c_Back_Button = new QPushButton(c_Grid_Layout);
        c_Back_Button->setObjectName(QStringLiteral("c_Back_Button"));

        gridLayout->addWidget(c_Back_Button, 3, 0, 1, 1);

        c_Credits_Label = new QLabel(c_Grid_Layout);
        c_Credits_Label->setObjectName(QStringLiteral("c_Credits_Label"));

        gridLayout->addWidget(c_Credits_Label, 1, 0, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_10, 0, 0, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_11, 2, 0, 1, 1);


        horizontalLayout_10->addWidget(c_Grid_Layout);

        c_Right_Spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(c_Right_Spacer);

        stackedWidget->addWidget(credits_Page);
        gameFrame_Page = new QWidget();
        gameFrame_Page->setObjectName(QStringLiteral("gameFrame_Page"));
        horizontalLayout_2 = new QHBoxLayout(gameFrame_Page);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        widgetGL = new QOpenGLWidget(gameFrame_Page);
        widgetGL->setObjectName(QStringLiteral("widgetGL"));

        horizontalLayout_2->addWidget(widgetGL);

        stackedWidget->addWidget(gameFrame_Page);

        gridLayout_3->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindowClass->setCentralWidget(centralWidget);
        QWidget::setTabOrder(s_NewGame_Button, s_LoadGame_Button);
        QWidget::setTabOrder(s_LoadGame_Button, s_Options_Button);
        QWidget::setTabOrder(s_Options_Button, s_Credits_Button);
        QWidget::setTabOrder(s_Credits_Button, s_Exit_Button);

        retranslateUi(MainWindowClass);
        QObject::connect(s_Exit_Button, SIGNAL(clicked()), MainWindowClass, SLOT(close()));

        stackedWidget->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "MainWindow", Q_NULLPTR));
        s_NewGame_Button->setText(QApplication::translate("MainWindowClass", "New Game", Q_NULLPTR));
        s_LoadGame_Button->setText(QApplication::translate("MainWindowClass", "Load Game", Q_NULLPTR));
        s_Options_Button->setText(QApplication::translate("MainWindowClass", "Options", Q_NULLPTR));
        s_Credits_Button->setText(QApplication::translate("MainWindowClass", "Credits", Q_NULLPTR));
        s_Exit_Button->setText(QApplication::translate("MainWindowClass", "Exit", Q_NULLPTR));
        n_Type_Label->setText(QApplication::translate("MainWindowClass", "Type of Game:", Q_NULLPTR));
        n_Back_Button->setText(QApplication::translate("MainWindowClass", "Back", Q_NULLPTR));
        n_Play_Button->setText(QApplication::translate("MainWindowClass", "Play", Q_NULLPTR));
        l_Savedata_Label->setText(QApplication::translate("MainWindowClass", "Load Savedata: ", Q_NULLPTR));
        l_Back_Button->setText(QApplication::translate("MainWindowClass", "Back", Q_NULLPTR));
        l_Continue_Button->setText(QApplication::translate("MainWindowClass", "Continue", Q_NULLPTR));
        o_Video_Button->setText(QApplication::translate("MainWindowClass", "Video", Q_NULLPTR));
        o_Sound_Button->setText(QApplication::translate("MainWindowClass", "Sound", Q_NULLPTR));
        o_Back_Button->setText(QApplication::translate("MainWindowClass", "Back", Q_NULLPTR));
        ov_Back_Button->setText(QApplication::translate("MainWindowClass", "Back", Q_NULLPTR));
        ov_Save_Button->setText(QApplication::translate("MainWindowClass", "Save", Q_NULLPTR));
        ov_Fullscreen_RadioButton->setText(QApplication::translate("MainWindowClass", "FullScreen", Q_NULLPTR));
        ov_Window_RadioButton->setText(QApplication::translate("MainWindowClass", "Window", Q_NULLPTR));
        os_Master_Label->setText(QApplication::translate("MainWindowClass", "Master Volume", Q_NULLPTR));
        os_Music_Label->setText(QApplication::translate("MainWindowClass", "Music Volume", Q_NULLPTR));
        os_Effects_Label->setText(QApplication::translate("MainWindowClass", "Effects Volume", Q_NULLPTR));
        os_Back_Button->setText(QApplication::translate("MainWindowClass", "Back", Q_NULLPTR));
        os_Save_Button->setText(QApplication::translate("MainWindowClass", "Save", Q_NULLPTR));
        c_Grid_Layout->setTitle(QApplication::translate("MainWindowClass", "Credits", Q_NULLPTR));
        c_Back_Button->setText(QApplication::translate("MainWindowClass", "Back", Q_NULLPTR));
        c_Credits_Label->setText(QApplication::translate("MainWindowClass", "[Credits]", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
