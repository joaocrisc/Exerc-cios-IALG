/*Desenvolva um programa que leia do dispositivo de entrada padrão um número inteiro N, uma lista contendo N palavras quaisquer e, por fim, uma letra isolada. Seu programa deverá exibir no dispositivo de saída padrão a quantidade total de palavras da lista de entrada que não apresentam nenhuma ocorrência da letra fornecida isoladamente.*/


#include <iostream>
 #include <cstring>
 
using namespace std;

int main (){
	int N;
	char a;
	
	cin >> N;
	
	string* lista= new string[N];

	for(int i=0 ; i < N; i++){
		cin >> lista[i];
	}
	
	cin >> a;
	int cont=0;
	int m=0;

	
	for(int i=0 ; i < N; i++){
		int TAM= lista[i].size();
		for( int x=0 ; x < TAM; x++){
			
			if( lista[i][x] != a){
				cont++;
			}
			
		}
		if( cont== TAM){
		m++;
	}
		cont=0;
	}
	
	
	cout << m;
	

	delete [] lista;
	return 0;
}
