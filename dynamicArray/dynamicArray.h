#pragma once
#include <string>
#include <iostream>
#include <vector>

using namespace std;

template <class TYPE>
class DynamicArray
{
public:
DynamicArray();
int getCapacite();
TYPE getElement(const int i);
void setElement(const int index_element, const TYPE nouvelle_valeur_element);

private:
vector<TYPE> tableElements;
int capacite = 100;
};



#include "dynamicArray.hpp"