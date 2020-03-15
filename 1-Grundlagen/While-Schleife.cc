//#include <iostream>
//
//using std::cout;
//using std::endl;
//using std::cin;
//
//int main()
//{
//	int zahl = -1;
//
//	// Inkrement: ++    Dekrement: --
//	// i++ <=> i = i + 1 <=> i += 1
//	// i-- <=> i = i - 1 <=> i -= 1
//	// i = i + 2 <=> i += 2
//
//	// solange keine 4 und eine gerade, durch 2 teilbare zahl
//	while (zahl != 4 && zahl % 2 != 0)
//	{
//		cout << endl << "Gebe eine Zahl ein (1-10)" << endl;
//		cin >> zahl;
//
//		// HP: 4, TP: Durch 2 Teilbar und nicht 4
//		if (zahl < 1 || zahl > 10)
//		{
//			cout << endl << "Falsche Eingabe" << endl;
//		}
//		// Wenn Zahl ist gleich 4, dann gewonnen
//		// HP
//		else if (zahl == 4)
//		{
//			cout << endl << "Gewonnen! HP" << endl;
//		}
//		// TP
//		else if (zahl % 2 == 0)
//		{
//			cout << endl << "Gewonnen! TP" << endl;
//		}
//		// Ansonsten verloren
//		// Niete
//		else
//		{
//			cout << endl << "Verloren!" << endl;
//		}
//	}
//
//	cin.get();
//	getchar();
//	return 0;
//}