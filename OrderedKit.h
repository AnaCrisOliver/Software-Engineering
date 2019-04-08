#include <iostream>
#include <queue>

#include "Subject.h"
#include "Student.h"

using namespace std;

template <typename kit>

class OrderedKit{
private:
	priority_queue <kit> school_kit;
	float average;
	float sum;
public:
	typedef typename queue<kit>::iterator iterator;
	OrderedKit()
	{
		average = 0;
		sum = 0;
	}
	void insert(kit object)
	{
		school_kit.push(object);
	}
	kit sum()
	{
		kit result;

	}
	kit cont()
	{
		kit result;
		
	}
	kit average()
	{
		
		
	}
	~virtual OrderedKit();
}