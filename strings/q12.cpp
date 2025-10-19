 /*Construa um programa capaz de justificar um conjunto de palavras.

O usuário deverá inicialmente definir o número de palavras a serem justificadas. Em seguida o programa deverá ler a quantidade de palavras definida e no fim do processo apresentar as palavras na mesma ordem de leitura alinhadas a direita. Para o alinhamento deverá ser utilizado o caractere * (asterisco). Assuma que as palavras não contêm espaços. */
 
 #include <iostream>
 #include <cstring>

using namespace std;

int main(){
	int N;
	cin >> N;
	
	string* C= new string[N];
	int* T= new int [N];
	
	for(int i=0; i < N; i++){
		
	cin >> C[i];
	
	T[i]= C[i].size();
	
    }
    
    int maior= T[0];
    
    
    for (int i=1; i < N; i ++){
	  if(T[i] > maior){
		  maior= T[i];
	  }
	}
	
	int cont=0;
	int TAM;
	
	for(int i=0; i < N; i++){
		TAM= C[i].size();
		while( cont < maior- TAM){
			cout << "*";
			cont++;
		}
		
		cout << C[i]<< endl;
		cont=0;
	
    }
    
	

	delete [] C;
	delete [] T;
	return 0;
}
