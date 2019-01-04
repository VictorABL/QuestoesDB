#include "question_selector.h"

qdb::QuestionSelector::QuestionSelector() :
    questionThemes(),
    q_parser(new qdb::QueryParser)
{}

void qdb::QuestionSelector::InsertTheme(const QString& theme) {questionThemes.insert(theme);}

void qdb::QuestionSelector::RemoveTheme(const QString& theme) {questionThemes.remove(theme);}


QString qdb::QuestionSelector::GenerateRandomTheme() {

    qDebug() << "Generating random themes..";
    if(questionThemes.size() == 0) return "";

//    Random number generator using hardware source:
    std::random_device rand_dev;

//    Random number generator algorithm by Matsumoto and Nishimura (1998).
    std::mt19937 engine(rand_dev());
//    Uniforme interger distribution used as range.
    std::uniform_int_distribution<> range(0, questionThemes.size() - 1);

    //    Ramdomly increasing the set iterator
    auto iterator = questionThemes.begin();

    iterator += range(engine);

    return *iterator;
}



int qdb::QuestionSelector::GenerateRandomQuestionID(int lastID) {

    qDebug() << "Generating random question ID";
    if (lastID <= 0) return 0;
//    Random number generator using hardware source:
    std::random_device rand_dev;

//    Shuffle order engine.
    std::knuth_b engine(rand_dev());
//    Uniforme interger distribution used as range.
    std::uniform_int_distribution<> range(1, lastID);

    return range(engine);
}


int qdb::QuestionSelector::GetMaxIDCount(const database_ptr& database, const QString& query) {

    qDebug() << "Getting maximum question´s ID..";
    database->SetQuery(query);
    auto num = database->GetQueryValue(0).toInt();

    return num;
}

QString qdb::QuestionSelector::GenerateQueryString(const database_ptr& database) {

    qDebug() << "Generating question query string..";
    auto theme = GenerateRandomTheme();

//    Set the query to get the number of questions:
    auto query_maxID = q_parser->ParseCountQuery(theme);

//    Get the number of questions:
    auto max_ID = GetMaxIDCount(database ,query_maxID);

    auto questionID = GenerateRandomQuestionID(max_ID);

    auto mainQuery = q_parser->ParseSelectQuery(theme, questionID);

    return mainQuery;
}


size_t qdb::QuestionSelector::SetSize() {return questionThemes.size();}
