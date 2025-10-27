/*Escreva um algoritmo que recebe duas matrizes de inteiros 5 x 5, não nulos, de um arquivo entrada.txt e imprima quais os valores em comum estão presentes nas duas matrizes, sem repetir. Se não houver valores em comum imprima NENHUM*/

#include <iostream>
#include <fstream>

using namespace std;

bool repete(int*V,int TAM, int p){
	
	for( int i =0 ; i < TAM; i ++){
		if(V[i]==p) return true;
	}
	return false;
	
}

int main(){
	const int TAM=5;
	int A[TAM][TAM],B[TAM][TAM];
	int C[TAM*TAM];
	
	ifstream entrada;
	entrada.open("entrada.txt");
	
	for(int x=0; x< TAM; x++){
		for(int y=0; y< TAM; y++){
	    entrada>> A[x][y];
	}
}
	
	for(int x=0; x< TAM; x++){
		for(int y=0; y< TAM; y++){
	    entrada>> B[x][y];
	}
}
	int c=0;
	for(int x=0; x< TAM; x++){
		for(int y=0; y< TAM; y++){
			for(int i=0; i< TAM; i++){
				for(int j=0; j< TAM; j++){
				if( A[x][y] == B[i][j] and 
				!repete(C,c,A[x][y])){
						C[c]= A[x][y];
						c++;
				}
			 }
		  }
		}
	  }
	 
	  if(c==0){
		  cout << "NENHUM";
		  return 0;
	  }
	  for( int i=0 ; i <c ; i++) cout << C[i] << " ";
	  
	  entrada.close();
	  return 0;
  
}
