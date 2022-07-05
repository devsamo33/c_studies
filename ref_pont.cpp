#include <iostream>
void TrocaNumeros(int* Num1, int* Num2);

int main() {
	setlocale(LC_ALL, "portuguese");
	int Numero1, Numero2;
	
		std::cout << "\nDigite o primeiro Número: ";
			std::cin >> Numero1;
		std::cout << "\nDigite o Segundo Número: ";
			std::cin >> Numero2;
		std::cout << "\nValores antes da troca";
		std::cout << "\nNumero1 = " << Numero1;
		std::cout << "\nNumero2 = " << Numero2;

	TrocaNumeros(&Numero1, &Numero2);

	
		
		std::cout << "\nValores depois da troca";
		std::cout << "\nNumero1 = " << Numero1;
		std::cout << "\nNumero2 = " << Numero2 << "\n";
		std::cout << "\nEndereço de memória de Numero1 = " << &Numero1;
		std::cout << "\nEndereço de memória de Numero2 = " << &Numero2 << "\n";

	
	system("PAUSE");
	return 0;
}
void TrocaNumeros(int* Num1, int* Num2){
	
	std::cout << "\nEndereço de memória de Num1 da função  = " << &Num1;
	std::cout << "\nEndereço de memória de Num2 da função  = " << &Num2;
	std::cout << "\nEndereço de memória contido dentro de Num1  = " << Num1;
	std::cout << "\nEndereço de memória contido dentro de Num2  = " << Num2;
	
	int Temp{ *Num1 };
	
	*Num1 = *Num2;
	*Num2 = Temp;
}
