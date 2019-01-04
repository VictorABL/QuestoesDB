/********************************************************************************
** Form generated from reading UI file 'chooseframe.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEFRAME_H
#define UI_CHOOSEFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChooseFrame
{
public:
    QWidget *widget;
    QVBoxLayout *choose_layout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_9;

    void setupUi(QFrame *ChooseFrame)
    {
        if (ChooseFrame->objectName().isEmpty())
            ChooseFrame->setObjectName(QStringLiteral("ChooseFrame"));
        ChooseFrame->resize(753, 300);
        ChooseFrame->setFrameShape(QFrame::StyledPanel);
        ChooseFrame->setFrameShadow(QFrame::Raised);
        widget = new QWidget(ChooseFrame);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(70, 60, 611, 141));
        choose_layout = new QVBoxLayout(widget);
        choose_layout->setObjectName(QStringLiteral("choose_layout"));
        choose_layout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignCenter);

        choose_layout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        choose_layout->addItem(verticalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        checkBox = new QCheckBox(widget);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(widget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        horizontalLayout->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(widget);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        horizontalLayout->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(widget);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));

        horizontalLayout->addWidget(checkBox_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        checkBox_5 = new QCheckBox(widget);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));

        horizontalLayout_2->addWidget(checkBox_5);

        checkBox_6 = new QCheckBox(widget);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));

        horizontalLayout_2->addWidget(checkBox_6);

        checkBox_7 = new QCheckBox(widget);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));

        horizontalLayout_2->addWidget(checkBox_7);

        checkBox_8 = new QCheckBox(widget);
        checkBox_8->setObjectName(QStringLiteral("checkBox_8"));

        horizontalLayout_2->addWidget(checkBox_8);

        checkBox_9 = new QCheckBox(widget);
        checkBox_9->setObjectName(QStringLiteral("checkBox_9"));

        horizontalLayout_2->addWidget(checkBox_9);


        verticalLayout->addLayout(horizontalLayout_2);


        choose_layout->addLayout(verticalLayout);


        retranslateUi(ChooseFrame);

        QMetaObject::connectSlotsByName(ChooseFrame);
    } // setupUi

    void retranslateUi(QFrame *ChooseFrame)
    {
        ChooseFrame->setWindowTitle(QApplication::translate("ChooseFrame", "Frame", Q_NULLPTR));
        label->setText(QApplication::translate("ChooseFrame", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">Escolha os temas das quest\303\265es:</span></p></body></html>", Q_NULLPTR));
        checkBox->setText(QApplication::translate("ChooseFrame", "Matem\303\241tica", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("ChooseFrame", "F\303\255sica", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("ChooseFrame", "Qu\303\255mica", Q_NULLPTR));
        checkBox_4->setText(QApplication::translate("ChooseFrame", "Biologia", Q_NULLPTR));
        checkBox_5->setText(QApplication::translate("ChooseFrame", "Hist\303\263ria", Q_NULLPTR));
        checkBox_6->setText(QApplication::translate("ChooseFrame", "Geografia", Q_NULLPTR));
        checkBox_7->setText(QApplication::translate("ChooseFrame", "Filosofia", Q_NULLPTR));
        checkBox_8->setText(QApplication::translate("ChooseFrame", "Sociologia", Q_NULLPTR));
        checkBox_9->setText(QApplication::translate("ChooseFrame", "Portugu\303\252s", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ChooseFrame: public Ui_ChooseFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEFRAME_H
