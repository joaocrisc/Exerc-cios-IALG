/*Desenvolva um programa que receba uma matriz 6x6 de caracteres (uma letra em cada posição da matriz). O usuário digitará m sequências de caracteres (m informado na entrada) de tamanho 3. O programa deve procurar a ocorrência de cada sequência na matriz, imprimindo as coordenadas da primeiro letra ou -1 -1 se a sequência não estiver na matriz. A procura deve ser feita na horizontal (tanto da da esquerda para direita como da direita para a esquerda) e na vertical (de cima para baixo e de baixo para cima). Repare, portanto, que a sequência pode estar tanto em ordem direta como invertida. Considere que, se a sequência estiver na matriz, ela se encontra em um único local.*/
#include <iostream>
#include <string>
const int TAM=6;

using namespace std;

int main(){
	char A[TAM][TAM];
	
	
	for(int x=0; x< TAM; x++){
		for(int y=0; y <TAM; y++){
			cin>> A[x][y];
		}
	}
	int m;
	cin>>m;
	const int tamb=3;
	char B[m][tamb];
	
	for(int x=0; x< m; x++){
		for(int y=0; y <tamb; y++){
			cin>> B[x][y];
		}
	}
	
	int px,py;
	
	for(int j=0; j < m; j++){
		px=py=-1;
	for(int x=0; x< TAM; x++){
		for(int y=0; y <TAM; y++){
			
			//horizontal direita
			if( y+2<TAM and A[x][y]==B[j][0] and A[x][y+1]==B[j][1] and A[x][y+2]==B[j][2]) { 
				px=x;
				py=y;
			}
			//horizontal esquerda
			else if( y-2>=0 and A[x][y]==B[j][0] and A[x][y-1]==B[j][1] and A[x][y-2]==B[j][2]) { 
				px=x;
				py=y;
			}
			//vertical cima
			else if( x+2<TAM and A[x][y]==B[j][0] and A[x+1][y]==B[j][1] and A[x+2][y]==B[j][2]) { 
				px=x;
				py=y;
			}
			//vertical baixo
			else if( x-2>=0 and A[x][y]==B[j][0] and A[x-1][y]==B[j][1] and A[x-2][y]==B[j][2]) { 
				px=x;
				py=y;
			}
			
		
	}
}
		cout << px << " " << py << endl;
}

	
	

	return 0;
}
