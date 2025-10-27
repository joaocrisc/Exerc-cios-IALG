#include <iostream>

using namespace std;


unsigned A(unsigned m, unsigned n){

		if(m==0) return n+1;
		else if(m>0 and n==0) return A(m-1,1);
		else if( m>0 and n>0) return A(m-1,A(m,n-1));
		return 0;
}
int main(){
	unsigned a,b;
	cin >> a>>b;
	cout << A(a,b);

	return 0; 
}
