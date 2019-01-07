#include "mainwin.h"
#include "ui_mainwin.h"
#include "maker_win.h"

MainWin::MainWin(QWidget *parent) :
    QMainWindow(parent),
    interface(new Ui::MainWin),
    database_impl(new qdb::DatabaseImpl),
    selector(new qdb::QuestionSelector),
    __maker_win(),
    toggledAnswer(nullptr),
    previousToggled(nullptr),
    selectedAnswer(nullptr),
    rightAnswer(nullptr)
{
    interface->setupUi(this);
//    Switch to UI initial page.
    interface->stackedWidget->setCurrentIndex(0);
    interface->question_text->setStyleSheet("background-color: light gray");
    interface->question_text->setStyleSheet("border: none");

    qdb::CustomLogger::init();

    qDebug() << "Initiaziling main window..";
}

MainWin::~MainWin() {
    selectedAnswer = nullptr;
    rightAnswer = nullptr;
    toggledAnswer = nullptr;
    previousToggled = nullptr;
    delete interface;
}


void MainWin::on_start_button_clicked()
{
    qDebug() << "Main page`s start button clicked..";
    database_impl->Init();
    interface->stackedWidget->setCurrentIndex(1);
    qDebug() << "Page 2 selected..";
}

void MainWin::on_ready_butto_clicked()
{
    qDebug() << "Page 2`s ready button clicked..";
    if(selector->SetSize() == 0) {
        EmptySet();
        qDebug() << "No theme selected..";
        return;
    }

    qDebug() << "Desabling answer`s check button..";
    interface->check_button->setEnabled(false);
    qDebug() << "Hiding answer`s label";
    interface->answer_tag->hide();
    interface->answer_label->hide();
    interface->statusBar->showMessage("Status: Banco de Dados Conectado.");
    qDebug() << "Page 3 selected..";
    CleanAnswer();
    DrawQuestion();
    interface->stackedWidget->setCurrentIndex(2);
}

//============================================================
//************************************************************

//Make answer`s check button available to click.

void MainWin::on_alternative_a_clicked()
{
    if(!interface->check_button->isEnabled()) interface->check_button->setEnabled(true);
}


void MainWin::on_alternative_b_clicked()
{
    if(!interface->check_button->isEnabled()) interface->check_button->setEnabled(true);
}


void MainWin::on_alternative_c_clicked()
{
    if(!interface->check_button->isEnabled()) interface->check_button->setEnabled(true);
}


void MainWin::on_alternative_e_clicked()
{
    if(!interface->check_button->isEnabled()) interface->check_button->setEnabled(true);
}

void MainWin::on_alternative_d_clicked()
{
    if(!interface->check_button->isEnabled()) interface->check_button->setEnabled(true);
}

//************************************************************
//============================================================

void MainWin::on_check_button_clicked()
{
//    Answer`s check button function handler.
    qDebug() << "Answer`s check button clicked..";
    qDebug() << "Cleaning previous toggled answer background..";
    CleanBackground(previousToggled);
    qDebug() << "Checking answer..";
    CheckAnswer(interface->answer_label->text());
    qDebug() << "Showing answer`s labels";
    interface->answer_tag->show();
    interface->answer_label->show();
}

void MainWin::on_back_button_2_clicked()
{
//    Back button to return to theme`s page.
    qDebug() << "Page 3`s back button clicked..";
    qDebug() << "Page 2 selected..";
//    Switch to theme`s page.
    interface->stackedWidget->setCurrentIndex(1);
    qDebug() << "Cleaning answer..";
    CleanAnswer();

    qDebug() << "Cleaning selected answer`s background..";
    CleanBackground(selectedAnswer);

    qDebug() << "Cleaning right answer`s background..";
    CleanBackground(rightAnswer);
    interface->statusBar->showMessage("");

}

