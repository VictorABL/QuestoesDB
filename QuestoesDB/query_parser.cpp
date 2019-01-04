#include "query_parser.h"

qdb::QueryParser::QueryParser() {}

qdb::QueryParser::~QueryParser() {}

QString qdb::QueryParser::ParseCountQuery(const QString& theme) {

    qDebug() << "Parsing count query..";
    return ("SELECT CONTADOR_" + theme + " FROM CONTADOR");
}


QString qdb::QueryParser::ParseSelectQuery(const QString& theme, int questionID) {

    qDebug() << "Parsing select query..";
    QString query("SELECT IDQUESTAO, ENUNCIADO, ALTERNATIVA_A, ALTERNATIVA_B, ALTERNATIVA_C, ALTERNATIVA_D, ALTERNATIVA_E, RESPOSTA, TEMA.TEMA FROM ");

    query += theme + " INNER JOIN TEMA ON ID_TEMA = TEMA.IDTEMA WHERE IDQUESTAO = " + QVariant(questionID).toString();

    return query;
}
