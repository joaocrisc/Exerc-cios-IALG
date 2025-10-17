/*Desenvolva um programa que leia do dispositivo de entrada padrão uma palavra P de cinco letras, um número inteiro N e uma lista contendo N palavras de cinco letras. Seu programa deverá exibir no dispositivo de saída padrão a palavra contida na lista de entrada que tem o maior número de letras iguais às da palavra P na mesma posição. Obs.: considere que todas as palavras terão letras maiúsculas e que não possuem acentos.

Caso ocorram empates entre múltiplas palavras de acordo com o critério citado, seu programa deverá exibir apenas a última palavra da lista de entrada que apresentou a referida quantidade letras em comum na mesma posição.

Entradas:

Uma palavra P de cinco letras.
Um número inteiro N, indicando a quantidade de palavras a serem fornecidas.
Uma lista de N palavras (strings) de cinco letras. Cada palavra será fornecida em uma linha diferente do dispositivo de entrada padrão.
Saídas:

A palavra presente na lista de entrada que possui o maior número de letras iguais às da palavra P na mesma posição.*/

#include <iostream>
 #include <cstring>
 
using namespace std;

int main (){
	string P;
	
	cin >> P;
	
	int N;
	
	cin >> N;
	const int TAM=5;
	
	string* V = new string [N];
    int* C = new int [N];
	int cont=0;
	
	
	for(int i=0 ; i < N; i++){
	  cin >> V[i];
	}
	
	for(int i=0 ; i < N ; i++){
	  for(int x=0 ; x < TAM ; x++){
		
		if(V[i][x] == P[x]){
		cont++;
	}
		
	  }
	  C[i]=cont;
	  cont=0;
	}
	
	int maior = C[0];
    int m=0;
	for(int i=1 ; i < N ; i++){
	  if (C[i] >=  maior){
		  
			  maior= C[i];
              m=i;
		  
	  }
	}
	
	
	cout << V[m];
	
	
	delete[] V;
	delete [] C;
	return 0;
	}
