#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	float A[3][4], B[3][4],C[3][4];
	ifstream entrada;
	entrada.open("entrada.txt");
	
	for(int x=0; x<3; x++){
			for(int y=0; y<4; y++){
				entrada >> A[x][y];
		}
	}
	for(int x=0; x<3; x++){
			for(int y=0; y<4; y++){
				entrada >> B[x][y];
		}
	}
	for(int x=0; x<3; x++){
			for(int y=0; y<4; y++){
			 C[x][y]=A[x][y]+B[x][y];
				cout<< C[x][y]<< " ";
		}
		cout << endl;
	}
	return 0;
	}
