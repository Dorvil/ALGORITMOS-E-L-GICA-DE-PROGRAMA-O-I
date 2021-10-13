#include<iostream>
#include<clocale>


int main() {

setlocale(LC_ALL, "Portuguese");
	int numero;
	
	std:: cin >> numero;
	
	if (numero % 2== 0 ){
		std:: cout << "Par";
	} else {
		std::cout << "Impar";
	}
	
	return 0:
}