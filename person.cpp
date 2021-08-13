#include "person.h"
#include <iostream>
#include <string>
using namespace std;

Person::Person(string Name,int Age, long Phone, string Occupation,string Dob, creditCard A_creditCard):
name(Name),age(Age),phone(Phone),occupation(Occupation),dob(Dob),a_creditCard (A_creditCard)
{
}

string Person::setOccupation(string Occupation){
    occupation=Occupation;
}

string Person::getOccupation(){
    return occupation;
}

string Person::setDob(string Dob){
    dob=Dob;
}

string Person::getDob(){
    return dob;
}

string Person::setName(string Name){
    name=Name;
}

string Person::getName(){
    return name;
}

int Person::setAge(int Age){
    age=Age;
}

int Person::getAge(){
    return age;
}

int Person::setPhone(long Phone){
    phone=Phone;
}

int Person::getPhone(){
    return phone;
}

void Person::displayPerson(){
    if(name!="" && age!=-1 && occupation!="" && phone!=0 ){
        cout<<"Name: "<<name<<endl
        <<"Age: "<<age<<endl
        <<"Occupation: "<<occupation<<endl
        <<"DOB: "<<dob<<endl
        <<"Phone no: "<<phone<<endl;
        a_creditCard.displayCreditCard();
    }

}