//
// Created by ana on 12/04/19.
//

#include "Subject.h"

#include <iostream>
#include "Subject.h"

using namespace std;

Subject::Subject(string name, string teacher, int code)
{
    this->name = name;
    this->teacher = teacher;
    this->code = code;
}
/*friend Subject &operator +(const Student stu)
{
    return 0;
}*/
void Subject::set_name(string name_set)
{
    this->name = name_set;
}
void Subject::set_teacher(string name_set)
{
    this->teacher = name_set;
}
void Subject::set_code(int code_set)
{
    this->code = code_set;
}
string Subject::get_name()
{
    return this->name;
}
string Subject::get_teacher()
{
    return this->teacher;
}
int Subject::get_code()
{
    return this->code;
}