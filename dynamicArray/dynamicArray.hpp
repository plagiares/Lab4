#include <string>
#include <iostream>

using namespace std;

template <class TYPE>
DynamicArray<TYPE>::DynamicArray()
{
	for (int i = 0; i < capacite; i++)
	{
		tableElements.push_back(TYPE());
	}
}

template <class TYPE>
int DynamicArray<TYPE>::getCapacite()
{
	return capacite;
}

template <class TYPE>
TYPE DynamicArray<TYPE>::getElement(int i)
{
	return tableElements[i];
}