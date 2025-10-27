/*Na teoria de sistemas define-se como elemento minimax de uma matriz o menor elemento da linha onde se encontra o maior elemento da matriz. Escreva um programa que receba uma matriz quadrada de inteiros, 10x10, e retorne seu elemento minimax, seguido de sua posição. Em caso de números iguais considere o que aparece primeiro.*/
#include <iostream>

using namespace std;

int main(){
	int V[10][10];
	
	for(int x=0; x<10; x++){
		for(int y=0; y <10; y++){
				cin>> V[x][y];
		}
	}
	
	int maior = V[0][0];
	int xm,ym;
	
	for(int x=0; x<10; x++){
		for(int y=0; y <10; y++){
				if(V[x][y] > maior) {
					maior = V[x][y];
					xm=x;
				}
		}
	}
	
	int menor=V[xm][0];
	ym=0;
	for(int y=1; y <10; y++){
		
		if(V[xm][y] < menor){
			ym=y;
			menor=V[xm][y];
		}
	}
	
	cout << menor << endl << xm << " " << ym;

	return 0;
}
