/*Os elementos de uma matriz quadrada de tamanho 4 representam os custos de transporte de uma cidade entre cidades identificados por índices entre 0 e 3. Na matriz, a linha representa a cidade de partida e a coluna representa a cidade de chegada. Dado um itinerário com diversas cidades, escreva um programa que calcule e exiba o custo total de transporte do itinerário.*/

#include <iostream>
#include <cstring>

using namespace std;

int main (){

	double V[4][4];
	
	for( int x=0 ; x < 4 ; x ++){
		for( int y=0; y < 4; y ++){
			cin>> V[x][y];
		}
	}
	
	int N;
	cin >> N;
	
	int* C= new int [N];
	
	for( int i=0; i < N ; i ++){
		cin >> C[i];
	}
	
	double soma;
	
	for( int i =0 ; i <N-1 ; i ++){
		soma+= V[C[i]][C[i+1]];
	}
	
	cout << soma;
    
    delete[] C; 
	return 0;
}