void MainWin::SetQuestion(const QString& query) {

    //Function to setup up the choosed question, starting from picking up in database to drawing
    //in proper UI fields. Used in DrawQuestion function.

    qDebug() << "Set question`s query to database..";
    database_impl->SetQuery(query);
    QString theme(database_impl->GetQueryValue(8));
    theme = "Tema: " + theme;

    qDebug() << "Writing question`s fields in UI..";
    interface->question_text->setHtml(database_impl->GetQueryValue(1));
    interface->label_a->setText(database_impl->GetQueryValue(2));
    interface->label_b->setText(database_impl->GetQueryValue(3));
    interface->label_c->setText(database_impl->GetQueryValue(4));
    interface->label_d->setText(database_impl->GetQueryValue(5));
    interface->label_e->setText(database_impl->GetQueryValue(6));
    interface->answer_label->setText(database_impl->GetQueryValue(7));
    interface->theme_label_->setText(theme);
    qDebug() << "Question is ready - Theme:" << database_impl->GetQueryValue(8) << " Database ID:" << database_impl->GetQueryValue(0);
}

//Check buttons to select the themes of questions.
void MainWin::on_math_check_stateChanged(int state)
{

    if(state == 2) {
        interface->statusBar->showMessage("Matemática selecionada");
        selector->InsertTheme("MATEMATICA");
        qDebug() << "Math selected..";
        return;
    }
    selector->RemoveTheme("MATEMATICA");
    interface->statusBar->showMessage("Matemática não selecionada");
    qDebug() << "Math unselected..";
}

void MainWin::on_physic_check_stateChanged(int state)
{
    if(state == 2) {
        interface->statusBar->showMessage("Física selecionada");
        selector->InsertTheme("FISICA");
        qDebug() << "Physics selected..";
        return;
    }
    selector->RemoveTheme("FISICA");
    interface->statusBar->showMessage("Física não selecionada");
    qDebug() << "Physics unselected..";

}

//=========================================================================
//*************************************************************************

//Pick theme funtions, adding or removing in the selector`s set.

void MainWin::on_chemi_check_stateChanged(int state)
{
    if(state == 2) {
        interface->statusBar->showMessage("Química selecionada");
        selector->InsertTheme("QUIMICA");
        qDebug() << "Chemistry selected..";

        return;
    }
    selector->RemoveTheme("QUIMICA");
    interface->statusBar->showMessage("Química não selecionada");
    qDebug() << "Chemistry unselected..";

}

void MainWin::on_bio_check_stateChanged(int state)
{
    if(state == 2) {
        interface->statusBar->showMessage("Biologia selecionada");
        selector->InsertTheme("BIOLOGIA");
        qDebug() << "Biology selected..";
        return;
    }

    selector->RemoveTheme("BIOLOGIA");
    interface->statusBar->showMessage("Biologia não selecionada");
    qDebug() << "Biology unselected..";
}

void MainWin::on_hist_check_stateChanged(int state)
{
    if(state == 2) {
        interface->statusBar->showMessage("História selecionada");
        selector->InsertTheme("HISTORIA");
        qDebug() << "History selected..";

        return;
    }
    selector->RemoveTheme("HISTORIA");
    interface->statusBar->showMessage("História não selecionada");
    qDebug() << "History unselected..";
}

void MainWin::on_geo_check_stateChanged(int state)
{
    if(state == 2) {
        interface->statusBar->showMessage("Geografia selecionada");
        selector->InsertTheme("GEOGRAFIA");
        qDebug() << "Geography selected..";

        return;
    }
    selector->RemoveTheme("GEOGRAFIA");
    interface->statusBar->showMessage("Geografia não selecionada");
    qDebug() << "Geography unselected..";
}

void MainWin::on_philo_check_stateChanged(int state)
{
    if(state == 2) {
        interface->statusBar->showMessage("Filosofia selecionada");
        selector->InsertTheme("FILOSOFIA");
        qDebug() << "Philosophy selected..";

        return;
    }
    selector->RemoveTheme("FILOSOFIA");
    interface->statusBar->showMessage("Filosofia não selecionada");
    qDebug() << "Philosophy unselected..";
}

