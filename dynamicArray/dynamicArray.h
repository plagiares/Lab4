#pragma once
#include <string>
#include <iostream>

using namespace std;

template <class TYPE>
class DynamicArray
{
public:
DynamicArray();
int getCapacite();

private:

int capacite = 100;

};



#include "dynamicArray.hpp"