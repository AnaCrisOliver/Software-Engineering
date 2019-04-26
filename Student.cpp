//
// Created by ana on 12/04/19.
//

#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(int registration, string name, string sex,
                 int age, float grade)
{
    this->registration = registration;
    this->name = name;
    this->sex = sex;
    this->age = age;
    this->grade = grade;
}
/*friend Student: &operator +(const Student stu)
{
    return this.grade + stu.grade;
}*/

void Student::set_registration(int registration_set)
{
    this->registration = registration_set;
}
void Student::set_name(string name_set)
{
    this->name = name_set;
}
void Student::set_sex(string sex_set)
{
    this->sex = sex_set;
}
void Student::set_age(int age_set)
{
    this->age = age_set;
}
int Student::get_registration()
{
    return this->registration;
}
string Student::get_name()
{
    return this->name;
}
string Student::get_sex()
{
    return this->sex;
}
int Student::get_age()
{
    return this->age;
}
