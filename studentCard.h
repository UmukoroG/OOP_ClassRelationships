#ifndef STUDENTCARD_H
#define STUDENTCARD_H
using namespace std;
#include <string>
#include "card.h"


class studentCard{
    private:
        Card a_card;
        int acctBal;
        int studentId;
    public:
        studentCard();
        studentCard(int StudentId,int AcctBal, Card A_card);
        int getStudentId();
        int setStudentId(int studentId);
        void displayStudentCard();


};

#endif