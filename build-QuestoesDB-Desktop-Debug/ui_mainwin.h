/********************************************************************************
** Form generated from reading UI file 'mainwin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIN_H
#define UI_MAINWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWin
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_4;
    QStackedWidget *stackedWidget;
    QWidget *start_page;
    QVBoxLayout *verticalLayout_9;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *main_layout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *start_button;
    QPushButton *help_button;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;
    QToolButton *toolButton;
    QWidget *choose_page;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_8;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *math_check;
    QCheckBox *physic_check;
    QCheckBox *chemi_check;
    QCheckBox *bio_check;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *hist_check;
    QCheckBox *geo_check;
    QCheckBox *philo_check;
    QCheckBox *soci_check;
    QCheckBox *port_check;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer;
    QPushButton *ready_butto;
    QPushButton *help2_button;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *question_page;
    QVBoxLayout *verticalLayout_6;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QLabel *theme_label_;
    QTextBrowser *question_text;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *alternative_a;
    QLabel *label_a;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *alternative_b;
    QLabel *label_b;
    QHBoxLayout *horizontalLayout_8;
    QRadioButton *alternative_c;
    QLabel *label_c;
    QHBoxLayout *horizontalLayout_9;
    QRadioButton *alternative_d;
    QLabel *label_d;
    QHBoxLayout *horizontalLayout_10;
    QRadioButton *alternative_e;
    QLabel *label_e;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *check_button;
    QPushButton *next_button;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout;
    QLabel *answer_tag;
    QLabel *answer_label;
    QPushButton *back_button_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWin)
    {
        if (MainWin->objectName().isEmpty())
            MainWin->setObjectName(QStringLiteral("MainWin"));
        MainWin->resize(796, 570);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWin->sizePolicy().hasHeightForWidth());
        MainWin->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWin);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_4 = new QVBoxLayout(centralWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        start_page = new QWidget();
        start_page->setObjectName(QStringLiteral("start_page"));
        verticalLayout_9 = new QVBoxLayout(start_page);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        scrollArea_3 = new QScrollArea(start_page);
        scrollArea_3->setObjectName(QStringLiteral("scrollArea_3"));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 758, 471));
        verticalLayout_11 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        main_layout = new QVBoxLayout();
        main_layout->setSpacing(6);
        main_layout->setObjectName(QStringLiteral("main_layout"));
        main_layout->setContentsMargins(-1, 150, -1, -1);
        label = new QLabel(scrollAreaWidgetContents_3);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setLineWidth(10);
        label->setAlignment(Qt::AlignCenter);

        main_layout->addWidget(label);


        verticalLayout_10->addLayout(main_layout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 50, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        start_button = new QPushButton(scrollAreaWidgetContents_3);
        start_button->setObjectName(QStringLiteral("start_button"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(start_button->sizePolicy().hasHeightForWidth());
        start_button->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(start_button);

        help_button = new QPushButton(scrollAreaWidgetContents_3);
        help_button->setObjectName(QStringLiteral("help_button"));
        sizePolicy2.setHeightForWidth(help_button->sizePolicy().hasHeightForWidth());
        help_button->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(help_button);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout_10->addLayout(horizontalLayout_2);


        verticalLayout_11->addLayout(verticalLayout_10);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer);

        toolButton = new QToolButton(scrollAreaWidgetContents_3);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_11->addWidget(toolButton);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_9->addWidget(scrollArea_3);

        stackedWidget->addWidget(start_page);
        choose_page = new QWidget();
        choose_page->setObjectName(QStringLiteral("choose_page"));
        verticalLayout_3 = new QVBoxLayout(choose_page);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        scrollArea_2 = new QScrollArea(choose_page);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 492, 245));
        verticalLayout_8 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_8->addItem(verticalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, 25);
        label_2 = new QLabel(scrollAreaWidgetContents_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);


        verticalLayout_8->addLayout(verticalLayout);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        math_check = new QCheckBox(scrollAreaWidgetContents_2);
        math_check->setObjectName(QStringLiteral("math_check"));

        horizontalLayout_3->addWidget(math_check);

        physic_check = new QCheckBox(scrollAreaWidgetContents_2);
        physic_check->setObjectName(QStringLiteral("physic_check"));

        horizontalLayout_3->addWidget(physic_check);

        chemi_check = new QCheckBox(scrollAreaWidgetContents_2);
        chemi_check->setObjectName(QStringLiteral("chemi_check"));

        horizontalLayout_3->addWidget(chemi_check);

        bio_check = new QCheckBox(scrollAreaWidgetContents_2);
        bio_check->setObjectName(QStringLiteral("bio_check"));

        horizontalLayout_3->addWidget(bio_check);


        verticalLayout_7->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        hist_check = new QCheckBox(scrollAreaWidgetContents_2);
        hist_check->setObjectName(QStringLiteral("hist_check"));

        horizontalLayout_4->addWidget(hist_check);

        geo_check = new QCheckBox(scrollAreaWidgetContents_2);
        geo_check->setObjectName(QStringLiteral("geo_check"));

        horizontalLayout_4->addWidget(geo_check);

        philo_check = new QCheckBox(scrollAreaWidgetContents_2);
        philo_check->setObjectName(QStringLiteral("philo_check"));

        horizontalLayout_4->addWidget(philo_check);

        soci_check = new QCheckBox(scrollAreaWidgetContents_2);
        soci_check->setObjectName(QStringLiteral("soci_check"));

        horizontalLayout_4->addWidget(soci_check);

        port_check = new QCheckBox(scrollAreaWidgetContents_2);
        port_check->setObjectName(QStringLiteral("port_check"));

        horizontalLayout_4->addWidget(port_check);


        verticalLayout_7->addLayout(horizontalLayout_4);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(-1, 25, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer);

        ready_butto = new QPushButton(scrollAreaWidgetContents_2);
        ready_butto->setObjectName(QStringLiteral("ready_butto"));
        sizePolicy2.setHeightForWidth(ready_butto->sizePolicy().hasHeightForWidth());
        ready_butto->setSizePolicy(sizePolicy2);

        horizontalLayout_12->addWidget(ready_butto);

        help2_button = new QPushButton(scrollAreaWidgetContents_2);
        help2_button->setObjectName(QStringLiteral("help2_button"));
        sizePolicy2.setHeightForWidth(help2_button->sizePolicy().hasHeightForWidth());
        help2_button->setSizePolicy(sizePolicy2);

        horizontalLayout_12->addWidget(help2_button);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_2);


        verticalLayout_7->addLayout(horizontalLayout_12);


        verticalLayout_8->addLayout(verticalLayout_7);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_2);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_3->addWidget(scrollArea_2);

        stackedWidget->addWidget(choose_page);
        question_page = new QWidget();
        question_page->setObjectName(QStringLiteral("question_page"));
        verticalLayout_6 = new QVBoxLayout(question_page);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        scrollArea = new QScrollArea(question_page);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 198, 491));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        theme_label_ = new QLabel(scrollAreaWidgetContents);
        theme_label_->setObjectName(QStringLiteral("theme_label_"));
        sizePolicy.setHeightForWidth(theme_label_->sizePolicy().hasHeightForWidth());
        theme_label_->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(theme_label_, 0, 0, 1, 1);

        question_text = new QTextBrowser(scrollAreaWidgetContents);
        question_text->setObjectName(QStringLiteral("question_text"));
        sizePolicy2.setHeightForWidth(question_text->sizePolicy().hasHeightForWidth());
        question_text->setSizePolicy(sizePolicy2);
        question_text->setAutoFormatting(QTextEdit::AutoNone);
        question_text->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout_2->addWidget(question_text, 1, 0, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        alternative_a = new QRadioButton(scrollAreaWidgetContents);
        alternative_a->setObjectName(QStringLiteral("alternative_a"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(alternative_a->sizePolicy().hasHeightForWidth());
        alternative_a->setSizePolicy(sizePolicy3);

        horizontalLayout_6->addWidget(alternative_a);

        label_a = new QLabel(scrollAreaWidgetContents);
        label_a->setObjectName(QStringLiteral("label_a"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_a->sizePolicy().hasHeightForWidth());
        label_a->setSizePolicy(sizePolicy4);

        horizontalLayout_6->addWidget(label_a);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        alternative_b = new QRadioButton(scrollAreaWidgetContents);
        alternative_b->setObjectName(QStringLiteral("alternative_b"));
        sizePolicy3.setHeightForWidth(alternative_b->sizePolicy().hasHeightForWidth());
        alternative_b->setSizePolicy(sizePolicy3);

        horizontalLayout_7->addWidget(alternative_b);

        label_b = new QLabel(scrollAreaWidgetContents);
        label_b->setObjectName(QStringLiteral("label_b"));
        sizePolicy4.setHeightForWidth(label_b->sizePolicy().hasHeightForWidth());
        label_b->setSizePolicy(sizePolicy4);

        horizontalLayout_7->addWidget(label_b);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        alternative_c = new QRadioButton(scrollAreaWidgetContents);
        alternative_c->setObjectName(QStringLiteral("alternative_c"));
        sizePolicy3.setHeightForWidth(alternative_c->sizePolicy().hasHeightForWidth());
        alternative_c->setSizePolicy(sizePolicy3);

        horizontalLayout_8->addWidget(alternative_c);

        label_c = new QLabel(scrollAreaWidgetContents);
        label_c->setObjectName(QStringLiteral("label_c"));
        sizePolicy4.setHeightForWidth(label_c->sizePolicy().hasHeightForWidth());
        label_c->setSizePolicy(sizePolicy4);

        horizontalLayout_8->addWidget(label_c);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        alternative_d = new QRadioButton(scrollAreaWidgetContents);
        alternative_d->setObjectName(QStringLiteral("alternative_d"));
        sizePolicy3.setHeightForWidth(alternative_d->sizePolicy().hasHeightForWidth());
        alternative_d->setSizePolicy(sizePolicy3);

        horizontalLayout_9->addWidget(alternative_d);

        label_d = new QLabel(scrollAreaWidgetContents);
        label_d->setObjectName(QStringLiteral("label_d"));
        sizePolicy4.setHeightForWidth(label_d->sizePolicy().hasHeightForWidth());
        label_d->setSizePolicy(sizePolicy4);

        horizontalLayout_9->addWidget(label_d);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        alternative_e = new QRadioButton(scrollAreaWidgetContents);
        alternative_e->setObjectName(QStringLiteral("alternative_e"));
        sizePolicy3.setHeightForWidth(alternative_e->sizePolicy().hasHeightForWidth());
        alternative_e->setSizePolicy(sizePolicy3);

        horizontalLayout_10->addWidget(alternative_e);

        label_e = new QLabel(scrollAreaWidgetContents);
        label_e->setObjectName(QStringLiteral("label_e"));
        sizePolicy4.setHeightForWidth(label_e->sizePolicy().hasHeightForWidth());
        label_e->setSizePolicy(sizePolicy4);

        horizontalLayout_10->addWidget(label_e);


        verticalLayout_2->addLayout(horizontalLayout_10);


        gridLayout_2->addLayout(verticalLayout_2, 2, 0, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(545, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 3, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        check_button = new QPushButton(scrollAreaWidgetContents);
        check_button->setObjectName(QStringLiteral("check_button"));
        check_button->setEnabled(true);

        horizontalLayout_5->addWidget(check_button);

        next_button = new QPushButton(scrollAreaWidgetContents);
        next_button->setObjectName(QStringLiteral("next_button"));

        horizontalLayout_5->addWidget(next_button);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        answer_tag = new QLabel(scrollAreaWidgetContents);
        answer_tag->setObjectName(QStringLiteral("answer_tag"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(answer_tag->sizePolicy().hasHeightForWidth());
        answer_tag->setSizePolicy(sizePolicy5);

        horizontalLayout->addWidget(answer_tag);

        answer_label = new QLabel(scrollAreaWidgetContents);
        answer_label->setObjectName(QStringLiteral("answer_label"));
        sizePolicy5.setHeightForWidth(answer_label->sizePolicy().hasHeightForWidth());
        answer_label->setSizePolicy(sizePolicy5);
        answer_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(answer_label);


        horizontalLayout_11->addLayout(horizontalLayout);

        back_button_2 = new QPushButton(scrollAreaWidgetContents);
        back_button_2->setObjectName(QStringLiteral("back_button_2"));
        sizePolicy.setHeightForWidth(back_button_2->sizePolicy().hasHeightForWidth());
        back_button_2->setSizePolicy(sizePolicy);

        horizontalLayout_11->addWidget(back_button_2);


        verticalLayout_5->addLayout(horizontalLayout_11);


        gridLayout_2->addLayout(verticalLayout_5, 3, 1, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_6->addWidget(scrollArea);

        stackedWidget->addWidget(question_page);

        verticalLayout_4->addWidget(stackedWidget);

        MainWin->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWin);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 796, 22));
        MainWin->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWin);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWin->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWin);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWin->setStatusBar(statusBar);

        retranslateUi(MainWin);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWin);
    } // setupUi

    void retranslateUi(QMainWindow *MainWin)
    {
        MainWin->setWindowTitle(QApplication::translate("MainWin", "MainWin", Q_NULLPTR));
        label->setText(QApplication::translate("MainWin", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:600;\">QUEST\303\225ES ENEM</span></p></body></html>", Q_NULLPTR));
        start_button->setText(QApplication::translate("MainWin", "INICIAR", Q_NULLPTR));
        help_button->setText(QApplication::translate("MainWin", "SOBRE", Q_NULLPTR));
        toolButton->setText(QApplication::translate("MainWin", "...", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWin", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">Escolha os temas das quest\303\265es:</span></p></body></html>", Q_NULLPTR));
        math_check->setText(QApplication::translate("MainWin", "Matem\303\241tica", Q_NULLPTR));
        physic_check->setText(QApplication::translate("MainWin", "F\303\255sica", Q_NULLPTR));
        chemi_check->setText(QApplication::translate("MainWin", "Qu\303\255mica", Q_NULLPTR));
        bio_check->setText(QApplication::translate("MainWin", "Biologia", Q_NULLPTR));
        hist_check->setText(QApplication::translate("MainWin", "Hist\303\263ria", Q_NULLPTR));
        geo_check->setText(QApplication::translate("MainWin", "Geografia", Q_NULLPTR));
        philo_check->setText(QApplication::translate("MainWin", "Filosofia", Q_NULLPTR));
        soci_check->setText(QApplication::translate("MainWin", "Sociologia", Q_NULLPTR));
        port_check->setText(QApplication::translate("MainWin", "Portugu\303\252s", Q_NULLPTR));
        ready_butto->setText(QApplication::translate("MainWin", "PRONTO", Q_NULLPTR));
        help2_button->setText(QApplication::translate("MainWin", "AJUDA", Q_NULLPTR));
        theme_label_->setText(QApplication::translate("MainWin", "<html><head/><body><p><br/></p><p><br/></p></body></html>", Q_NULLPTR));
        question_text->setHtml(QApplication::translate("MainWin", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        alternative_a->setText(QString());
        label_a->setText(QApplication::translate("MainWin", "A", Q_NULLPTR));
        alternative_b->setText(QString());
        label_b->setText(QApplication::translate("MainWin", "B", Q_NULLPTR));
        alternative_c->setText(QString());
        label_c->setText(QApplication::translate("MainWin", "C", Q_NULLPTR));
        alternative_d->setText(QString());
        label_d->setText(QApplication::translate("MainWin", "D", Q_NULLPTR));
        alternative_e->setText(QString());
        label_e->setText(QApplication::translate("MainWin", "E", Q_NULLPTR));
        check_button->setText(QApplication::translate("MainWin", "VERIFICAR", Q_NULLPTR));
        next_button->setText(QApplication::translate("MainWin", "PR\303\223XIMA", Q_NULLPTR));
        answer_tag->setText(QApplication::translate("MainWin", "Resposta:", Q_NULLPTR));
        answer_label->setText(QString());
        back_button_2->setText(QApplication::translate("MainWin", "VOLTAR", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWin: public Ui_MainWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIN_H
