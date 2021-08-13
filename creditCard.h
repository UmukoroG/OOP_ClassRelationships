#ifndef CREDITCARD_H
#define CREDITCARD_H
using namespace std;
#include <string>
#include "card.h"


class creditCard{
    private:
        Card a_card;
        int creditLimit;
        int creditBal;
        int creditScore;
    public:
        creditCard();
        creditCard(int creditLimit,int creditBal, int creditScore, Card a_card);
        int getCreditLimit();
        int setCreditLimit(int creditLimit);
        int getCreditBal();
        int setCreditBal(int creditBal);
        int getCreditScore();
        int setCreditScore(int creditScore);
        void displayCreditCard();
};

#endif