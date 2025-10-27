/*Faça um programa que calcula o logaritmo na base 3 de uma potência de 3. Para tanto, divisões sucessivas deverão ser utilizadas. O programa deve conter um subprograma recursivo que recebe um número natural e retorna um número natural para fazer o cálculo do logaritmo.

O subprograma que faz o cálculo do logaritmo não pode conter nenhuma operação de leitura nem de escrita. Não é permitido o uso da biblioteca cmath.*/

#include <iostream>

using namespace std;

int log(int N,int a){
	int c=1;
	
	if(N==1) return 0;
	else{
	 return c+=log(N/a,a);
	}
	
}

int main(){
	int N;
	cin >> N;
	cout << log(N,3);


	return 0;
}
