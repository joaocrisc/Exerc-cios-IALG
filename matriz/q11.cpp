/*Com o aumento do consumo de jogos multiplayer online, uma empresa decidiu que seria hora de renovar o famoso jogo da velha a fim de conseguir juntar mais de dois jogadores. Para isso, o tabuleiro agora possui a dimensão 5 (5 linhas e 5 colunas). Você ficou encarregado de validar o campeão ou verificar se deu empate (todas as casas do tabuleiro foram preenchidas e não houve vencedor).

Lembre-se que as regras para saber quem ganhou são as mesmas do jogo tradicional: completar uma linha, completar uma coluna ou completar alguma das duas diagonais.*/

#include <iostream>

using namespace std;

bool diagonal(char A[5][5], int TAM){
	bool a= true;
	int meio=2;
	
	for( int x=0; x < TAM-1; x++){
		
		if ( A[x][x] != A[x+1][x+1] and A[x][x]!='-'){
			a= false;
		}
	}
	if(a) cout << A[meio][meio];
	for( int x=0; x < TAM-1 ; x++){
		int N=TAM-1;
			if( A[x][N-x]== A[x+1][N-x-1] and A[x][N-x]!='-') a= true;
			else {
				a =false;
				return a;
			}
		
	}
	
	if(a) cout << A[meio][meio];
	return a;
}

bool horizontal(char A[][5], int TAM, int x){
	bool a=false;
	
		for(int y=0; y < TAM-1; y++){
			if( A[x][y]== A[x][y+1] and A[x][y]!='-') a= true;
			else {
				a =false;
				return a;
			}
		}

		if(a) cout << A[x][0];
		return a;
}

bool vertical (char A[][5], int TAM, int y){
	
	bool a=false;
	
		for(int x=0; x < TAM-1; x++){
			if( A[x][y]== A[x+1][y] and A[x][y]!='-') a= true;
			else {
				a =false;
				return a;
			}
		}

		if(a) cout << A[0][y];
		return a;
			
}

int main () {
	
	const int TAM= 5;
	char A[TAM][TAM];
	
	for( int x=0; x < TAM; x++){
		for(int y=0; y < TAM; y++){
			cin >> A[x][y];
		}
	}


	
	if( diagonal(A,TAM)) return 0;
	for(int y=0; y < TAM; y++){
		
		if( vertical(A,TAM,y) or horizontal(A,TAM,y)) return 0;
		}
		
		cout << "VELHA";
	
	
	

	return 0;
}
