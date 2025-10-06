
/* Faça um programa que receba a quantidade de números que o usuário digitará e em seguida preencha um vetor com os números inteiros, calcule e mostre: os números múltiplos de 2; os números múltiplos de 3; e os números múltiplos de 2 e 3. Os números múltiplos de 2 e 3 podem aparecer nos casos isolados. Caso não exista nenhum número em cada caso, o programa deve retornar 0 na respectiva saída.

Observação: o vetor deverá ser alocado dinamicamente */


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