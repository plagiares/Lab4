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
TYPE getElement(int i);

private:
vector<TYPE> tableElements;
int capacite = 100;


};



#include "dynamicArray.hpp"