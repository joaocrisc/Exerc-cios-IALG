/*Faça um programa que receba do dispositivo de entrada padrão uma matriz de números reais com 5 linhas e 6 colunas. Além da matriz, seu programa deverá receber um número inteiro I, indicando uma linha válida da matriz, e um segundo número inteiro J, indicando uma coluna válida da matriz. Seu programa deverá exibir no dispositivo de saída padrão o somatório de todos os valores armazenados na linha I da matriz e o produtório de todos os valores armazenados na coluna J.*/

#include <iostream>

using namespace std;

int main(){
	double A[5][6];
	int i,j;
	
	for(int x=0; x<5; x++){
		for(int y=0 ; y <6; y++){
		cin >> A[x][y];	
			
		}
	}
	
	cin >> i>> j;
	
	double soma=0;
	
	for( int y=0; y < 6; y++){
		soma +=A[i][y];
	}
	cout<< soma<<endl;
	
	soma=1;
	for( int x=0; x < 5; x++){
		soma *=A[x][j];
	}
	cout<< soma;

	return 0; 
}
