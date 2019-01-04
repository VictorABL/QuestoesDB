/********************************************************************************
** Form generated from reading UI file 'answerframe.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANSWERFRAME_H
#define UI_ANSWERFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnswerFrame
{
public:
    QPushButton *pushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QRadioButton *alternative_a;
    QRadioButton *alternative_b;
    QRadioButton *alternative_c;
    QRadioButton *alternative_d;
    QRadioButton *alternative_e;

    void setupUi(QFrame *AnswerFrame)
    {
        if (AnswerFrame->objectName().isEmpty())
            AnswerFrame->setObjectName(QStringLiteral("AnswerFrame"));
        AnswerFrame->resize(370, 299);
        AnswerFrame->setFrameShape(QFrame::StyledPanel);
        AnswerFrame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(AnswerFrame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 260, 89, 25));
        widget = new QWidget(AnswerFrame);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(80, 70, 121, 151));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        alternative_a = new QRadioButton(widget);
        alternative_a->setObjectName(QStringLiteral("alternative_a"));

        verticalLayout->addWidget(alternative_a);

        alternative_b = new QRadioButton(widget);
        alternative_b->setObjectName(QStringLiteral("alternative_b"));

        verticalLayout->addWidget(alternative_b);

        alternative_c = new QRadioButton(widget);
        alternative_c->setObjectName(QStringLiteral("alternative_c"));

        verticalLayout->addWidget(alternative_c);

        alternative_d = new QRadioButton(widget);
        alternative_d->setObjectName(QStringLiteral("alternative_d"));

        verticalLayout->addWidget(alternative_d);

        alternative_e = new QRadioButton(widget);
        alternative_e->setObjectName(QStringLiteral("alternative_e"));

        verticalLayout->addWidget(alternative_e);


        retranslateUi(AnswerFrame);

        QMetaObject::connectSlotsByName(AnswerFrame);
    } // setupUi

    void retranslateUi(QFrame *AnswerFrame)
    {
        AnswerFrame->setWindowTitle(QApplication::translate("AnswerFrame", "Frame", Q_NULLPTR));
        pushButton->setText(QApplication::translate("AnswerFrame", "PushButton", Q_NULLPTR));
        alternative_a->setText(QApplication::translate("AnswerFrame", "A", Q_NULLPTR));
        alternative_b->setText(QApplication::translate("AnswerFrame", "B", Q_NULLPTR));
        alternative_c->setText(QApplication::translate("AnswerFrame", "C", Q_NULLPTR));
        alternative_d->setText(QApplication::translate("AnswerFrame", "D", Q_NULLPTR));
        alternative_e->setText(QApplication::translate("AnswerFrame", "E", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AnswerFrame: public Ui_AnswerFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANSWERFRAME_H
