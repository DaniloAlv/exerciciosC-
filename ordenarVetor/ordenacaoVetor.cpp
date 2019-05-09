#include <iostream>
#include <stdlib.h>

using namespace std;

int vetor[] = { 1, 1, 3, 10, 7, 6, 6, 2, 3, 4 };

void OrdenaVetor(){

		int i, aux;
		
		for (int j = 0; j < 9; j++){
			for (i = 0; i < 9; i++){
			if (vetor[i] > vetor[i+1]){
				aux = vetor[i];
				vetor[i] = vetor[i+1];
				vetor[i+1] = aux;
			}
			}
		}
		for (int k = 0; k < 10; k++){
			printf("%d ", vetor[k]);
		} 
	}

void ContabilizaElementos(){
	
	int i, count;
	for (i = 0; i < 10; i++){
			if (vetor[i+1] == vetor[i])
				count++;		
	}
	printf("%d ", count);
}

int main(){
	
	int i;

	cout << "Vetor Inicial: " << endl;
		for (i = 0; i < 10; i++){
		vetor[i+1];
		cout << vetor[i] << " ";
	}
	
	cout << "\nVetor ordenado crescentemente: " << endl;
	OrdenaVetor();
	cout << endl;
	ContabilizaElementos();
	
}
