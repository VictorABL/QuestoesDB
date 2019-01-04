#include "database_impl.h"

qdb::DatabaseImpl::DatabaseImpl() :
    database(),
    queryObj(nullptr)
{}

void qdb::DatabaseImpl::ConnectDB() {

//    Connect database to the qt application interface:

    QString path("../database/questoesdb.db");

    database = QSqlDatabase::addDatabase("QSQLITE");
    qDebug() << "Setting up database..";

    database.setDatabaseName(path);

    if (database.open()) {
        qDebug() << "Database connected..";
        return;
    }

//    else
    qCritical() << "Database not opened..";
    qFatal("Unidentified error. Closing application..");

}

void qdb::DatabaseImpl::ConnectQuery() {

//    Applies query comunication with the database:

    if (database.open()) {
        queryObj = std::make_unique<QSqlQuery>(database);
        qDebug() << "Query connecting to the database..";
        return;
    }
    qWarning() << "Database not openned, cannot connect query..";
}

void qdb::DatabaseImpl::SetConnection() {

//    Connects both database to qt and allows query
//    object setted.

    ConnectDB();
    ConnectQuery();

    qDebug() << "Query and database connection configured..";
}

void qdb::DatabaseImpl::Init() {

    qDebug() << "Initializing database`s connection..";
//    Establish general database`s connection.
    SetConnection();

//    Allows query object to move only forwards to results.
    queryObj->setForwardOnly(true);
}


void qdb::DatabaseImpl::SetQuery(const QString& query) {

//    Set query command:

    if(!database.isOpen()) {qWarning() << "Database not opened.."; return;}

    queryObj->prepare(query);
    qDebug() << "Setting query command..";

    if(!queryObj->exec()) qFatal("Query cannot be executed..");

    if(queryObj->next()) qDebug() << "Query ready..";
}


QString qdb::DatabaseImpl::GetQueryValue(int index) {

//    Get query value based in index, returning a string.
    if(!database.isOpen() || !queryObj->isSelect()) {qWarning() << "Database not opened.."; return "";}
    return queryObj->value(index).toString();
}

void qdb::DatabaseImpl::FinishQuery() {queryObj->finish();}
void qdb::DatabaseImpl::DisconnectDB() {database.close();}

void qdb::DatabaseImpl::End() {
    qDebug() << "Ending database connection..";
    FinishQuery();
    DisconnectDB();
}
