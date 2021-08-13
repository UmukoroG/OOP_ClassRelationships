#include <iostream>
using namespace std;
#include "creditCard.h"

creditCard::creditCard(int CreditLimit, int CreditBal, int CreditScore, Card A_card):
creditLimit(CreditLimit),creditBal(CreditBal),creditScore(CreditScore),a_card(A_card)
{}

int creditCard::setCreditLimit(int CreditLimit){
    creditLimit=CreditLimit;
}

int creditCard::getCreditLimit(){
    return creditLimit;
}

int creditCard::setCreditBal(int CreditBal){
    creditBal=CreditBal;
}

int creditCard::getCreditBal(){
    return creditBal;
}

int creditCard::setCreditScore(int CreditScore){
    creditScore=CreditScore;
}

int creditCard::getCreditScore(){
    return creditScore;
}

void creditCard::displayCreditCard(){
    if(creditLimit!=0 && creditBal !=0 && creditScore!=0){
        a_card.DisplayCard();
        cout<<"Credit limit: $"<<creditLimit<<endl
        <<"Credit balance: $"<<creditBal<<endl
        <<"Credit Score: "<<creditScore<<endl;
    }
}