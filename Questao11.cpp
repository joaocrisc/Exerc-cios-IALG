/*Um palíndromo é um texto que pode ser lido igualmente da esquerda para a direita e da direita para a esquerda. Por exemplo, sem considerar sinais gráficos, acentos e letras maiúsculas e minúsculas: "socorram me subi no onibus em marrocos". Outros exemplos de palíndromos ocorrem com números (por exemplo: 12321) ou com datas (por exemplo: 20-02-2002).

Faça um programa que leia vários caracteres, armazenando-os num vetor alocado dinamicamente. Depois determine se esse vetor é um palíndromo ou não. Em caso positivo, escreva "sim", em caso negativo, escreva "nao". Além do resultado final, o programa deve, enquanto as comparações forem verdadeiras, escrever as posições e os elementos comparados.*/

#include <iostream>
#include <cmath>

using namespace std;

int main (){
	int TAM;
	cin >> TAM;
	char* A= new char[TAM];
	
	for( int i=0 ; i < TAM ; i++){
	cin >> A[i];
	}
	
	int inicio=0;
	int fim= TAM-1;
	bool a =true;

	while ( a and inicio < ceil(TAM/2)){
		if (A[inicio] != A[fim]){
			cout << endl << "nao" ;
			 a=false;
			 }else{
				 cout <<inicio << " " << A[inicio] << " " << fim << " " << A[fim] << " ";
			 }
		
		inicio++;
		fim --;
	}

	delete [] A;
    
	if(a){
		cout << endl << "sim";
	}


 return 0;
}
