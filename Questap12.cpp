/*Faça um programa que recebe dois vetores de caracteres de tamanhos m e n, respectivamente. Sabendo que os dois vetores nunca são vazios e já se encontram ordenados em ordem crescente, intercale-os em um novo vetor, de tamanho m+n, mantendo os dados ordenados. Obs 1: os dois vetores podem conter caracteres repetidos. Obs 2: os vetores devem ser alocados dinamicamente.*/

#include <iostream>
#include <cmath>

using namespace std;

char* ordenar ( char* C, int tam){
	
	char aux;
	
	for(int x=0 ; x < tam-1 ; x++){
		for(int y=x+1; y < tam; y++){
			if(C[y] <= C[x]){
				aux = C[x];
				C[x] = C[y];
				C[y] = aux;
			}
		}
	}
	return C;
}

int main (){
	int m;
	cin >> m;
	char* A = new char[m];
	
	int n;
	cin >> n;
	char* B = new char[n];
	
	char* C = new char[n+m];
	
	for(int i=0; i < m; i++){
		cin >> A[i];
	}
	
	for(int i=0; i < n; i++){
		cin >> B[i];
	}
	
	for(int x=0; x< m ; x++){
	C[x]= A[x];
	}
	int x=m;
	int cont=0;
	
	while( cont < n){
		C[x]= B[cont];
		cont++;
		x++;
	}
	
	C=ordenar ( C, (m+n));
	
		for(int x=0; x< (m + n); x++){
	 cout << C[x] << " ";
	}
	
	delete[] A;
	delete[] B;
	delete[] C;

	return 0;
}
