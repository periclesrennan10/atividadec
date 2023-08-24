#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int tamanhoVetor = 10;
	int vetor[tamanhoVetor];
	
	cout << "Digite " << tamanhoVetor << " numeros inteiros:" << endl;
	for (int i = 0; i < tamanhoVetor; i++){
		cin >> vetor[i];
	}
	
	cout << "Vetor na ordem inversa: ";
	for (int i = tamanhoVetor - 1; i >= 0; i--){
		cout << vetor[i] << " ";
	}
	
	return 0;
}
