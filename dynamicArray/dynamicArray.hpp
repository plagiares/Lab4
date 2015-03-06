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
DynamicArray<TYPE>::DynamicArray(const int _capacite)
{
	capacite = _capacite;
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
void DynamicArray<TYPE>::setElement(const int index_element, const TYPE nouvelle_valeur_element)
{
	tableElements.insert(tableElements.begin() + index_element, nouvelle_valeur_element);
}

template <class TYPE>
TYPE DynamicArray<TYPE>::getElement(const int i)
{
	return tableElements[i];
}

template <class TYPE>
void DynamicArray<TYPE>::setCapacite(const int nouvelle_capacite)
{
	if (nouvelle_capacite > capacite)
	{
		for (int i = capacite; i < nouvelle_capacite; i++)
			tableElements.push_back(TYPE());
	}
	else
	{
		capacite = nouvelle_capacite;
	}
	
}
