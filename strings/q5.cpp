/*Parênteses são importantes na matemática por representar uma prioridade na solução de uma expressão. Sabendo disso faça um programa que leia uma expressão algébrica e então determine se os parênteses foram corretamente abertos e fechados.
Se todos os parênteses estiverem corretos o programa deverá escrever ''parenteses corretos'', caso contrário deverá escrever ''parenteses incorretos''.


OBS.: DESCONSIDEREI ERROS DE DIGITAÇÃO DO ESTILO "((" OU "))". Para considerar esses casos, basta contabilizarmos quantos parênteses de abertura e fechamento existem na expressão e verificar se são iguais.

*/

#include <iostream>
 #include <cstring>
 
using namespace std;

int main (){
	
	string C;
	cin >> C;
	
	int TAM = C.size();
	bool correto= false;
	int cont=0;
	
	for( int i = 0 ; i < TAM; i ++){
	
	if( C[i] == ')' or C[i] =='(')
	cont ++;
	
	}
	if( cont%2 ==0 )
	correto= true;
	else
	correto=false;
	
	
	if(correto)
	cout << "parenteses corretos";
	else
	cout << "parenteses incorretos";



	return 0;
}
