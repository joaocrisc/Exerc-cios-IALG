#include <iostream>

using namespace std;

int F(int a);

int H( int a){
		if(a==0) return 0;
		else if(a>0) return H(a-1)+F(a-1);
		
		else return 0;
}

int F(int a){
		if( a== 0) return 1;
		else if( a%2==0 ) return 2*H(a)+F(a-1);	
        else if( a%2 !=0 ) return 2*H(a)-F(a-1);	
		else return 0;
}
int main(){
	int x;
	cin >> x;
	cout << F(x);

	return 0; 
}
