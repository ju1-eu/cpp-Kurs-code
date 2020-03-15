///*
//	Rekursive Funktion
//	ggT
//
//	ggT von 14 und 24 bestimmen.
//	14 hat die Teilermenge {1,2,7,14}; 
//	24 hat die Teilermenge{1,2,3,4,6,8,12,24}. 
//	Was ist die größte Zahl, die in beiden Teilermengen enthalten ist? 
//	2 ist der ggT von 14 und 24.
//
//	Euklidischer Algorithmus: 
//	www: de.wikipedia.org/wiki/Euklidischer_Algorithmus
//	EUCLID(a,b)
//	  wenn b = 0 dann
//		Ergebnis = a
//	  sonst
//		Ergebnis = EUCLID(b, Divisionsrest(a durch b)) /*Modulo */ 
//*/
//#include <iostream>
//
//int ggt(int a, int b);
//int ggt_recursiv(int a, int b);
//
//
//int main(){
//	int z1 = 24;
//	int z2 = 14;
//
//	int z3 = ggt(z1, z2);
//	int z4 = ggt_recursiv(z1, z2);
//
//	std::cout << "ggt(" << z1 << "," << z2 << ") = " << z3 << std::endl;
//	std::cout << "ggt_recursiv(" << z1 << "," << z2 << ") = " << z4 << std::endl;
//
//	getchar();
//	return 0;
//}
//
//int ggt(int a, int b){
//	/*b ist groesser */ 
//	if (a < b){
//		for (int i = a; a >= 1; i--){
//			/* ggT */
//			if (a % i == 0 && b % i == 0)
//				return i;
//		}
//	}
//	/*a ist groesser */ 
//	else{
//		for (int i = b; i >= 1; i--){
//			/*ggT */ 
//			if (a % i == 0 && b % i == 0)
//				return i;
//		}
//	}
//}
//
//int ggt_recursiv(int a, int b){
//	if (b == 0)
//		return a;
//	else
//		return ggt_recursiv(b, a % b);
//}
