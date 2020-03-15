#include <iostream>

#include "Spiel-Fkt.h"

using std::cout;
using std::endl;
using std::cin;

bool spiel(int zahl)
{
	while (zahl != 4 && zahl % 2 != 0)
	{
		cout << endl << "Gebe eine Zahl ein (1-10)" << endl;
		cin >> zahl;

		/*HP: 4, TP: Durch 2 Teilbar und nicht 4 */ 
		if (zahl < 1 || zahl > 10)
		{
			cout << endl << "Falsche Eingabe" << endl;
		}
		/*Wenn Zahl ist gleich 4, dann gewonnen */ 
		/*HP */ 
		else if (zahl == 4)
		{
			cout << endl << "Gewonnen! HP" << endl;
		}
		/*TP */ 
		else if (zahl % 2 == 0)
		{
			cout << endl << "Gewonnen! TP" << endl;
		}
		/*Ansonsten verloren */ 
		/*Niete */ 
		else
		{
			cout << endl << "Verloren!" << endl;
		}
	}

	return true;
}