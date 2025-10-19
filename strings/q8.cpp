/*Faça um programa que insere uma sequência de caracteres dentro de outra.

Entradas:

o texto onde será inserido uma sequencia de caracteres (não haverão espaços ou outros caracteres brancos),
a posição onde será feita a inserção (inserir na posição p significa que, depois da inserção, o texto inserido será encontrado a partir da posição p; a posição do primeiro caractere é zero),
o texto a ser inserido (sem brancos).
Saída: o resultado da inserção.

O programa não precisa ser capaz de lidar com textos que, após a inserção, tenham mais de 200 caracteres.

É permitido usar funções de biblioteca para determinar o tamanho das strings lidas.*/


#include <iostream>
 #include <cstring>
 
using namespace std;

int main (){
	string p1="",p2,p3="",p;
	
	cin >> p;
	
	int N;
	
	cin >> N;
	cin>> p2;
	
	int TAM= p.size();
	
	for( int i =0 ; i< N ; i++){
		p1 += p[i];
	}
	for( int i =N ; i< TAM ; i++){
		p3 += p[i];
	}
	
	cout<< p1+p2+p3;

	return 0;
}
