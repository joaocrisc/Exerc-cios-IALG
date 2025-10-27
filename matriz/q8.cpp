/*Crie um programa que receba uma matriz 6 x 6 formada por números inteiros, rotacione os seus valores em 180º, em sentido horário, e imprima a matriz resultante.*/

#include <iostream>

using namespace std;

int main () {

	const int TAM=6;
	 int A[TAM][TAM];
	 int B[TAM][TAM];
	 int c=TAM-1;
	 
	 for( int x=0; x < TAM; x ++){
		for( int y=0; y < TAM; y ++){
			cin >> A[x][y];
			B[c-x][c-y]=A[x][y];
		}
	}
	
	
	 for( int x=0; x < TAM; x ++){
		for( int y=0; y < TAM; y ++){
			cout << B[x][y]<< " ";
		}
		cout << endl;
	}
	
	
	 

	return 0;
}
