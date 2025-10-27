/*busca binária*/
#include <iostream>

using namespace std;
int busca(int* V, int inicio, int fim, int p);

int busca(int* V, int inicio, int fim, int p){
	
	int meio= (inicio+fim)/2;
	if (inicio > fim) return -1;
	else if( V[meio] == p) return meio;
	else if( V[meio] <p) return busca(V,inicio,meio-1,p);
	else if( V[meio] > p) return busca(V,meio+1, fim,p);
	
	
	
	return -1;
}

int main(){
	int N;
	cin >> N;
	int* V= new int[N];
	for(int i=0; i < N; i++) cin >> V[i];
	int P;
	cin >> P;
	
	cout << busca(V,0, N-1, P);
	
	delete[] V;
	return 0;
}
