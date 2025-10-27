/*Faça um programa que usa busca binária recursiva para procurar números num vetor. O programa deve escrever todos os números que foram comparados ao número procurado, na ordem.

O programa deverá ler o vetor no qual a busca será realizada, este vetor já estará ordenado.*/

#include <iostream>

using namespace std;


int A(int* V, int inicio, int fim, int p){
		
		
		if(inicio> fim) return -1;
		int meio =( inicio+fim)/2;
		cout<< V[meio] << " ";
		
		
		 if( V[meio] ==p) return meio;
		else if( V[meio]<p) return A(V,meio+1, fim,p);
		else if(V[meio]>p) return A(V,inicio, meio-1,p);
		else return -1;
}
int main(){
	int N,b;
	cin >> N;
	int* V= new int[N];
	for(int i=0; i < N; i++) cin >> V[i];
	cin >> b;
	A(V,0,N-1,b); 

	return 0; 
}
