#include <iostream>
#include "student.h"
using namespace std;


Student::Student(string Department, string School,double Gpa,Person A_person,studentCard A_studentCard,creditCard A_creditCard):
department(Department),school(School),gpa(Gpa),a_person(A_person),a_studentCard(A_studentCard),a_creditCard(A_creditCard)
{}

string Student::setDepartment(string Department){
    department=Department;
}

string Student::getDepartment(){
    return department;
}

string Student::setSchool(string School){
    school=School;
}

string Student::getSchool(){
    return school;
}

double Student::setGpa(double Gpa){
    gpa=Gpa;
}

double Student::getGpa(){
    return gpa;
}


void Student::displayStudent(){
    if(school!="" && department!="" && gpa!=0){
        a_person.displayPerson();
        a_studentCard.displayStudentCard();
        a_creditCard.displayCreditCard();
        cout<<"School: "<<school<<endl
        <<"Department: "<<department<<endl
        <<"GPA: "<<gpa<<endl;
    }
}