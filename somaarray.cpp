#include <iostream>

//soma de numeros com array
/*int main() {
double nums[10];
double soma{0.0};


for(int i=0; i<10; i++){
	std::cout<<"Digte o numero "<<(i+1)<<": ";
		std::cin>> nums[i];
	soma += nums[i];
	 system("CLS");
}	
	std::cout<<"soma dos numeros: "<< soma<<"\n";
	system("PAUSE");
	return 0;
}
*/

//maior e menor numero do array
int main(){
int min, max;
int	numElement; 
int numeros[20];

		std::cout<<"Digite numero de elementos: "<<"\n";
			std::cin>>numElement;
	
	for(int i=0; i<numElement; i++){
		std::cout<<"Digte o numero: "<<(i+1)<<"\n";
			std::cin>>numeros[i];	
	}
	
min = numeros[0];
max = numeros[0];
	
	if(numeros[i]>max){
		max = numeros[i];
	}else if(numeros[i]<min){
		min = numeros[i];
	}
		std::cout<<"Valores finais: "<<max<< ", "<<min;
		
	
	
	system("PAUSE");
	return 0;
}
