#include <iostream>
#include <cstring>

using namespace std;

class Subject{
private:
	string name;
	string teacher;
	int code;
protected:
	Subject(string name, string teacher, int code)
	{
		this.name = name;
		this.teacher = teacher;
		this.code = code;
	}
	void set_name(string name_set)
	{
		this.name = name_set;
	}
	void set_teacher(string name_set)
	{
		this.teacher = name_set;
	}
	void set_code(int code_set)
	{
		this.code = code_set;
	}
	string get_name()
	{
		return this.name;
	}
	string get_teacher()
	{
		return this.teacher;
	}
	int get_code()
	{
		return this.code;
	}
}