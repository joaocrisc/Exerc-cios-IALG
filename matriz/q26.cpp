#include <iostream>
#include <fstream>

using namespace std;

int main(){
	float A[3][2], B[3][2], C[3][2];
	
	ifstream entrada;
	entrada.open("entrada.txt");
	for( int x=0; x< 3; x++){
		for(int y=0; y<2; y++){
			entrada>>A[x][y];
		}
	}
	for( int x=0; x< 3; x++){
		for(int y=0; y<2; y++){
			entrada>>B[x][y];
		}
	}
	
	for( int x=0; x< 3; x++){
		for(int y=0; y<2; y++){
			C[x][y]=A[x][y]-B[x][y];
			cout<< C[x][y]<< " ";
		}
		cout<<endl;
	}
	
	entrada.close();


	return 0;
}
