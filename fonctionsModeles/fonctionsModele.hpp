
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