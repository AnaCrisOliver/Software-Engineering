#include <iostream>
#include <vector>
#include "Subject.h"
#include "Student.h"

using namespace std;

template <typename kit>

class UnorderedKit{
private:
	vector<kit> school_kit;
public:

	typedef typename vector<kit>::iterator iterator;
	void insert(kit object)
	{
		school_kit.insert(object);
	}
	~virtual UnorderedKit();
}