void MainWin::on_soci_check_stateChanged(int state)
{
    if(state == 2) {
        interface->statusBar->showMessage("Sociologia selecionada");
        selector->InsertTheme("SOCIOLOGIA");
        qDebug() << "Sociology selected..";
        return;
    }
    selector->RemoveTheme("SOCIOLOGIA");
    interface->statusBar->showMessage("Sociologia não selecionada");
    qDebug() << "Sociology unselected..";

}

void MainWin::on_port_check_stateChanged(int state)
{
    if(state == 2) {
        interface->statusBar->showMessage("Português selecionado");
        selector->InsertTheme("PORTUGUES");
        qDebug() << "Portuguese selected..";
        return;
    }
    selector->RemoveTheme("PORTUGUES");
    interface->statusBar->showMessage("Português não selecionado");
    qDebug() << "Portuguese unselected..";

}

//*************************************************************************
//=========================================================================

void MainWin::EmptySet() {

//    Show a message box in case the selector`s set is empty.
    QMessageBox::about(this, "Aviso", "Nenhum tema selecionado.");
}

void MainWin::DrawQuestion() {

//    Draws the question, using selector to generate the random query to the database
//    and setting up in the SetQuestion function.
    auto query = selector->GenerateQueryString(database_impl);
    SetQuestion(query);

}


void MainWin::on_next_button_clicked()
{

//    Next button to pick another question.

    qDebug() << "Next button clicked..";
    qDebug() << "Hiding answer`s labels..";

//    Hiding answer`s labels.
    interface->answer_tag->hide();
    interface->answer_label->hide();

    qDebug() << "Disabling check button..";
    interface->check_button->setEnabled(false);
    qDebug() << "Cleaning selected answer`s background..";
    CleanBackground(selectedAnswer);
    qDebug() << "Cleaning right answer`s background..";
    CleanBackground(rightAnswer);
    qDebug() << "Set next question..";
    DrawQuestion();
    qDebug() << "Cleaning answer`s radio button..";
    CleanAnswer();
}


void MainWin::UncheckAnswer(auto& radio_button) {

//    Set the radio button selected to unchecked.
    radio_button->setAutoExclusive(false);
    radio_button->setChecked(false);
    radio_button->setAutoExclusive(true);
}

//===================================================================
//*******************************************************************

//Alternative`s toggled functions, setting the selected(label) and toggled(radio button)
//answer`s variables.

void MainWin::on_alternative_a_toggled(bool checked)
{
    if (checked) {
        qDebug() << "Alternative A selected..";
        SetPreviousToggled(selectedAnswer);
        selectedAnswer = interface->label_a;
        toggledAnswer = interface->alternative_a;
    }
}


void MainWin::on_alternative_b_toggled(bool checked)
{
    if (checked) {
        qDebug() << "Alternative B selected..";
        SetPreviousToggled(selectedAnswer);
        selectedAnswer = interface->label_b;
        toggledAnswer = interface->alternative_b;
    }
}

void MainWin::on_alternative_c_toggled(bool checked)
{
    if (checked) {
        qDebug() << "Alternative C selected..";
        SetPreviousToggled(selectedAnswer);
        selectedAnswer = interface->label_c;
        toggledAnswer = interface->alternative_c;
    }
}

void MainWin::on_alternative_d_toggled(bool checked)
{
    if (checked) {
        qDebug() << "Alternative D selected..";
        SetPreviousToggled(selectedAnswer);
        selectedAnswer = interface->label_d;
        toggledAnswer = interface->alternative_d;

    }

}

void MainWin::on_alternative_e_toggled(bool checked)
{
    if (checked) {
        qDebug() << "Alternative E selected..";
        SetPreviousToggled(selectedAnswer);
        selectedAnswer = interface->label_e;
        toggledAnswer = interface->alternative_e;
    }
}

