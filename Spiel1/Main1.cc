///*
//Spielfeld
//*/
//#include <iostream>
//
//#define LEN_X 10 // Spielfeldlänge
//
//using std::cout;
//using std::cin;
//using std::endl;
//
//int main()
//{
//	// LEN_X = 10
//	// Wir haben 10 Spielfelder insgesamt
//	// Pos 0: Start, Pos 9: Ziel
//	unsigned int player_pos = 0;// Spieler links
//	unsigned int start = 0;
//	unsigned int ziel = LEN_X - 1;
//
//	for (int i = 0; i < LEN_X; i++)
//	{
//		if (i != player_pos && i != ziel && i != start)
//			cout << '.';//normales Spielfeld
//		else if (i == player_pos)
//			cout << 'P';//Spieler
//		else if (i == ziel || i == start)
//			cout << '|';// Start u. Zielpos.
//	}
//	
//
//	getchar();
//	return 0;
//}