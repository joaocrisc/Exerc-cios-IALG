/*Escreva um programa que leia duas cadeias de caracteres e altere a primeira cadeia para retirar todos os caracteres que estão também na segunda cadeia. As duas cadeias de entrada devem ser declaradas como vetores de char alocados dinamicamente.

No final, a primeira cadeia de caracteres resultante deve ser copiada para um vertor de caracteres alocado dinamicamente com o tamanho exato. Todas alocações de vetores do programa devem ser dinâmicas.

Entradas:

Numero de elementos do primeiro vetor
Elementos do primeiro vetor
Numero de elementos do segundo vetor
Elementos do segundo vetor
Saídas:

Vetor resultante com os caracteres do primeiro vetor que não se encontram no segundo.*/

#include <iostream>
#include <cstring>

using namespace std;

 string * redimensionar( string* C, int& tamc){
 
	 tamc++;
	string* V = new string [tamc];
	if( C != nullptr){
	for (int i = 0; i < tamc-1 ; i++) {
    V[i] = C[i];
}
}
	delete [] C;
	return V;
	
}

int main (){
	
	int TAM;
	cin>> TAM;
	 string* A= new string [TAM];
	
	for ( int i=0 ; i < TAM ; i++){
		cin >> A[i];
	}
	int TAM2;
	cin>> TAM2;
	 string* B= new  string [TAM2];
	
	for ( int i=0 ; i < TAM2 ; i++){
		cin >> B[i];
	}
	
	bool a = false;
	int c=0;
	int tamc=0;
	string* C= nullptr;
	
	
	
	
	for(int x=0; x < TAM ; x++){
		for(int y=0; y < TAM2 ; y++){
			if(A[x] == B[y]){
				a=true;
			}
			
		}
		
		if(!a){
		 C = redimensionar(C,tamc);
		 C[c]= A[x];
		 c++;
			
		}
		a=false;
	}
	
	for(int i=0 ; i < c ; i++){
		cout << C[i] << " ";
	}
	
	delete [] C;
	return 0;
}
