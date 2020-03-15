///*
//  Rekursive Funktion
//	Fakultät: 3! = 1*2*3
//
//	Eingabe Fakultät: Reicht der Datentyp aus?
//	unsigned int = 4 Byte = 32 bit = 0 bis 4.294.967.296
//
//	Grenze !
//	12! =   479.001.600 (Win-Rechner)
//	12! =   479.001.600 (Programm)
//
//	Programm Fehler
//	13! = 6.227.020.800 (Win-Rechner)
//	13! = 1.932.053.504 (Programm)
//*/
//
//#include <iostream>
//
//unsigned int fac(unsigned int n);
//
//int main(){
//	unsigned int n = 13;// Eingabe Fakultät: Reicht der Datentyp aus?
//	unsigned int n_fac = fac(n);
//
//	std::cout << n << "! = " << n_fac << std::endl;
//
//	getchar();
//	return 0;
//}
//
//unsigned int fac(unsigned int n){
//	if (n > 1)
//		return n * fac(n - 1);
//	else
//		return 1;
//}