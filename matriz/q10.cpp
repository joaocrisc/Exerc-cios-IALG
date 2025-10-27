/*Crie um programa que receba uma matriz 6 x 6 formada por números inteiros, rotacione os seus valores em 90º, em sentido anti-horário, e imprima a matriz resultante.*/

#include <iostream>

using namespace std;

int main () {
	const int TAM=6;
	int A[TAM][TAM],C[TAM][TAM];
		
	for(int x=0 ; x < TAM ; x++){
		for(int y=0; y < TAM ; y++){
			cin>> A[x][y];
			C[TAM-1-y][x]= A[x][y];
		}
	}
	
	for(int x=0 ; x < TAM ; x++){
		for(int y=0; y < TAM ; y++){
			cout << C[x][y]<< " ";
		}
		cout << endl;
	}
	
	
	return 0;
}
