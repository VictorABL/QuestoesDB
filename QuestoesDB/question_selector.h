#ifndef QUESTOESDB_QUESTIONSELECTOR_H
#define QUESTOESDB_QUESTIONSELECTOR_H

#include<QSet>
#include<QString>
#include<iterator>
#include<QStringBuilder>
#include<QDebug>
#include<random>
#include <memory>

#include "database_impl.h"
#include "query_parser.h"

namespace qdb {

class QuestionSelector {

//    Class that handles with the selection of a database register, in this
//    case, a question. It has multiple members to select in a pseudo-random
//    way.

    typedef std::unique_ptr<DatabaseImpl> database_ptr;

public:
    QuestionSelector();

    void InsertTheme(const QString&);
    void RemoveTheme(const QString&);
    QString ParseSelectQuery(const QString&, int);
    QString ParseCountQuery(const QString&);
    QString GenerateRandomTheme();
    int GenerateRandomQuestionID(int);
    int GetMaxIDCount(const database_ptr&, const QString&);
    QString GenerateQueryString(const database_ptr&);
    size_t SetSize();

private:

    QSet<QString> questionThemes;
    std::unique_ptr<qdb::QueryParser> q_parser;
};

}
#endif // QUESTIONSELECTOR_H
