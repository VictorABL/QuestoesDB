#include "maker_win.h"
#include "ui_makerwin.h"

qdb::MakerWin::MakerWin(QWidget *parent) :
    QMainWindow(parent),
    interface(new Ui::MakerWin),
    question_maker(new qdb::QuestionMaker),
    database_impl(new qdb::DatabaseImpl)
{

    qDebug() << "Initializing question`s maker mode..";
    interface->setupUi(this);
    database_impl->Init();
    InitInterface();
}

qdb::MakerWin::~MakerWin() {delete interface;}

void qdb::MakerWin::on_upl_img_state_clicked() {

    qDebug() << "Uploading statement`s image..";

    auto file_name = GetImgPath();
    if (file_name == "") return;

//    Parsing img`s html to QPlainText.
    qDebug() << "Parsing img`s html..";
    QString full = "<img src = \"" + file_name + "\" >";
    interface->state_plain_text->appendPlainText(full);
    question_maker->InsertStateImage(file_name);

}

void qdb::MakerWin::on_parse_img_state_clicked()
{
    qDebug() << "Parsing html to text browser..";
    interface->text_html_viewer->setText(interface->state_plain_text->toPlainText());
}

void qdb::MakerWin::UpdateAltImg(auto& widget, int index) {

    qDebug() << "Uploading alternatives´s images..";
    auto file_name = GetImgPath();
    if (file_name == "") return;

//    Parsing img`s html to QPlainText.
    qDebug() << "Parsing img`s html..";
    QString full = "<img src = \"" + file_name + "\" >";
    question_maker->InsertAltImage(index, file_name);
    widget->appendPlainText(full);
}

QString qdb::MakerWin::GetImgPath() {

    qDebug() << "Setting extension`s filter..";
    QString filter = "PNG File (*.png) ;; JPEG File (*.jpeg) ;; JPG (*.jpg)";

    qDebug() << "Opening file`s tree..";
    QString file_name = QFileDialog::getOpenFileName(this, "Open", QDir::homePath(), filter);

    return file_name;
}

//Set img`s files to buffer of question_maker.
void qdb::MakerWin::on_alt_a_upl_clicked() {UpdateAltImg(interface->alt_a_text, 0);}
void qdb::MakerWin::on_alt_b_upl_clicked() {UpdateAltImg(interface->alt_b_text, 1);}
void qdb::MakerWin::on_alt_c_upl_clicked() {UpdateAltImg(interface->alt_c_text, 2);}
void qdb::MakerWin::on_alt_d_upl_clicked() {UpdateAltImg(interface->alt_d_text, 3);}
void qdb::MakerWin::on_alt_e_upl_clicked() {UpdateAltImg(interface->alt_e_text, 4);}

void qdb::MakerWin::on_save_button_clicked()
{
    qDebug() << "Starting saving img process..";

    if(!SureMsgBox()) return;

    SetAnswer();
    SetTheme();
    question_maker->GetMaxIDCount(database_impl);
    InsertAllText();
    question_maker->AssemblyStatement();
    question_maker->AssemblyAlternatives();
    InsertQuestion();
    SavedMsgBox();
    CleanAll();
    InitInterface();
}

void qdb::MakerWin::InsertAllText() {

    qDebug() << "Inserting texts into question_maker`s buffers..";
    question_maker->InsertStateText(interface->state_plain_text->toPlainText());
    question_maker->InsertAltText(0, interface->alt_a_text->toPlainText());
    question_maker->InsertAltText(1, interface->alt_b_text->toPlainText());
    question_maker->InsertAltText(2, interface->alt_c_text->toPlainText());
    question_maker->InsertAltText(3, interface->alt_d_text->toPlainText());
    question_maker->InsertAltText(4, interface->alt_e_text->toPlainText());
}

void qdb::MakerWin::SetTheme() {

    qDebug() << "Setting selected theme..";
    switch (interface->comboBox->currentIndex()) {
    case 0:
        question_maker->InsertTheme(1, "math/", "MATEMATICA ");
        break;
    case 1:
        question_maker->InsertTheme(2, "phys/", "FISICA ");
        break;
    case 2:
        question_maker->InsertTheme(3, "chem/", "QUIMICA ");
        break;
    case 3:
        question_maker->InsertTheme(4, "bio/", "BIOLOGIA ");
        break;
    case 4:
        question_maker->InsertTheme(5, "hist/", "HISTORIA ");
        break;
    case 5:
        question_maker->InsertTheme(6, "geo/", "GEOGRAFIA ");
        break;
    case 6:
        question_maker->InsertTheme(7, "philo/", "FILOSOFIA ");
        break;
    case 7:
        question_maker->InsertTheme(8, "socio/", "SOCIOLOGIA ");
        break;
    case 8:
        question_maker->InsertTheme(9, "port/", "PORTUGUES ");
        break;
    }
}

void qdb::MakerWin::SetAnswer() {
    qDebug() << "Setting selected answer..";
    question_maker->InsertAnswer(interface->comboBox_2->currentText());
}


void qdb::MakerWin::InsertQuestion() {

    qDebug() << "Starting question insertion..";
    auto query = question_maker->GenerateMainQuery();
    database_impl->SetQuery(query);
    qDebug() << "Question inserted..";
}

void qdb::MakerWin::CleanAll() {

//    Main function to cleaning.
    qDebug() << "Cleaning all text`s fields..";
    interface->state_plain_text->clear();
    interface->text_html_viewer->clear();
    interface->alt_a_text->clear();
    interface->alt_b_text->clear();
    interface->alt_c_text->clear();
    interface->alt_d_text->clear();
    interface->alt_e_text->clear();

    qDebug() << "Cleaning all text`s buffers..";
    question_maker->ClearAll();
    qDebug() << "Ending query process..";
    database_impl->FinishQuery();
}

bool qdb::MakerWin::SureMsgBox() {

    qDebug() << "Displaying question message box..";
    QString _question = "Você tem certeza que deseja continuar e salvar a questão no banco?\n"
                        "Lembre-se, você não poderá realizar alterações posteriormente.";

    QMessageBox::StandardButton reply = QMessageBox::question(this,"Sobre",
                                                              _question,
                                        QMessageBox::Yes | QMessageBox::No);

    if(reply == QMessageBox::Yes) return true;
    return false;
}

void qdb::MakerWin::SavedMsgBox() {

    qDebug() << "Displaying saved message box..";
    QMessageBox::about(this, "Sobre", "Sua questão foi salva com sucesso! :)");
}


void qdb::MakerWin::InitInterface() {

    qDebug() << "Setting up initial html`s texts into fields..";
    interface->state_plain_text->appendPlainText("<body align = \"justify\"> </body>");
    interface->alt_a_text->appendPlainText("<body align = \"justify\"> </body>");
    interface->alt_b_text->appendPlainText("<body align = \"justify\"> </body>");
    interface->alt_c_text->appendPlainText("<body align = \"justify\"> </body>");
    interface->alt_d_text->appendPlainText("<body align = \"justify\"> </body>");
    interface->alt_e_text->appendPlainText("<body align = \"justify\"> </body>");
}

void qdb::MakerWin::closeEvent(QCloseEvent* event) {

    database_impl->End();
    qDebug() << "Closing question`s maker application..";
    qdb::CustomLogger::end();
    event->accept();
}
