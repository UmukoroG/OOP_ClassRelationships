#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"
#include "studentCard.h"
#include "creditCard.h"
using namespace std;
#include <string>



class Student{
    private:
        string department;
        string school;
        double gpa;
        Person a_person;
        studentCard a_studentCard;
        creditCard a_creditCard;
    public:
        Student();
        //A student can have a credit card as well as the student card
        Student(string department, string school, double gpa,Person a_person,studentCard a_studentCard, creditCard a_creditCard);

        void studentCourses();
        string getDepartment();
        string setDepartment(string department);
        string getSchool();
        string setSchool(string school);
        double getGpa();
        double setGpa(double gpa);
        void displayStudent();
};
#endif