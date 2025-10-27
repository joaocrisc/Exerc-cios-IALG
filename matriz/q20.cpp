/*Crie um subprograma recursivo que receba um número inteiro N e imprima todos os números naturais de 0 até N em ordem crescente.*/
#include <iostream>

using namespace std;


int F(int a, int x){

		if( x== a){
			cout << a << " ";
			 return 0;
		 }	
		else if ( x< a){
			cout << x << " ";
			return F(a,x+1);
		}
		return 0;
}
int main(){
	int x;
	cin >> x;
	F(x,0);

	return 0; 
}
