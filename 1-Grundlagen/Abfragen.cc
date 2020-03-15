///* 
//	Zahlenratespiel: 1-10
//	HP = Hauptpreis
//	TP = Trostpreis
//*/ 
//#include <iostream>
//
//using std::cout;
//using std::endl;
//using std::cin;
//
//int main()
//{
//	int zahl;
//	cout << endl << "Gebe eine Zahl ein (1-10)" << endl;
//	cin >> zahl;
//
//	/*HP: 4, TP: Durch 2 Teilbar und nicht 4 */ 
//	/*Ansonsten Nichts */ 
//
//	/*ODER: ||     UND: && */ 
//	/*Eingabekontrolle */ 
//	if (zahl < 1 || zahl > 10)
//	{
//		cout << endl << "Falsche Eingabe" << endl;
//	}
//	/*Wenn Zahl ist gleich 4, dann gewonnen */ 
//	/*HP */ 
//	else if (zahl == 4)
//	{
//		cout << endl << "Gewonnen! HP" << endl;
//	}
//	/*Zahlen 2,6,8,10 teilbar durch 2, ausser 4! */ 
//	/*TP */ 
//	else if (zahl % 2 == 0)
//	{
//		cout << endl << "Gewonnen! TP" << endl;
//	}
//	/*Ansonsten verloren */ 
//	/*Niete */ 
//	else
//	{
//		cout << endl << "Verloren!" << endl;
//	}
//
//	cin.get();
//	getchar();
//	return 0;
//}