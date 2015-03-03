//template<typename TYPE>
//const TYPE TrouverMax(const TYPE _tableau, const TYPE  _capacite)
//{
//	TYPE valeurMaximum;
//	for (int i = 0; i < _capacite; i++)
//	{
//		if (valeurMaximum < _tableau[i])
//			valeurMaximum = _tableau[i];
//	}
//	return valeurMaximum;
//}

template<typename TYPE>
TYPE TrouverMax(const TYPE _table[], const int _taille)
{
		TYPE valeurMaximum = 0;
		for (int i = 0; i < _taille; i++)
		{
			if (valeurMaximum < _table[i])
				valeurMaximum = _table[i];
		}
		return valeurMaximum;
}