#pragma once

#include <string>
#include <iostream>

using namespace std;

template<typename TYPE>
TYPE TrouverMax(const TYPE _table[] ,const int _taille);

template<typename TYPE>
TYPE CalculerSomme(const TYPE _table[], const int _taille);

template<typename TYPE>
unsigned int CompterElement(const TYPE _element, const TYPE _table[], const int _taille);
#include "fonctionsModele.hpp"

