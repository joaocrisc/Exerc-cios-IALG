/*Faça um programa que dada uma string de entrada, informa qual o caractere que mais se repete.*/

#include <iostream>
 #include <cstring>

using namespace std;

int main (){
	
	string C;
	cin>> C;
	int TAM= C.size();
	
	char* V= new char [TAM];
	int* Kont= new int [TAM];
	
	int cont,k,v;
	
	cont=1;
	k=v=0;
	
	bool a= false;

	
	for(int i =0 ; i < TAM ; i++){
		a=false;	
		for(int x=0; x < v ; x++){
			if( C[i] == V[x])
			a=true;
		}
		if(!a){
			for ( int y =0 ; y < TAM ; y ++){
				if( y != i){
				if ( C[i] ==C[y]){
				cont++;
			}
		}
		}
		    V[v]= C[i];
		    Kont[k]= cont;
			v++;
			k++;
			cont=1;	
		}
	
	}
	
	int maior = Kont[0];
	int m=0;
	
	for(int i =1 ; i < k ; i++){
		if( Kont[i] > maior){
			maior= Kont[i];
			m=i;
			
		}
	}
	
	cout << V [m];
	
	

	delete [] V;
	delete [] Kont;
	return 0;
}
