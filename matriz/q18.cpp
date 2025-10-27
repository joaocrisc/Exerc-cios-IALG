/* sequência de Ricci é uma sequência bastante semelhante à de Fibonacci, diferindo desta apenas pelo fato que os dois primeiros termos da sequência ( F(0) e F(1) ) devem ser definidos pelo usuário.

Sabendo-se que a sequência de Fibonacci é definida por:

F(0) = 0
F(1) = 1
F(n) = F(n - 1) + F(n - 2) , n > 2
Crie um programa que imprima os n primeiros termos da sequência de Ricci, utilizando um subprograma recursivo que retorna o n-ésimo termo da referida série.*/

#include <iostream>

using namespace std;

int r(int a, int b, int p){
	
	
	if(p==1) return a;
	else if(p==2) return b;
	else{
		return r(a,b,p-1) + r(a,b,p-2);
	}
	
}
int main(){
	int n,a,b;
	cin >> a >> b>> n;
	for( int i =1; i <=n ; i++) 
	cout << r(a,b,i) << " ";
	return 0;
}
