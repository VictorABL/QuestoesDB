/********************************************************************************
** Form generated from reading UI file 'mainframe.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINFRAME_H
#define UI_MAINFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainFrame
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *main_layout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *start_button;
    QPushButton *help_button;

    void setupUi(QFrame *MainFrame)
    {
        if (MainFrame->objectName().isEmpty())
            MainFrame->setObjectName(QStringLiteral("MainFrame"));
        MainFrame->resize(740, 308);
        MainFrame->setFrameShape(QFrame::StyledPanel);
        MainFrame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(MainFrame);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 70, 511, 161));
        main_layout = new QVBoxLayout(layoutWidget);
        main_layout->setObjectName(QStringLiteral("main_layout"));
        main_layout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignCenter);

        main_layout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        main_layout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        start_button = new QPushButton(layoutWidget);
        start_button->setObjectName(QStringLiteral("start_button"));
        sizePolicy.setHeightForWidth(start_button->sizePolicy().hasHeightForWidth());
        start_button->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(start_button);

        help_button = new QPushButton(layoutWidget);
        help_button->setObjectName(QStringLiteral("help_button"));
        sizePolicy.setHeightForWidth(help_button->sizePolicy().hasHeightForWidth());
        help_button->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(help_button);


        main_layout->addLayout(horizontalLayout_2);


        retranslateUi(MainFrame);

        QMetaObject::connectSlotsByName(MainFrame);
    } // setupUi

    void retranslateUi(QFrame *MainFrame)
    {
        MainFrame->setWindowTitle(QApplication::translate("MainFrame", "Frame", Q_NULLPTR));
        label->setText(QApplication::translate("MainFrame", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:600;\">QUEST\303\225ES ENEM</span></p></body></html>", Q_NULLPTR));
        start_button->setText(QApplication::translate("MainFrame", "INICIAR", Q_NULLPTR));
        help_button->setText(QApplication::translate("MainFrame", "AJUDA", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainFrame: public Ui_MainFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINFRAME_H
