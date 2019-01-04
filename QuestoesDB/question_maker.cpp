#include "question_maker.h"

qdb::QuestionMaker::QuestionMaker() :
    state_img_buffer(),
    alt_img_buffer(ALT_NUM),
    alt_text_buffer(ALT_NUM),
    state_text_buffer(),
    current_max_ID(0),
    dir_prefix(),
    theme_index(0),
    theme_table(),
    main_query("INSERT INTO "),
    id_parser(new qdb::QueryParser)
{}

//Letters helper members.
QString qdb::QuestionMaker::letters::alt = "ABCDE";
QVector<QString> qdb::QuestionMaker::letters::theme = {"ans_a/", "ans_b/", "ans_c/", "ans_d/", "ans_e/"};

//Destructor.
qdb::QuestionMaker::~QuestionMaker() {}

void qdb::QuestionMaker::InsertStateImage(const QString& image_dir) {

    qDebug() << "Inserting statement`s image..";
    if(!state_img_buffer.contains(image_dir)) state_img_buffer.insert(image_dir);
}

void qdb::QuestionMaker::CheckStateImages() {

//    Check for the image`s directories that are in set, otherwise remove them.

    qDebug() << "Checking states`s img directories..";
    QSet<QString>::iterator it = state_img_buffer.begin();

    while(it != state_img_buffer.end()) {
        if(!state_text_buffer.contains(*it, Qt::CaseSensitive)) it = state_img_buffer.erase(it);
        else ++it;
    }
}


size_t qdb::QuestionMaker::SetSize() {return state_img_buffer.size();}

void qdb::QuestionMaker::InsertAltImage(int index, const QString& image_dir) {

//    Inserting alternative`s img into buffers.
    alt_img_buffer[index] = image_dir;
}


void qdb::QuestionMaker::AssemblyStatement() {

//    Main function to assemble the statement text.
    qDebug() << "Initializing statement`s text assemble..";
    if(state_img_buffer.empty() || state_text_buffer == "") return;
    CheckStateImages();
    ReplaceStateImgDir();
}

void qdb::QuestionMaker::CopyImgFiles(const QString& src, const QString& dir) {

    qDebug() << "Copying img`s files to proper directories..";
    QFile::copy(src, dir);
}

QString qdb::QuestionMaker::ParseStateDir(const QString& new_name) {

    qDebug() << "Parsing statement`s img file directory.. ";
    QString dir;
    dir += "../img/" + dir_prefix + "state/" + new_name;
    return dir;
}

QString qdb::QuestionMaker::GenerateImgName(const QString& dir, int num) {

    qDebug() << "Generate statement`s img files name..";
    QFileInfo info(dir);

//    Setting proper file`s extension.
    QString extension = info.suffix();
//    If its the first img on buffer.
    if (num == 0) return ("questao_" + QVariant(current_max_ID + 1).toString() + "." + extension);

//    For the next, img`s names are differentiated with a final index.
    return ("questao_" + QVariant(current_max_ID + 1).toString() + "_"+ QVariant(num).toString() +"." + extension);
}

QString qdb::QuestionMaker::GenerateImgName(const QString& dir, const QString& letter) {

   qDebug() << "Generate alternatives`s img file names..";
    QFileInfo info(dir);

//    Same as above.
    QString extension = info.suffix();
    return ("alternativa_" + letter + "_" + QVariant(current_max_ID + 1).toString() + "." + extension);
}

void qdb::QuestionMaker::ReplaceStateImgDir() {

    qDebug() << "Replacing statement`s img directories in text fields..";
    QSet<QString>::const_iterator it = state_img_buffer.begin();

    for(int index = 0; it != state_img_buffer.end(); ++it, ++index) {

//        Overload function to statement, index its for more than one img.
        auto file_name = GenerateImgName(*it, index);

        auto new_dir = ParseStateDir(file_name);

        CopyImgFiles(*it, new_dir);
        state_text_buffer.replace(*it, new_dir);
    }
}

QString qdb::QuestionMaker::ParseAltDir(const QString& alternative, const QString& new_name) {

    qDebug() << "Parsing alternative`s img file directory..";
    QString dir;
    dir += "../img/" + dir_prefix + alternative + new_name;
    return dir;
}

void qdb::QuestionMaker::ReplaceAltImgDir() {

//    Only activated if upload button has been clicked.

    qDebug() << "Replacing alternatives`s img directories in text fields..";
    for(int it = 0; it < alt_img_buffer.size(); ++it) {

        if((alt_img_buffer[it]) != "" && alt_text_buffer[it].contains(alt_img_buffer[it])) {

//            Overload function to alternatives, the difference its about the letters.
            auto file_name = GenerateImgName(alt_img_buffer[it], letters::alt.at(it));

            auto new_dir = ParseAltDir(letters::theme[it], file_name);

            CopyImgFiles(alt_img_buffer[it], new_dir);
            alt_text_buffer[it].replace(alt_img_buffer[it], new_dir);
        }
    }
}

void qdb::QuestionMaker::AssemblyAlternatives() {ReplaceAltImgDir();}

//Insert text fields in proper buffers.
void qdb::QuestionMaker::InsertStateText(const QString& text) {state_text_buffer = text;}
void qdb::QuestionMaker::InsertAltText(int index, const QString& text) {alt_text_buffer[index] = text;}

void qdb::QuestionMaker::InsertTheme(int theme_index, const QString& dir_prefix, const QString& theme_table) {

    qDebug() << "Inserting themes in buffers..";
    this->theme_index = theme_index;
    this->dir_prefix = dir_prefix;
    this->theme_table = theme_table;
}

//Insert answer choice in buffer.
void qdb::QuestionMaker::InsertAnswer(const QString& answer) {this->answer = answer;}

//Append main query functions.
void qdb::QuestionMaker::QueryAddTable() {main_query += theme_table;}
void qdb::QuestionMaker::QueryAddID() {main_query += "VALUES ("+ QVariant(current_max_ID + 1).toString() + ", ";}
void qdb::QuestionMaker::QueryAddState() {main_query += "'" + state_text_buffer.remove("\\", Qt::CaseInsensitive) + "'" + ", ";}
void qdb::QuestionMaker::QueryAddAlts() {for(QString& alt : alt_text_buffer) {main_query += "'"+ alt + "'"+ ", ";}}
void qdb::QuestionMaker::QueryAddAns() {main_query += "'" + answer + "'"+ ", ";}
void qdb::QuestionMaker::QueryAddTheme() {main_query += QVariant(theme_index).toString() + ")";}

QString qdb::QuestionMaker::GenerateMainQuery() {

    qDebug() << "Starting to assemble insert main query..";
    QueryAddTable(); QueryAddID();
    QueryAddState(); QueryAddAlts();
    QueryAddAns(); QueryAddTheme();

    qDebug() << "Query genereated successful..";
    return main_query;
}

void qdb::QuestionMaker::GetMaxIDCount(const database_ptr& database) {

    qDebug() << "Getting maximum question´s ID..";

    auto query = id_parser->ParseCountQuery(theme_table);
    database->SetQuery(query);
    current_max_ID = database->GetQueryValue(0).toInt();

}

//Clear buffers`s function.
void qdb::QuestionMaker::ClearStateBuffer() {state_img_buffer.clear();}
void qdb::QuestionMaker::ClearQuery() {main_query = "INSERT INTO ";}

void qdb::QuestionMaker::ClearAll() {
    ClearStateBuffer();
    ClearQuery();
}
