#ifndef PERSON_H
#define PERSON_H
using namespace std;
#include <string>
#include "creditCard.h"

class Person{
    private:
        string name;
        int age;
        long phone;
        string occupation;
        string dob;
        creditCard a_creditCard;
    public:
        Person();
        //A person can have a credit card 
        Person(string name,int age,long phone,string occupation,string dob, creditCard a_creditCard);
        string getOccupation();
        string setOccupation(string occupation);
        string getDob();
        string setDob(string dob);
        int getAge();
        int setAge(int age);
        int getPhone();
        int setPhone(long phone);
        string getName();
        string setName(string name);
        void displayPerson();
        
};

#endif
