/*Considere uma matriz 7x7 de números inteiros. Faça um programa para calcular a soma dos elementos que se encontram no triângulo inferior da matriz, limitados pelas diagonais principal e secundária. Faça também a soma dos elementos fora do triângulo. No final exiba o resultado das duas somas. No exemplo abaixo, os elementos que formam o triângulo estão em vermelho.*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){
	const int TAM=7;
	int A[TAM][TAM];
	int total=0;
	
	for(int x=0; x< TAM; x++){
		for(int y=0; y< TAM; y++){
	    cin>> A[x][y];
	    total+=A[x][y];
	}
}
	int soma=A[3][3];
	int x=TAM-1;
	int a=0;
	
	for( int y=a; y < TAM-a; y++) soma+=A[x][y];
	x--;
	a++;
	for( int y=a; y < TAM-a; y++) soma+=A[x][y];
	x--;
	a++;
	for( int y=a; y < TAM-a; y++) soma+=A[x][y];
	
	cout << soma << " " << total-soma;
	return 0;
	}
