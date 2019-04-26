//
// Created by ana on 12/04/19.
//

#ifndef LISTA4_ENGENHARIA_SUBJECT_H
#define LISTA4_ENGENHARIA_SUBJECT_H

#include <iostream>
#include <cstring>

using namespace std;

class Subject{
private:
    string name;
    string teacher;
    int code;
protected:
    Subject( void ){};
    Subject(string name, string teacher, int code);
    //Subject:: &operator +(const Student stu);
    void set_name(string name_set);
    void set_teacher(string name_set);
    void set_code(int code_set);
    string get_name();
    string get_teacher();
    int get_code();
};

#endif //LISTA4_ENGENHARIA_SUBJECT_H
