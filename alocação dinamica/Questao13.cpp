/*Você tem um conjunto de números reais e deseja filtrar alguns deles. Mais precisamente, você deseja descartar aqueles que estiverem fora de um determinado limite com relação à média. Faça um programa que leia a quantidade inicial de números a serem lidos e aloque, dinamicamente, um vetor com essa capacidade. Em seguida, leia a diferença máxima tolerada em relação à média dos valores lidos e imprima na saída padrão apenas aqueles valores que estejam dentro do limite estabelecido (para mais ou para menos), ou seja, valores entre a média mais a diferença máxima e a média menos a diferença máxima.*/


#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int tam;
	int limite;
	
	cin >> tam;
	
	float* A= new float [tam];
	
	for( int i=0; i < tam ; i++){
		cin >> A[i];
	}
	
	cin >> limite;
	float soma=0;
	
	for( int i=0; i < tam ; i++){
		soma += A[i];
	}
	
	float media;
	
	media = soma/float (tam);
	cout << media << endl;
	
	for( int i=0; i < tam ; i++){
		
		cout << abs(A[i] -media) << " ";
	}
	cout << endl;
	
	for( int i=0; i < tam ; i++){
		if(abs(A[i] -media) <= limite)
		
		cout << A[i] << " ";
	}
	
	
	
	
	delete [] A;
	return 0;
	}