//*******************************************************************
//===================================================================

void MainWin::CleanAnswer() {

    //Clean toggled answer.
    if (selectedAnswer == nullptr) return;
    UncheckAnswer(toggledAnswer);
    qDebug() << "Toggled answer cleaned..";
}

//===================================================================
//*******************************************************************

//Help buttons manager functions.

void MainWin::on_help2_button_clicked()
{

    QMessageBox::information(this, "Ajuda", "É a sua primeira vez?\nSelecione os temas sobre os quais você deseja responder e clique em PRONTO para começar a responder as questões.\n\n\t\tBoa sorte :)");
    qDebug() << "Page 2 information`s button clicked..";
}

void MainWin::on_help_button_clicked()
{
    QMessageBox::information(this, "Sobre", "Bem vindo ao QuestõesDB!\nUm banco de questões de provas do ENEM feito para ajudar alunos e professores.");
    qDebug() << "Page 1 information`s button clicked..";
}

//*******************************************************************
//===================================================================

void MainWin::CheckAnswer(const QString& answer) {

    //Check if the answer is right, call comparing answers for each case.

    qDebug() << "Checking if selected answer is right..";
    switch (answer.at(0).toLatin1()) {
    case 'A':
        rightAnswer = interface->label_a;
        CompareAnswers();
        break;
    case 'B':
        rightAnswer = interface->label_b;
        CompareAnswers();
        break;
    case 'C':

        rightAnswer = interface->label_c;
        CompareAnswers();
        break;
    case 'D':
        rightAnswer = interface->label_d;
        CompareAnswers();
        break;
    case 'E':
        rightAnswer = interface->label_e;
        CompareAnswers();
        break;
//    If no one answer is selected, it never reach this case, since check button
//    is only available if an answer is selected.
    default:
        break;
    }
}

void MainWin::PaintWrongAnswer(auto& widget) {

//    widget->setStyleSheet("background-color: rgb(255, 0, 25)");
    widget->setStyleSheet("border: 3px solid red; border-radius: 10px");
    qDebug() << "Drawing wrong answer`s border..";
}

void MainWin::PaintRightAnswer(auto& widget) {

//    widget->setStyleSheet("background-color: rgb(76, 130, 34)");
    widget->setStyleSheet("border: 3px solid green; border-radius: 10px");
    qDebug() << "Drawing right answer`s border..";

}


void MainWin::CompareAnswers() {

//    Comparing pointers.
    qDebug() << "Comparing answers..";
    if(rightAnswer == selectedAnswer) {
        PaintRightAnswer(rightAnswer);
        return;
    }

//    if the answer is wrong.
    PaintRightAnswer(rightAnswer);
    PaintWrongAnswer(selectedAnswer);
}

void MainWin::CleanBackground(auto& widget) {

    //Clean answer`s background.

    if(widget == nullptr) return;

//    widget->setStyleSheet("background-color: light gray");
    widget->setStyleSheet("border: none");
}

void MainWin::SetPreviousToggled(auto& widget) {

    qDebug() << "Setting previous toggled answer..";
    if(widget == nullptr) return;
    previousToggled = widget;
}

void MainWin::closeEvent(QCloseEvent *event) {

    //Function to close the main window.

    qDebug() << "Closing application..";

    qdb::CustomLogger::end();
    event->accept();
}

void MainWin::on_toolButton_clicked()
{

//    Message box to initiate the question maker mode.
    QString _question = "Deseja iniciar o modo criador de questões?";
    QMessageBox::StandardButton reply =  QMessageBox::question(this, "",_question,
                          QMessageBox::Yes | QMessageBox::No);

    if(reply == QMessageBox::Yes) MakerMode();
}

void MainWin::MakerMode() {

//    Shows the question`s maker mode, hiding the main window.
    this->hide();
    __maker_win = std::make_unique<qdb::MakerWin>();
    __maker_win->show();
}
