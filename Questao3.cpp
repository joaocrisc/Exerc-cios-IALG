#include <iostream>

using namespace std;


int m2 (int* vetor , int TAM ){
    bool a = false;
    int B[TAM];
    int b=0;
    bool sent= false;

    for( int i=0 ; i < TAM ; i++){
       
      
       
    for( int s=0 ; s < b ; s++){
            if ( vetor[i] == B[s])
                sent= true;
    }
        if ( vetor [i]%2 == 0 and !sent ){
            cout << vetor [i] << " ";
            B[b]= vetor [i];
            b++;
            a= true;
            sent=false;
        }
    }

    if (a) return 1;
    else return 0;
}
int m3 (int* vetor , int TAM ){
     bool a = false;
    int B[TAM];
    int b=0;
    bool sent= false;

    for( int i=0 ; i < TAM ; i++){
       
    for( int s=0 ; s < b ; s++){
            if ( vetor[i] == B[s])
                sent= true;
    }
        if ( vetor [i]%3 == 0 and !sent ){
            cout << vetor [i] << " ";
            B[b]= vetor [i];
            b++;
            a= true;
            sent=false;
        }
    }

    if (a) return 1;
    else return 0;
}
int m6 (int* vetor , int TAM ){

    bool a = false;
    int B[TAM];
    int b=0;
    bool sent= false;

    for( int i=0 ; i < TAM ; i++){
       
    for( int s=0 ; s < b ; s++){
            if ( vetor[i] == B[s])
                sent= true;
    }
        if ( vetor [i]%6 == 0 and !sent ){
            cout << vetor [i] << " ";
            B[b]= vetor [i];
            b++;
            a= true;
            sent=false;
        }
    }

    if (a) return 1;
    else return 0;

    
}

int main (){


    int N;
    

    cin >> N ;

    int* vetor = new int [N];

    for( int i=0 ; i < N ; i++){
      
      cin >> vetor [i];
    }


if ( vetor){
    if(!m2( vetor,  N)) cout << 0 ;
    cout << endl;
    if (!m3( vetor,  N)) cout <<0;
    cout << endl;
    if (!m6(vetor,  N)) cout << 0 ;
    cout<< endl;
}


    return 0;
}