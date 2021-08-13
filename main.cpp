#include <iostream>
using namespace std;
#include "card.h"
#include "person.h"
#include "student.h"
#include "studentCard.h"
#include "creditCard.h"


int main(){
    cout<<"make file is active and running\n";
    cout<<"\n";

    //parent card for student card and credit card
    Card C1("Dave Petrovish","student card", 1212, 1231211);
    Card C2("Dave Petrovish","credit card", 1212, 1231223);

    //A credit card
    creditCard cc1(4000,2100,720,C2);
    // cc1.displayCreditCard();

    //A person CAN have a credit card
    Person person1("Dave Petrovish", 21,4315234349,"Student","10/02/2001",cc1);
    Person person2("Tyler Yaweh", 19,4312390219,"Student","01/06/2000",cc1);
    cout<<endl;

    cout<<"A PERSON: \n";
    person2.displayPerson();


    //A student card
    // cout<<" A STUDENT CARD: \n";
    studentCard studentCard1(7864146,4000,C1);
    // studentCard1.displayStudentCard();
    // cout<<"\n";

    cout<<endl;    

    // A student can have a student card and a credit card
    cout<<"A STUDENT:\n";
    Student student2("History","UoM",3.0,person1,studentCard1, cc1);
    student2.displayStudent();
    cout<<"\n";

}