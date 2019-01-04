#ifndef QUESTOESDB_DATABASE_IMPL_H
#define QUESTOESDB_DATABASE_IMPL_H

#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <memory>
#include <QDebug>
#include <QString>

namespace qdb {

class DatabaseImpl
{

//    Database implementation class, provides ways to safely connect to
//    a SQlite database and a use of query`s API provided by QT.

public:

    DatabaseImpl();

    void SetQuery(const QString&);
    QString GetQueryValue(int);
    void FinishQuery();
    void Init();
    void End();

private:

    void ConnectDB();
    void ConnectQuery();
    void SetConnection();
    void DisconnectDB();

    QSqlDatabase database;
    std::unique_ptr<QSqlQuery> queryObj;


};

}
#endif // DATABASE_IMPL_H
