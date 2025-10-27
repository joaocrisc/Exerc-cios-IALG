#include <iostream>
#include <cstring>

using namespace std;

string bomba ( int a){
	
	if( a == 0) return "agua";
	else if ( a==1) return "destroier";
	else if ( a == 2) return "fragata";
	else if( a== 3) return "lancha";

	return "ERRO";
}

int main (){
	int V[15][15];
	string C[3];
	
	for( int x=0 ; x < 15 ; x ++){
		for( int y=0 ;  y < 15; y ++){
		cin >> V[x][y];
		}
	}
	
	int a,b;
	const int TAMC=3;
	for( int i=0 ; i < TAMC ; i++){
	cin >> a >> b;
	C[i]= bomba(V[a][b]);
	}
	
	for( int i =0; i < TAMC ; i++){
		cout << C[i] << endl;
	}

	return 0;
}
