#include <iostream>
#include <stdlib.h>

#define LEN_X 10
#define LEFT  'a'
#define RIGHT 'd'

using std::cout;
using std::cin;
using std::endl;

int main()
{
	bool repeat = true;// Beenden

	while (true)
	{
		// LEN_X = 10
		// Wir haben 10 Spielfelder insgesamt
		// Pos 0: Start, Pos 9: Ziel
		unsigned int player_pos = 0;
		unsigned int start = 0;
		unsigned int ziel = LEN_X - 1;

		char move;
		bool finished = false;

		while (!finished)
		{
			cout << "Bewegung auf dem Spielfeld: (rechts = d; links = a)" << endl;

			// Gebe den GameState aus (gebe das Spielbrett aus)
			for (int i = 0; i < LEN_X; i++)
			{
				if (i != player_pos && i != ziel && i != start)
					cout << '.';
				else if (i == player_pos)
					cout << 'P';
				else if (i == ziel || i == start)
					cout << '|';
			}
			
			cin >> move; // Bewegung auf dem Spielfeld: (rechts = d; links = a)
			system("CLS");

			// Fuehre den eingegebenen move aus
			if (move == LEFT)
			{
				if (player_pos > 0)
				{
					player_pos--;
					cout << "You moved left!" << endl;
				}
				else
				{
					cout << "Spielgrenze erreicht!" << endl;
				}

			}
			else if (move == RIGHT)
			{
				// player_pos <= 8
				if (player_pos < LEN_X - 1)
				{
					player_pos++;
					cout << "You moved right!" << endl;
				}
				else
				{
					cout << "Spielgrenze erreicht!" << endl;
				}
			}
			else
			{
				cout << "unbekannter move!" << endl;
			}

			// Ueberpreufe ob das Spiel gewonnen ist
			if (player_pos == ziel)
			{
				cout << "You won the game!" << endl;
				finished = true;
			}
			else
			{
				finished = false;
			}
		}

		cout << "Play again? (0 = No, 1 = Yes)" << endl;
		cin >> repeat;
		// Beenden
		if (repeat == 0)
			break;

		system("CLS");// Win
	}

	getchar();
	//return 0;
}