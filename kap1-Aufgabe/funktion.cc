// Includes und using Befehle
#include <iostream>
#include "funktion.h"

using std::cout;
using std::endl;
using std::cin;

// Definition der Funktion
void  mod_cross_sum(int max_i, int max_j)
{
	// Summe von i + j gerade oder ungerade?
	// Verschachtelte for schleife
	int summe = 0;
	for (int i = 0; i < max_i; i++) {
		for (int j = 0; j < max_j; j++) {
			summe = i + j;
		}
	}
	if((summe % 2) == 0)
		cout << summe << " ist gerade." << endl;
	else
		cout << summe << " ist ungerade." << endl;
}