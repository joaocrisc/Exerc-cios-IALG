 /*A cifra de César é uma forma de criptografia antiga, onde cada letra de uma determinada mensagem é trocada pela letra que a sucede em um determinado número de posições. A chave da cifra de césar é dada justamente pelo número de posições utilizadas. Por exemplo, utilizando 5 como chave, a palavra AJUDA seria transformada em FOZIF. Escreva uma função que leia um arquivo texto e escreva a cifra de César correspondente em um outro arquivo texto.

A letra V é trocada por A, W por B, X por C, Y por D e Z por E.*/
 
 #include <iostream>
 #include <cstring>
 #include <fstream>

using namespace std;

int excecao(char a, string& f, int x){
	
	if( a== 'V')
	f[x]= 'A';
	else if( a== 'W')
	f[x]= 'B';
	else if( a== 'X')
	f[x]= 'C';
	else if( a== 'Y')
	f[x]= 'D';
	else if( a== 'Z')
	f[x]= 'E';
	else if (a== ' ')
	f[x] = ' ';
	else return 0;
	
	
	return 1;
}

int main (){
	string f1,nome;
	cin >> nome;
	
	ifstream entrada;
	entrada.open(nome);
	
	ofstream saida;
	saida.open("cifrado.txt");
	
	while( getline(entrada, f1)){
		int TAM= f1.size();
       for(int x=0; x <TAM; x++){
	
	if(!excecao(f1[x],f1,x)){
	
	f1[x] = f1[x]+5;
	}
	
	saida << f1[x];
}
    saida << endl;


}
	entrada.close();
	saida.close();
	
	return 0;
}
