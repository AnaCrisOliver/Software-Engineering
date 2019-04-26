//
// Created by ana on 12/04/19.
//

#ifndef LISTA4_ENGENHARIA_STUDENT_H
#define LISTA4_ENGENHARIA_STUDENT_H

#include <iostream>
#include <string>

using namespace std;

class Student{
private:
    int registration;
    string name;
    string sex;
    int age;
    float grade;

public:
    Student(int registration, string name, string sex,
            int age, float grade);
 // friend float &operator +(const Student stu);
     friend ostream& operator << ( ostream&, const Student s)
     {
        cout<< "\nName: "<< s.name << "\nRegistration: "<< s.registration << "\nSex: "<< s.sex
        << "\nAge: "<< s.age << "\nGrade: " << s.grade << endl;
     }
    void set_registration(int registration_set);
    void set_name(string name_set);
    void set_sex(string sex_set);
    void set_age(int age_set);
    int get_registration();
    string get_name();
    string get_sex();
    int get_age();
};

#endif //LISTA4_ENGENHARIA_STUDENT_H
