#include "studentCard.h"
#include <iostream>
using namespace std;


studentCard::studentCard(int StudentId,int AcctBal, Card A_card):
studentId(StudentId),acctBal(AcctBal),a_card(A_card){}

int studentCard::setStudentId(int StudentId){
    studentId=StudentId;
}

int studentCard::getStudentId(){
    return studentId;
}

void studentCard::displayStudentCard(){
    if(studentId!=0){// account balance can be negative
        a_card.DisplayCard();
        cout<<"Student id: "<<studentId<<endl
        <<"Student Account balance: $"<<acctBal<<endl;
    }
}