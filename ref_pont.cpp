#include <iostream>
void TrocaNumeros(int* Num1, int* Num2);

int main() {
	setlocale(LC_ALL, "portuguese");
	int Numero1, Numero2;
	
		std::cout << "\nDigite o primeiro N�mero: ";
			std::cin >> Numero1;
		std::cout << "\nDigite o Segundo N�mero: ";
			std::cin >> Numero2;
		std::cout << "\nValores antes da troca";
		std::cout << "\nNumero1 = " << Numero1;
		std::cout << "\nNumero2 = " << Numero2;

	TrocaNumeros(&Numero1, &Numero2);

	
		
		std::cout << "\nValores depois da troca";
		std::cout << "\nNumero1 = " << Numero1;
		std::cout << "\nNumero2 = " << Numero2 << "\n";
		std::cout << "\nEndere�o de mem�ria de Numero1 = " << &Numero1;
		std::cout << "\nEndere�o de mem�ria de Numero2 = " << &Numero2 << "\n";

	
	system("PAUSE");
	return 0;
}
void TrocaNumeros(int* Num1, int* Num2){
	
	std::cout << "\nEndere�o de mem�ria de Num1 da fun��o  = " << &Num1;
	std::cout << "\nEndere�o de mem�ria de Num2 da fun��o  = " << &Num2;
	std::cout << "\nEndere�o de mem�ria contido dentro de Num1  = " << Num1;
	std::cout << "\nEndere�o de mem�ria contido dentro de Num2  = " << Num2;
	
	int Temp{ *Num1 };
	
	*Num1 = *Num2;
	*Num2 = Temp;
}
