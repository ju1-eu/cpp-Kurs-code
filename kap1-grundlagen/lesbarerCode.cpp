///*
//	Namen
//
//	- Großschreibung oder Kleinschreibung zu Beginn
//	- durchgehend Großbuchstaben
//	- Unterstriche _ oder "CamelCase" bei Wortgrenzen
//	- Beginn oder Ende mit einem Unterstrich _
//	- Variablen klein beginnend und weiter in CamelCase: meinWert , btnCancelNow
//	- Klassenvariablen ebenso, aber mit Unterstrich endend: data_ , fileWrite_
//	- Funktionen und Methoden schreiben wie Variablen getData() , assertEqual() oder statt
//	CamelCase Unterstriche get_data() , assert_equal() , manchmal snake_case genannt
//	- einfache Typen klein mit Unterstrich, aber mit Endung: money_type
//	- Klassen groß beginnend in CamelCase: Data , VideoImage
//	- Konstanten und Enum-Elemente in Großbuchstaben mit Unterstrichen: RED , BIG_ALERT
//	- Makros werden eigentlich überall nur in Großbuchstaben mit Unterstrichen ge-
//	schrieben
//*/
//#include <iostream>
//int func(int arg1, int arg2) {
//	if (arg1 > arg2) {
//		return arg1 - arg2;
//	}
//	else {
//		return arg2 - arg1;
//	}
//}
//int main(int argc, const char* argv[]) {
//	for (int x = 0; x < 10; ++x) {
//		for (int y = 0; y < 10; ++y) {
//			std::cout << func(x, y) << " ";
//		}
//		std::cout << "\n";
//	}
//	getchar();
//}