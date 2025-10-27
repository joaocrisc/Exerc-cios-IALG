/*multiplicação de matrizes*/
#include <iostream>
#include <fstream>

using namespace std;

int main(){
	const int TAM=3;
	int A[TAM][TAM],B[TAM][TAM],C[TAM][TAM];
	
	for(int x=0; x< TAM; x++){
		for(int y=0; y< TAM; y++){
	    cin>> A[x][y];
	}
}
	for(int x=0; x< TAM; x++){
		for(int y=0; y< TAM; y++){
	    cin>> B[x][y];
	}
}

	for(int x=0; x< TAM; x++){
		for(int y=0; y< TAM; y++){
		C[x][y]=0;
		for( int k=0; k <TAM; k++){
	    C[x][y]+= A[x][k]*B[k][y];
	  }
	}
}

	for(int x=0; x< TAM; x++){
		for(int y=0; y< TAM; y++){
	    cout << C[x][y]<< " ";
	 }
	 cout << endl;
 }


	return 0;
	}
