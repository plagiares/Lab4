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
	if (_capacite == 0) throw invalid_argument("la capacite ne peut pas etre 0");
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
	if (index_element > capacite)
		aggrandirCapacite(index_element);
		
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
		capacite = nouvelle_capacite;
	}
	else
	{
		capacite = nouvelle_capacite;
	}
	
}

template <class TYPE>

void DynamicArray<TYPE>::aggrandirCapacite(const int nouvelle_capacite)
{
	for (int i = capacite; i < nouvelle_capacite; i++)
	tableElements.push_back(TYPE());

	capacite = nouvelle_capacite;
}

