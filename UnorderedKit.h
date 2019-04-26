//
// Created by ana on 12/04/19.
//

#ifndef LISTA4_ENGENHARIA_UNORDEREDKIT_H
#define LISTA4_ENGENHARIA_UNORDEREDKIT_H

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
    UnorderedKit(){}
    typedef typename vector<kit>::iterator iterator;
    void insert(kit object);
//    ~virtual UnorderedKit();
};

#endif //LISTA4_ENGENHARIA_UNORDEREDKIT_H
