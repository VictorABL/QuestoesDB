#ifndef QUESTOESDB_STATISTIC_H
#define QUESTOESDB_STATISTIC_H

#include <QVector>

namespace qdb {

class Statistic

{

//    Statitics`s handle class, storing all the right and wrong questions to set up
//    a analisys of the user`s efficiency into answering. It`s used with the singleton
//    pattern to prevent the creation of more than just one instance. All of the data is
//    stored in static members.

public:

    Statistic(Statistic&) = delete;
    void operator=(Statistic&) = delete;

    ~Statistic();

private:

    Statistic();

    static int total_question_answered;
    static int total_right_answers;
    static int total_wrong_answers;

//    Static member to store the numbers of quetions answered per theme, the sequence is based
//    in a developer individual way.
    static QVector<int> answered_per_theme;

};

}
#endif // STATISTIC_H
