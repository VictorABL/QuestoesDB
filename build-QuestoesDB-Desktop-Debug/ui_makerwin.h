/********************************************************************************
** Form generated from reading UI file 'makerwin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAKERWIN_H
#define UI_MAKERWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MakerWin
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_13;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QComboBox *comboBox;
    QPlainTextEdit *state_plain_text;
    QHBoxLayout *horizontalLayout;
    QPushButton *upl_img_state;
    QPushButton *parse_img_state;
    QTextBrowser *text_html_viewer;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton;
    QPlainTextEdit *alt_a_text;
    QPushButton *alt_a_upl;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButton_2;
    QPlainTextEdit *alt_b_text;
    QPushButton *alt_b_upl;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *radioButton_3;
    QPlainTextEdit *alt_c_text;
    QPushButton *alt_c_upl;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *radioButton_4;
    QPlainTextEdit *alt_d_text;
    QPushButton *alt_d_upl;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *radioButton_5;
    QPlainTextEdit *alt_e_text;
    QPushButton *alt_e_upl;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QComboBox *comboBox_2;
    QPushButton *save_button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MakerWin)
    {
        if (MakerWin->objectName().isEmpty())
            MakerWin->setObjectName(QStringLiteral("MakerWin"));
        MakerWin->resize(800, 600);
        centralwidget = new QWidget(MakerWin);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -181, 766, 717));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QStringLiteral("label_6"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_6);

        comboBox = new QComboBox(scrollAreaWidgetContents);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(comboBox);


        verticalLayout_2->addLayout(horizontalLayout_2);

        state_plain_text = new QPlainTextEdit(scrollAreaWidgetContents);
        state_plain_text->setObjectName(QStringLiteral("state_plain_text"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(state_plain_text->sizePolicy().hasHeightForWidth());
        state_plain_text->setSizePolicy(sizePolicy2);

        verticalLayout_2->addWidget(state_plain_text);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        upl_img_state = new QPushButton(scrollAreaWidgetContents);
        upl_img_state->setObjectName(QStringLiteral("upl_img_state"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(upl_img_state->sizePolicy().hasHeightForWidth());
        upl_img_state->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(upl_img_state);

        parse_img_state = new QPushButton(scrollAreaWidgetContents);
        parse_img_state->setObjectName(QStringLiteral("parse_img_state"));
        sizePolicy3.setHeightForWidth(parse_img_state->sizePolicy().hasHeightForWidth());
        parse_img_state->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(parse_img_state);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_13->addLayout(verticalLayout_2);

        text_html_viewer = new QTextBrowser(scrollAreaWidgetContents);
        text_html_viewer->setObjectName(QStringLiteral("text_html_viewer"));
        sizePolicy2.setHeightForWidth(text_html_viewer->sizePolicy().hasHeightForWidth());
        text_html_viewer->setSizePolicy(sizePolicy2);

        horizontalLayout_13->addWidget(text_html_viewer);


        verticalLayout_4->addLayout(horizontalLayout_13);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        radioButton = new QRadioButton(scrollAreaWidgetContents);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        sizePolicy1.setHeightForWidth(radioButton->sizePolicy().hasHeightForWidth());
        radioButton->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(radioButton);

        alt_a_text = new QPlainTextEdit(scrollAreaWidgetContents);
        alt_a_text->setObjectName(QStringLiteral("alt_a_text"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(alt_a_text->sizePolicy().hasHeightForWidth());
        alt_a_text->setSizePolicy(sizePolicy4);

        horizontalLayout_3->addWidget(alt_a_text);


        horizontalLayout_8->addLayout(horizontalLayout_3);

        alt_a_upl = new QPushButton(scrollAreaWidgetContents);
        alt_a_upl->setObjectName(QStringLiteral("alt_a_upl"));
        sizePolicy1.setHeightForWidth(alt_a_upl->sizePolicy().hasHeightForWidth());
        alt_a_upl->setSizePolicy(sizePolicy1);

        horizontalLayout_8->addWidget(alt_a_upl);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        radioButton_2 = new QRadioButton(scrollAreaWidgetContents);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        sizePolicy1.setHeightForWidth(radioButton_2->sizePolicy().hasHeightForWidth());
        radioButton_2->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(radioButton_2);

        alt_b_text = new QPlainTextEdit(scrollAreaWidgetContents);
        alt_b_text->setObjectName(QStringLiteral("alt_b_text"));
        sizePolicy4.setHeightForWidth(alt_b_text->sizePolicy().hasHeightForWidth());
        alt_b_text->setSizePolicy(sizePolicy4);

        horizontalLayout_4->addWidget(alt_b_text);


        horizontalLayout_9->addLayout(horizontalLayout_4);

        alt_b_upl = new QPushButton(scrollAreaWidgetContents);
        alt_b_upl->setObjectName(QStringLiteral("alt_b_upl"));
        sizePolicy1.setHeightForWidth(alt_b_upl->sizePolicy().hasHeightForWidth());
        alt_b_upl->setSizePolicy(sizePolicy1);

        horizontalLayout_9->addWidget(alt_b_upl);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        radioButton_3 = new QRadioButton(scrollAreaWidgetContents);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        sizePolicy1.setHeightForWidth(radioButton_3->sizePolicy().hasHeightForWidth());
        radioButton_3->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(radioButton_3);

        alt_c_text = new QPlainTextEdit(scrollAreaWidgetContents);
        alt_c_text->setObjectName(QStringLiteral("alt_c_text"));
        sizePolicy4.setHeightForWidth(alt_c_text->sizePolicy().hasHeightForWidth());
        alt_c_text->setSizePolicy(sizePolicy4);

        horizontalLayout_5->addWidget(alt_c_text);


        horizontalLayout_10->addLayout(horizontalLayout_5);

        alt_c_upl = new QPushButton(scrollAreaWidgetContents);
        alt_c_upl->setObjectName(QStringLiteral("alt_c_upl"));
        sizePolicy1.setHeightForWidth(alt_c_upl->sizePolicy().hasHeightForWidth());
        alt_c_upl->setSizePolicy(sizePolicy1);

        horizontalLayout_10->addWidget(alt_c_upl);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        radioButton_4 = new QRadioButton(scrollAreaWidgetContents);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        sizePolicy1.setHeightForWidth(radioButton_4->sizePolicy().hasHeightForWidth());
        radioButton_4->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(radioButton_4);

        alt_d_text = new QPlainTextEdit(scrollAreaWidgetContents);
        alt_d_text->setObjectName(QStringLiteral("alt_d_text"));
        sizePolicy4.setHeightForWidth(alt_d_text->sizePolicy().hasHeightForWidth());
        alt_d_text->setSizePolicy(sizePolicy4);

        horizontalLayout_6->addWidget(alt_d_text);


        horizontalLayout_11->addLayout(horizontalLayout_6);

        alt_d_upl = new QPushButton(scrollAreaWidgetContents);
        alt_d_upl->setObjectName(QStringLiteral("alt_d_upl"));
        sizePolicy1.setHeightForWidth(alt_d_upl->sizePolicy().hasHeightForWidth());
        alt_d_upl->setSizePolicy(sizePolicy1);

        horizontalLayout_11->addWidget(alt_d_upl);


        verticalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        radioButton_5 = new QRadioButton(scrollAreaWidgetContents);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        sizePolicy1.setHeightForWidth(radioButton_5->sizePolicy().hasHeightForWidth());
        radioButton_5->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(radioButton_5);

        alt_e_text = new QPlainTextEdit(scrollAreaWidgetContents);
        alt_e_text->setObjectName(QStringLiteral("alt_e_text"));
        sizePolicy4.setHeightForWidth(alt_e_text->sizePolicy().hasHeightForWidth());
        alt_e_text->setSizePolicy(sizePolicy4);

        horizontalLayout_7->addWidget(alt_e_text);


        horizontalLayout_12->addLayout(horizontalLayout_7);

        alt_e_upl = new QPushButton(scrollAreaWidgetContents);
        alt_e_upl->setObjectName(QStringLiteral("alt_e_upl"));
        sizePolicy1.setHeightForWidth(alt_e_upl->sizePolicy().hasHeightForWidth());
        alt_e_upl->setSizePolicy(sizePolicy1);

        horizontalLayout_12->addWidget(alt_e_upl);


        verticalLayout_3->addLayout(horizontalLayout_12);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Ignored);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy5);

        horizontalLayout_14->addWidget(label);

        comboBox_2 = new QComboBox(scrollAreaWidgetContents);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        sizePolicy1.setHeightForWidth(comboBox_2->sizePolicy().hasHeightForWidth());
        comboBox_2->setSizePolicy(sizePolicy1);

        horizontalLayout_14->addWidget(comboBox_2);

        save_button = new QPushButton(scrollAreaWidgetContents);
        save_button->setObjectName(QStringLiteral("save_button"));
        sizePolicy1.setHeightForWidth(save_button->sizePolicy().hasHeightForWidth());
        save_button->setSizePolicy(sizePolicy1);
        save_button->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_14->addWidget(save_button);


        verticalLayout_4->addLayout(horizontalLayout_14);


        verticalLayout_5->addLayout(verticalLayout_4);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        MakerWin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MakerWin);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MakerWin->setMenuBar(menubar);
        statusbar = new QStatusBar(MakerWin);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MakerWin->setStatusBar(statusbar);

        retranslateUi(MakerWin);

        QMetaObject::connectSlotsByName(MakerWin);
    } // setupUi

    void retranslateUi(QMainWindow *MakerWin)
    {
        MakerWin->setWindowTitle(QApplication::translate("MakerWin", "MainWindow", Q_NULLPTR));
        label_6->setText(QApplication::translate("MakerWin", "Selecione o tema:", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MakerWin", "Matem\303\241tica", Q_NULLPTR)
         << QApplication::translate("MakerWin", "F\303\215sica", Q_NULLPTR)
         << QApplication::translate("MakerWin", "Qu\303\255mica", Q_NULLPTR)
         << QApplication::translate("MakerWin", "Biologia", Q_NULLPTR)
         << QApplication::translate("MakerWin", "Hist\303\263ria", Q_NULLPTR)
         << QApplication::translate("MakerWin", "Geografia", Q_NULLPTR)
         << QApplication::translate("MakerWin", "Filosofia", Q_NULLPTR)
         << QApplication::translate("MakerWin", "Sociologia", Q_NULLPTR)
         << QApplication::translate("MakerWin", "Portugu\303\252s", Q_NULLPTR)
        );
        upl_img_state->setText(QApplication::translate("MakerWin", "Upload", Q_NULLPTR));
        parse_img_state->setText(QApplication::translate("MakerWin", "Parse", Q_NULLPTR));
        text_html_viewer->setHtml(QApplication::translate("MakerWin", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        radioButton->setText(QString());
        alt_a_upl->setText(QApplication::translate("MakerWin", "Upload", Q_NULLPTR));
        radioButton_2->setText(QString());
        alt_b_upl->setText(QApplication::translate("MakerWin", "Upload", Q_NULLPTR));
        radioButton_3->setText(QString());
        alt_c_upl->setText(QApplication::translate("MakerWin", "Upload", Q_NULLPTR));
        radioButton_4->setText(QString());
        alt_d_upl->setText(QApplication::translate("MakerWin", "Upload", Q_NULLPTR));
        radioButton_5->setText(QString());
        alt_e_upl->setText(QApplication::translate("MakerWin", "Upload", Q_NULLPTR));
        label->setText(QApplication::translate("MakerWin", "Resposta", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MakerWin", "A", Q_NULLPTR)
         << QApplication::translate("MakerWin", "B", Q_NULLPTR)
         << QApplication::translate("MakerWin", "C", Q_NULLPTR)
         << QApplication::translate("MakerWin", "D", Q_NULLPTR)
         << QApplication::translate("MakerWin", "E", Q_NULLPTR)
        );
        save_button->setText(QApplication::translate("MakerWin", "Salvar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MakerWin: public Ui_MakerWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAKERWIN_H
