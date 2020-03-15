///*
//	Fakultät: 3! = 1*2*3
//
//	Eingabe Fakultät: Reicht der Datentyp aus?
//	unsigned long long = 8 byte = 64 bit = 0 bis 1.84e+019 
//
//	Grenze !
//	20! = 2.432.902.008.176.640.000 (Win-Rechner)
//	20! = 2.432.902.008.176.640.000 (Programm)
//
//	Fehler
//	21! = 14.197.454.024.290.336.768 (Programm)
//	21! = 51.090.942.171.709.440.000 (Win-Rechner)
//*/
//#include <iostream>
//
//unsigned long long fac(unsigned long long n);
//
//int main(){
//	unsigned long long n = 20;/*Eingabe Fakultät: Reicht der Datentyp aus? */ 
//	unsigned long long n_fac = fac(n);
//
//	std::cout << n << "! = " << n_fac << std::endl;
//
//	getchar();
//	return 0;
//}
//
//unsigned long long fac(unsigned long long n){
//	if (n > 1)
//		return n * fac(n - 1);
//	else
//		return 1;
//}