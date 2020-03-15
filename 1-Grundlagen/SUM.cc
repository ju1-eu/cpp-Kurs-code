///*
//	Rekursive Funktion & Gauß-Summenformel
//	Summe from 1 to n
//	S1 = 1
//	S2 = S1 + 2
//	S3 = S2 + 3
//	S4 = S3 + 4
//	S5 = S4 + 5
//	S5 = 1 + 2 + 3 + 4 + 5 = 15
//*/
//#include <iostream>
//
//unsigned int sum(unsigned int n);
//unsigned int sum_gauss(unsigned int n);
//
//int main(){
//	unsigned int n = 10; 
//
//	unsigned int n_sum = sum(n);
//	unsigned int n_sum_gauss = sum_gauss(n);
//
//	std::cout << "Sum from 1 to " << n << " = " << n_sum << std::endl;
//	std::cout << "Gauss Sum from 1 to " << n << " = " << n_sum_gauss << std::endl;
//
//	getchar();
//	return 0;
//}
//
//unsigned int sum(unsigned int n){
//	if (n > 1)
//		return sum(n - 1) + n;
//	else
//		return 1;
//}
//
//unsigned int sum_gauss(unsigned int n){
//	return (n * (n + 1)) / 2;
//}