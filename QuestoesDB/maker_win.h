#ifndef QUESTOESDB_MAKERWIN_H
#define QUESTOESDB_MAKERWIN_H

#include <QMainWindow>
#include <memory>
#include <QMessageBox>

#include "question_maker.h"
#include "database_impl.h"
#include "custom_logger.h"

namespace Ui {
class MakerWin;
}


namespace qdb {

class MakerWin : public QMainWindow
{
    Q_OBJECT

public:

    explicit MakerWin(QWidget *parent = 0);
    ~MakerWin();

private slots:

    void on_upl_img_state_clicked();
    void on_parse_img_state_clicked();

    void on_alt_a_upl_clicked();
    void on_alt_b_upl_clicked();
    void on_alt_c_upl_clicked();
    void on_alt_d_upl_clicked();
    void on_alt_e_upl_clicked();

    void on_save_button_clicked();

private:

    QString GetImgPath();
    void UpdateAltImg(auto&, int);
    void InsertAllText();
    void SetTheme();
    void SetAnswer();
    void InsertQuestion();

    void InitInterface();
    void CleanAll();
    bool SureMsgBox();
    void closeEvent(QCloseEvent* );


    void SavedMsgBox();
    Ui::MakerWin *interface;
    std::unique_ptr<qdb::QuestionMaker> question_maker;
    std::unique_ptr<qdb::DatabaseImpl> database_impl;
};

}

#endif // MAKERWIN_H
