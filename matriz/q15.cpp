/*Dado um número N, um vetor V de N números inteiros ordenados, um valor de busca inteiro B, e um valor de multiplicação inteiro M, faça um programa que multiplique o valor de B no vetor V pelo valor de M. Para encontrar o valor B no vetor, a busca binária recursiva deve ser utilizada. Caso o valor de busca não exista no vetor, o vetor original deve ser impresso.*/

#include <iostream>

using namespace std;

int busca(int* V, int inicio, int fim,int p){
		int meio=(inicio+fim)/2;
		if(inicio>fim) return -1;
		else if(V[meio]==p) return meio;
		else if(V[meio] > p) return busca(V,0,meio-1,p);
		else if(V[meio] <p) return busca(V,meio+1,fim,p);
		
		return -1;
	
}
int main(){
	int N,M;
	cin >> N;
	int* V= new int [N];
	for(int i=0; i < N; i ++) cin >> V[i];
	
	int p;
	cin >> p >> M;
	
	int b, fim= N-1;
	b=busca( V,0,fim,p); 
	V[b]=p*M;
	for(int i=0; i < N; i ++) cout << V[i]<<" ";

	return 0;
}
