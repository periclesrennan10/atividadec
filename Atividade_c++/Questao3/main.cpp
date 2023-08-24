#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	const int tamanhoVetor = 10;
    char vetor[tamanhoVetor];
	
	cout << "Digite 10 caracteres: ";
	for (int i = 0; i < tamanhoVetor; i++){
		cin >> vetor[i];
	}
	
	int consoantes = 0;
    for (int i = 0; i < tamanhoVetor; ++i) {
        char caracter = vetor[i];
        if (caracter != 'a' && caracter != 'e' && caracter != 'i' && caracter != 'o' && caracter != 'u') {
            consoantes++;
        }
    }
	cout << "Voce digitou " << consoantes << " consoantes!" << endl;
	return 0;
}
