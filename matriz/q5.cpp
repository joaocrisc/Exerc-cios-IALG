/*Um caçador de Pokémons criou um aparelho para coletar múltiplos Pokémons simultaneamente, entretanto o aparelho tem duas restrições: Só pode ser disparado uma vez e só consegue coletar Pokémons a uma determinada distância (nem menos, nem mais). O caçador tem à sua disposição um mapa no formato de uma matriz. A matriz é sempre de um tamanho 7 por 7 e o centro da matriz possui sempre o número 9 representando o caçador. As outras posições da matriz possuem números de 0 a 8. Os números representam a importância do Pokémon. Faça um algoritmo que informada a distância do centro da matriz e calcule a soma das importâncias dos Pokémons encontrados.

Os elementos a serem somados são definidos pela distância a partir do centro. No exemplo, esses elementos estão destacados em vermelho. A distância será sempre um número válido, ou seja, que represente um quadrado dentro do tamanho da matriz definida.*/

#include <iostream>

using namespace std;

int main(){
	int V[7][7];
	
	int N;
	cin >> N;
	
	int fim= 3+ N,inicio=3-N;
	
	for( int x=0; x< 7; x++){
		for( int y=0; y < 7; y++){
			cin >> V[x][y];
		}
	}
	
	int soma=0;
	
	for(int y=inicio; y<=fim; y++){
		soma+= V[y][3+N] +V[y][3-N];
	}	
	
	for(int y=inicio+1; y<fim; y++){
		soma+= V[3+N][y] +V[3-N][y];
	}		
	
	
	cout << soma;
	

	return 0;
}
