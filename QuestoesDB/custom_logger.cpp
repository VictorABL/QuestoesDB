#include "custom_logger.h"

qdb::CustomLogger::CustomLogger() {}

QFile qdb::CustomLogger::file("../log/debug.log");
QTextStream qdb::CustomLogger::writer(&file);
QString qdb::CustomLogger::version("0.0.1");

//Custom message handler to install in qt core logger,
//this sample was taken from: http://doc.qt.io/qt-5/qtglobal.html#qInstallMessageHandler

void qdb::CustomLogger::CustomMessageHandler(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
    QByteArray localMsg = msg.toLocal8Bit();
    switch (type) {
    case QtDebugMsg:
        LogIn("DEBUG", localMsg.constData(), context.file);
        break;
    case QtInfoMsg:
        fprintf(stderr, "Info: %s (%s)\n", localMsg.constData(), context.file);
        LogIn("INFO", localMsg.constData(), context.file);
        break;
    case QtWarningMsg:
        fprintf(stderr, "Warning: %s (%s:%u, %s)\n", localMsg.constData(), context.file, context.line, context.function);
        LogIn("WARNING", localMsg.constData(), context.file);
        break;
    case QtCriticalMsg:
        fprintf(stderr, "Critical: %s (%s:%u, %s)\n", localMsg.constData(), context.file, context.line, context.function);
        LogIn("CRITICAL", localMsg.constData(), context.file);
        break;
    case QtFatalMsg:
        fprintf(stderr, "Fatal: %s (%s:%u, %s)\n", localMsg.constData(), context.file, context.line, context.function);
        LogIn("FATAL", localMsg.constData(), context.file);
        assert(0);
        break;
    }
}


void qdb::CustomLogger::init() {

//    Initializing logger configs, opening the file.
    qInstallMessageHandler(CustomMessageHandler);
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text)) {qWarning() << "File not opened"; return;}

    WriteHeader(QDateTime::currentDateTime().toString(" dd/MM/yy - hh:mm"));

}


QString qdb::CustomLogger::ParseMessageLogger(const QString& mode, const QString& action, const QString& _file) {

//    Parsing the current message log into string.
    QString out;
    out += "[" + QString("%1").arg(mode, -8) + "]" + ": " + QDateTime::currentDateTime().toString("[ dd/MM/yy | hh:mm ]")
            + " | " + "ACTION: " + QString("%1").arg(action, -60) + " | " + "IN FILE:" +_file + "\n";

    return out;
}


void qdb::CustomLogger::LogIn(const QString& mode, const QString& action, const QString& _file) {

//    Main function to write the log in file.
    QString parse = ParseMessageLogger(mode, action, _file);

    WriteInFile(parse);
}

void qdb::CustomLogger::WriteInFile(const QString &text) {writer << text;}

void qdb::CustomLogger::WriteHeader(const QString &date) {

    QString _version = "VERSION: " + version + "\n\n";
    QString instance = "INSTANCE TIME:" + date + "\n\n";
    WriteInFile("---------------- LOG ----------------\n");
    WriteInFile("*************************************\n\n");
    WriteInFile(_version);
    WriteInFile("AUTHOR: VICTOR\n\n");
    WriteInFile(instance);
    WriteInFile("*************************************\n");
    WriteInFile("-------------------------------------\n\n");
}

void qdb::CustomLogger::end() {

//    Close and flush the log file with the proper logs.
    file.flush();
    file.close();

//    Set the message handler to default.
    qInstallMessageHandler(0);
}
