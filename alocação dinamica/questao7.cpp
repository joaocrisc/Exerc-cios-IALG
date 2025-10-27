//uniao de vetores

#include <iostream>

using namespace std;

int main(){
	int TAM, TAM2;
	cin >> TAM;
	
	int* A= new int[TAM];
	for(int i=0; i < TAM; i ++){
	 cin>> A[i];
	 }
	 
	cin >> TAM2;
	int* B= new int[TAM2];
	
	for(int i=0; i < TAM2; i ++){
	 cin>> B[i];
	 }
	 
	int TAM3=TAM+TAM2;
	int*C= new int[TAM3];
	
	for(int i=0; i < TAM; i ++){
	 C[i]= A[i];
	 }
	
	
	int c=TAM;
	bool a= false;
	
	for(int i=0; i < TAM2; i ++){
		for(int x=0; x <= c; x++){
		if( B[i] == C[x]) a=true;
		}
		if(!a){
		C[c]= B[i];
		c++;
		}
		a=false;
	}
	
	for(int i=0; i < c; i++) cout<< C[i]<< " ";
	
		
	return 0;
}
