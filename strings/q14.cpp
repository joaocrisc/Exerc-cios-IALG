/*Faça um programa que dada um string de entrada, informa qual o primeiro caractere que não se repete.

Obs: Considere que sempre existirá pelo menos uma letra que não se repete.*/

 #include <iostream>
 #include <cstring>

using namespace std;

int main(){

	string A;
	
	cin >> A;
	
	int TAM= A.size();
	char* C = new char [TAM];
	int* T = new int [TAM];
	
	int cont=0;
	 int k=0;
	bool a=false;
		
	for( int i=0; i < TAM ; i++){
		for(int x=0 ; x< k ; x++){
		if( A[i] == C[x])
			a=true;
		}
		if(!a){
			for(int x=0 ; x< TAM ; x++){
		if( A[i] == A[x]){
			cont++;
			C[k]= A[i];
			T[k] = cont;
			
		}
			
		}
		k++;
			
	}
	cont=0;
		a=false;
	}
	
	
	for(int x=0 ; x< k ; x++){
	if(T[x] == 1){
	cout << C[x];
	return 0;
         }
     }
	

}
