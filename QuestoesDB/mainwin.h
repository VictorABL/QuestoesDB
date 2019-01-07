#ifndef QUESTOESDB_MAINWIN_H
#define QUESTOESDB_MAINWIN_H

#include <QMainWindow>
#include <QMessageBox>
#include <QRadioButton>
#include <QLabel>
#include <QTextBrowser>
#include <QTextStream>
#include <memory>
#include <QString>
#include <QDebug>
#include <QCloseEvent>

#include "database_impl.h"
#include "question_selector.h"
#include "custom_logger.h"
#include "maker_win.h"

namespace Ui {
class MainWin;
}

class MainWin : public QMainWindow
{
    Q_OBJECT

public:

    explicit MainWin(QWidget *parent = 0);
    ~MainWin();

private slots:


    void on_start_button_clicked();
    void on_ready_butto_clicked();
    void on_alternative_a_clicked();
    void on_alternative_b_clicked();
    void on_alternative_c_clicked();
    void on_alternative_e_clicked();
    void on_alternative_d_clicked();
    void on_check_button_clicked();
    void on_back_button_2_clicked();

    void on_math_check_stateChanged(int);
    void on_physic_check_stateChanged(int);
    void on_chemi_check_stateChanged(int);
    void on_bio_check_stateChanged(int);
    void on_hist_check_stateChanged(int);
    void on_geo_check_stateChanged(int);
    void on_philo_check_stateChanged(int);
    void on_soci_check_stateChanged(int);
    void on_port_check_stateChanged(int);
    void on_next_button_clicked();

    void on_alternative_a_toggled(bool);
    void on_alternative_b_toggled(bool);
    void on_alternative_c_toggled(bool);
    void on_alternative_e_toggled(bool);
    void on_alternative_d_toggled(bool);
    void on_help2_button_clicked();
    void on_help_button_clicked();

    void on_toolButton_clicked();

private:

//    Question methods:
    void SetQuestion(const QString&);
    void EmptySet();
    void DrawQuestion();
    void UncheckAnswer(auto&);
    void CleanAnswer();
    void CheckAnswer(const QString&);
    void PaintWrongAnswer(auto&);
    void PaintRightAnswer(auto&);
    void CompareAnswers();
    void CleanBackground(auto&);
    void SetPreviousToggled(auto&);
    void closeEvent(QCloseEvent* );

    void MakerMode();

//    Main Window interface:
    Ui::MainWin* interface;

//    Database member:
    std::unique_ptr<qdb::DatabaseImpl> database_impl;

//    Question members:
    std::unique_ptr<qdb::QuestionSelector> selector;

    std::unique_ptr<qdb::MakerWin> __maker_win;


//    Interface member`s pointers:
    QRadioButton* toggledAnswer;
    QLabel* previousToggled;
    QLabel* selectedAnswer;
    QLabel* rightAnswer;

//toggledAnswer is needed to swap the radio buttons and to uncheck the selected answer.
//selectedAnswer is needed to compare with the right answer and to draw to borders, indicating
//if the user has chosen correctly.


};

#endif
