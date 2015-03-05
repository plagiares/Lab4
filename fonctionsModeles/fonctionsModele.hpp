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

//template<>
//string TrouverMax(const string &_table[], const int _taille)
//{
//	string valeurMaximum = "";
//	for (int i = 0; i < _taille; i++)
//	{
//		if (_table[i].compare(valeurMaximum) > 0)
//			valeurMaximum = _table[i];
//	}
//	return valeurMaximum;
//}
//stringA.compare(stringB)>0