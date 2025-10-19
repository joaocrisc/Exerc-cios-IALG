/*Dada uma string s, e dois caracteres c1 e c2, faça um programa que exibe a string que resulta caso todas as ocorrências de c1 sejam substituídas por c2 em s. Por exemplo, caso a string de entrada seja "minha mensagem secreta" e c1 seja "a" e c2 seja "b", o resultado seria "minhb mensbgem secretb".*/

#include <iostream>
 #include <cstring>

using namespace std;

int main(){
	
	string s;
	getline(cin,s);
	int TAM= s.size();
	char a, b;
	cin >> a >> b;
	
	for(int i=0 ; i < TAM ; i++){
		
		if( s[i] == a)
		s[i]=b;
		
		cout << s[i];
	}
	

	return 0;
}
