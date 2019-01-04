#ifndef QUESTOESDB_CUSTOMLOGGER_H
#define QUESTOESDB_CUSTOMLOGGER_H

#include <QApplication>
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QDebug>
#include <QDateTime>
#include <assert.h>

namespace qdb {

class CustomLogger
{

//    Logger singleton class, provide an interface to set up the log
//    to a external file, using the log handle provided by QT.
//    Does not create a new log interface, only redirect the received log
//    to another file.

public:

    CustomLogger(CustomLogger&) = delete;
    void operator=(CustomLogger&) = delete;

    static void CustomMessageHandler(QtMsgType, const QMessageLogContext&, const QString&);
    static void init();
    static void end();

private:

    CustomLogger();

    static void WriteInFile(const QString&);
    static QString ParseMessageLogger(const QString&, const QString&, const QString&);
    static void LogIn(const QString&, const QString&, const QString&);

    static void WriteHeader(const QString&);

    static QFile file;
    static QTextStream writer;
    static QString version;
};

}

#endif
