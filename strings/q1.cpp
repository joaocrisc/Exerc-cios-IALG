 /*Faça um programa que lê da entrada padrão uma matriz quadrada de caracteres, o programa deverá identificar, caso exista, uma submatriz 2x2 que contenha apenas vogais maiúsculas e deverá escrevê-la na saída padrão, caso não exista tal submatriz o programa deverá escrever "submatriz nao encontrada" (tudo minusculo e sem acento).

Considere, para fins de eficiência, que cada matriz contém no máximo uma submatriz 2x2 de vogais.*/
 
 
 #include <iostream>
 #include <cstring>
 
using namespace std;

  bool vogal( char p){
	
	if( p== 'A' or p=='E' or p =='I' or p=='O' or p=='U')
	return 1;
	
	else
	return 0;
	
}
int main() {
	int TAM;
	cin >> TAM;
	cin.ignore();
	string* V= new string [TAM];
	bool achou = false;
	char c;
	
	for(int i=0 ; i < TAM ; i++){
		
		for(int j=0;j < TAM ; j++){
			
			cin >> c;
			V[i] += c;
		}
		
	}
	
	for(int x=0; x< TAM-1; x ++){
		for(int y=0; y < TAM-1 ; y ++){
		if( vogal(V[x][y]) and   vogal(V[x][y+1]) and  vogal(V[x+1][y]) and  vogal(V[x+1][y+1]) ){
			
		cout << V[x][y] << " " << V[x][y+1] << endl;
		cout << V[x+1][y] << " " << V[x+1][y+1];
		achou=true;
		x=y=TAM;
		
		}
		
		}
	}
	
	if(!achou)
	cout << "submatriz nao encontrada" ;
	
	delete []V;
	return 0;
}
