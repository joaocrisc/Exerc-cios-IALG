/*Crie um programa que receba uma matriz 6 x 6 formada por números inteiros, rotacione seus valores em 90º, em sentido horário, e imprima a matriz resultante.*/
#include <iostream>

using namespace std;

int main(){
	
	int V[6][6];
	int C[6][6];
	
	for( int x=0; x< 6; x++){
		for(int y=0; y < 6 ; y++){
		cin >> V[x][y];
		}
	}
	int a=5,b=0;
	
	for( int x=0; x<6; x++){
		for(int y=0; y < 6; y ++){
        
		C[b][a]	= V[x][y] ;	
            b++;        		  
		}
		a--;
		b=0;
		
	}
	
	for( int x=0; x< 6; x++){
		for(int y=0; y < 6 ; y++){
		cout << C[x][y] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
