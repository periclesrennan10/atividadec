#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int tamanhoVetor = 5;
	int vetor[tamanhoVetor];
	
	cout << "Digite 5 numeros: " << endl;
	
	for (int i = 0; i < tamanhoVetor; i++){
		cin >> vetor[i];
	}
	int soma = 0;
	for (int i = 0; i < tamanhoVetor; i++){
		soma += vetor[i];
	}
	int subtracao = vetor[0];
	for (int i = 1; i < tamanhoVetor; i++){
		subtracao -= vetor[i];
	}
	double divisao = vetor[0];
	for (int i = 1; i < tamanhoVetor; i++){
		divisao /= vetor[i];
	}
	
	cout << "A soma dos numeros: " << soma << endl;
	cout << "A subtracao dos numeros: " << subtracao << endl;
	cout << "A divisao dos numeros: " << divisao << endl;
	
	return 0;
}


/*
case 8: {
				
				int num1 = 0;
				int num2 = 1;
				int num3;
				int contador;
				
				
				cout << "Digite a quantidade de termos: ";
				cin >> contador;
				
				for (int i = 1; i <= contador; i++){
					cout << num1 << endl;
					num3 = num1 + num2;
					num1 = num2;
					num2 = num3;
				}
			}
			*/
