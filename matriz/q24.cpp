/*Crie um programa que receba uma matriz 6 x 6 formada por números inteiros, rotacione os seus valores em 180º, em sentido anti-horário, e imprima a matriz resultante.*/
#include <iostream>
const int TAM=6;

using namespace std;

int main(){
	int A[TAM][TAM];
	int B[TAM][TAM];
	
	for(int x=0; x< TAM; x++){
		for(int y=0; y <TAM; y++){
			cin>> A[x][y];
			B[TAM-1-x][TAM-1-y]= A[x][y];
		}
	}
	
	for(int x=0; x< TAM; x++){
		for(int y=0; y <TAM; y++){
			cout << B[x][y]<< " ";
		}
		cout << endl;
	}

	return 0;
}
