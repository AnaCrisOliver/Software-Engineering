#include <iostream>
#include <cstring>

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
	int age, float grade)
	{
	 this.registration = registration;
	 this.name = name;
	 this.sex = sex;
	 this.age = age;
	 this.grade = grade;
	}
	friend float &operator +()
	{
		this.
	}

	void set_registration(int registration_set)
	{
		this.registration = registration_set;
	}
	void set_name(string name_set)
	{
		this.name = name_set;
	}
	void set_sex(string sex_set)
	{
		this.sex = sex_set;
	}
	void set_age(int age_set)
	{
		this.age = age_set;
	}
	int get_registration()
	{
		return this.registration;
	}
	string get_name()
	{
		return this.name;
	}
	string get_sex()
	{
		return this.sex;
	}
	int get_age()
	{
		return this.age;
	}
};