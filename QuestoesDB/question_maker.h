#ifndef QUESTOESDB_QUESTIONMAKER_H
#define QUESTOESDB_QUESTIONMAKER_H

#include <QFile>
#include <QFileDialog>
#include <QFileInfo>
#include <QString>
#include <QSet>
#include <QDebug>
#include <QVector>
#include <memory>

#include "query_parser.h"
#include "database_impl.h"

//Defines the numbers of question`s alternatives.
#ifndef ALT_NUM
#define ALT_NUM 5
#endif

namespace qdb {

class QuestionMaker
{

//    Provides an interface to construct a insert query to the database,
//    it has multiple members that stores the directories of img`s files
//    and the texts to be placed in the query.

    typedef std::unique_ptr<qdb::DatabaseImpl> database_ptr;

public:

    QuestionMaker();
    ~QuestionMaker();

    void InsertStateImage(const QString&);
    void InsertStateText(const QString&);
    void InsertAltImage(int, const QString&);
    void InsertAltText(int, const QString&);
    void InsertTheme(int, const QString&, const QString&);
    void InsertAnswer(const QString&);

    size_t SetSize();

    void GetMaxIDCount(const database_ptr&);
    void AssemblyStatement();
    void AssemblyAlternatives();
    QString GenerateMainQuery();

    void ClearAll();

private:

    struct letters {
        static QString alt;
        static QVector<QString> theme;
    };

//    Image`s generating files methods:
    void CheckStateImages();
    void CopyImgFiles(const QString&, const QString&);
    QString ParseStateDir(const QString&);
    QString GenerateImgName(const QString&, int num = 0);
    QString GenerateImgName(const QString&, const QString&);
    void ReplaceStateImgDir();
    QString ParseAltDir(const QString&, const QString&);
    void ReplaceAltImgDir();
    void SetThemeID(int);

    QString GenerateIDQuery();

    void QueryAddTable();
    void QueryAddID();
    void QueryAddState();
    void QueryAddAlts();
    void QueryAddAns();
    void QueryAddTheme();

    void ClearStateBuffer();
    void ClearAltBuffers();
    void ClearQuery();

//    Buffers members:
    QSet<QString> state_img_buffer;
    QVector<QString> alt_img_buffer;
    QVector<QString> alt_text_buffer;
    QString state_text_buffer;

//    Question`s members:
    int current_max_ID;
    QString dir_prefix;
    int theme_index;
    QString theme_table;
    QString answer;
    QString main_query;

//    ID`s selector:
    std::unique_ptr<qdb::QueryParser> id_parser;

};

}

#endif // QUESTIONMAKER_H
