/*Elabore um programa que receba as vendas de cinco produtos em três lojas diferentes e em dois meses consecutivos. O programa deverá receber os dados de cada mês a partir do arquivo "vendas.txt". O conteúdo do arquivo são os dados de duas matrizes 5 x 3. O bimestre é uma matriz 5 x 3, resultado da soma das duas matrizes anteriores. O programa deverá ainda calcular e armazenar em um arquivo "saida.txt":

as vendas de cada produto em cada loja no bimestre;
a maior venda do bimestre;
o total vendido por loja no bimestre;
o total vendido de cada produto no bimestre.*/
#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main (){
	int A[5][3],B[5][3], S[5][3];
	
	ifstream entrada;
	entrada.open("vendas.txt");
	ofstream saida;
	saida.open("saida.txt");
	
	for(int x=0; x< 5; x++){
		for( int y=0; y <3 ; y++){
		entrada >> A[x][y];
		}
	}  
	
	for(int x=0; x< 5; x++){
		for( int y=0; y <3 ; y++){
		entrada >> B[x][y];
		}
	}  
	
	for(int x=0; x< 5; x++){
	  for( int y=0; y <3 ; y++){
	  
		S[x][y] += A[x][y] + B[x][y];
		saida << S[x][y]<< " ";
		}
	}
	
	int maior= S[0][0];
	
	for(int x=0; x< 5; x++){
	  for( int y=0; y <3 ; y++){
		if( S[x][y] >= maior) S[x][y]=maior;
		}
	}
	saida << endl <<maior<< endl;
	
	int coluna=0;

for(int y=0; y< 3; y++){
	  for( int x=0; x <5 ; x++){
		coluna+= S[x][y];
		}
		saida << coluna << " ";
		coluna=0;
	}
	
	for(int x=0; x< 5; x++){
	  for( int y=0; y <3 ; y++){
		coluna+= S[x][y];
		}
		saida << coluna << " ";
		coluna=0;
	}
	
	
		return 0;
}
