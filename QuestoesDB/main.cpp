#include "mainwin.h"
#include "maker_win.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    qdb::MakerWin w;
    MainWin w;
    w.show();

    return a.exec();
}
