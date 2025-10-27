/*Faça um programa que lê da entrada padrão uma matriz quadrada com dimensão 6 de caracteres, o programa deverá identificar, caso exista, uma submatriz 3x3 que contenha apenas vogais maiúsculas e deverá escrevê-la na saída padrão, caso não exista tal submatriz o programa deverá escrever "submatriz nao encontrada" (tudo minusculo e sem acento).

Considere, para fins de eficiência, que cada matriz contém no máximo uma submatriz 3x3 de vogais.*/


#include <iostream>

using namespace std;


bool vogal(char a){
	
	if( a== 'A' or a== 'E' or
	a== 'I' or a== 'O' or
	a== 'U') return true;
	
	return false;
}
bool todavogal( char a,char A[6][6],int x,int y){
	
	for (int i = 0; i < 3; i++) {
					for (int j = 0; j < 3; j++) {
						if(!vogal( A[x + i][y + j]))
						return false;
				}
				}
	
	return true;
	
}


int main(){
	const int TAM=6;
	char A[TAM][TAM];
	
	for(int x=0; x<TAM; x++){
		for(int y=0; y<TAM; y++){
			cin >> A[x][y];
		}
	}
	
	//bool a= true;
	
	for(int x=0; x<TAM-2  ;x++){
		for(int y=0; y<TAM-2 ; y++){
			
		if( todavogal(A[x][y],A,x,y) ){
			
				for (int i = 0; i < 3; i++) {
					for (int j = 0; j < 3; j++) {
						cout << A[x + i][y + j] << " ";
					}
						cout << endl;
				}
			
			
				
			return 0;
		}
			
		}
	}
	
	 cout << "submatriz nao encontrada";
	

	return 0;
}
