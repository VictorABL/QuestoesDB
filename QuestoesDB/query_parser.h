#ifndef QUESTOES_DB_QUERY_PARSER_H
#define QUESTOES_DB_QUERY_PARSER_H

#include <QString>
#include <QDebug>

namespace qdb {

class QueryParser        
{

//    Query parsing class, handles with the count and select types of query.
//    The insert query is handle by question maker.
public:

    QueryParser();
    ~QueryParser();

    QString ParseSelectQuery(const QString&, int);
    QString ParseCountQuery(const QString&);

private:


};

}
#endif // QUERY_PARSER_H
