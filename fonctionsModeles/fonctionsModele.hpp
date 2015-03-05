#include <string>
#include <iostream>

using namespace std;

template<typename TYPE>
TYPE TrouverMax(const TYPE _table[], const int _taille)
{
		TYPE valeurMaximum = TYPE();
		for (int i = 0; i < _taille; i++)
		{
			if (valeurMaximum < _table[i])
				valeurMaximum = _table[i];
		}
		return valeurMaximum;
}

template<typename TYPE>
TYPE CalculerSomme(const TYPE _table[], const int _taille)
{
	TYPE sommateur = TYPE();
	for (int i = 0; i < _taille; i++)
	{
		sommateur += _table[i];
	}
	return sommateur;
}

template<typename TYPE>
unsigned int CompterElement(const TYPE _element, const TYPE _table[], const int _taille)
{
	unsigned int compteur = 0;
	for (int i = 0; i < _taille; i++)
	{
		if (_table[i] == _element)
		compteur++;
	}
	return compteur;
}