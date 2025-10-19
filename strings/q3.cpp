/*Desenvolva um programa que leia do dispositivo de entrada padrão um número inteiro N, uma lista contendo N palavras quaisquer e, por fim, uma letra isolada. Seu programa deverá exibir no dispositivo de saída padrão a palavra contida na lista de entrada que contém a maior quantidade de ocorrências da letra fornecida isoladamente na entrada de dados.

Caso ocorra embates entre múltiplas palavras com a maior quantidade de ocorrências da letra indicada, seu programa deverá exibir apenas a última palavra da lista de entrada que apresentou a referida quantidade máxima de ocorrências daquela letra.*/

#include <iostream>
 #include <cstring>
 
using namespace std;

int main (){
	int N;
	char a;
	
	cin >> N;
	
	string* lista= new string[N];
	int* C= new int[N];
	
	for(int i=0 ; i < N; i++){
		cin >> lista[i];
	}
	
	cin >> a;
	int cont=0;
	
	
	for(int i=0 ; i < N; i++){
		int TAM= lista[i].size();
		for( int x=0 ; x < TAM; x++){
			
			if( lista[i][x]== a){
				cont++;
			}
			
		}
		C[i] = cont;
		cont=0;
	}
	
	int maior = C[0];
	int m=0;
	
	for(int i=1 ; i < N; i++){
		if( C[i] >= maior){
		maior = C[i];
		m=i;
		}
	
	}
	
	cout << lista [m];
	

	delete [] lista;
	delete [] C;
	return 0;
}
