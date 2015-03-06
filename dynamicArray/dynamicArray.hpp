#include <string>
#include <iostream>

using namespace std;

template <class TYPE>
DynamicArray<TYPE>::DynamicArray()
{

}

template <class TYPE>
int DynamicArray<TYPE>::getCapacite()
{
	return capacite;
}