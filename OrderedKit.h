//
// Created by ana on 12/04/19.
//

#ifndef LISTA4_ENGENHARIA_ORDEREDKIT_H
#define LISTA4_ENGENHARIA_ORDEREDKIT_H


#include <iostream>
#include <map>

#include "Subject.h"
#include "Student.h"

using namespace std;

template <class kit>

class OrderedKit{
private:

    float result_average;
    float result_sum;
    int number_elements;
public:
    typedef map <float, float, int> school_kit; //usar map
  //  typedef typename <kit>::iterator iterator;
    OrderedKit()
    {
        result_average = 0;
        result_sum = 0;
        number_elements = 0;
    }
    void insert(kit object);
    //usar get para fazer as operações, não precisa sobrecarregar o operador
    float sum();
    int count_elements();//contar os elementos do container
    float average();
    //~virtual OrderedKit::OrderedKit(); fazer o destrutor
};

#endif //LISTA4_ENGENHARIA_ORDEREDKIT_H
