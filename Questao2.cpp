

/*Dois vetores são considerados iguais se ambos contiverem o mesmo conjunto de elementos, embora as permutações de elementos possam ser diferentes.

Faça um programa para receba o tamanho N de dois vetores A e B de igual tamanho e descubra se os vetores são iguais ou não.

Se forem iguais imprima "IGUAIS", caso contrário imprima "DIFERENTES".

Observação: não haverá elementos repetidos em cada vetor.*/

#include <iostream>

using namespace std;

int main (){


    int N;
    bool a = false;

    cin >> N ;

    int* A = new int[N];
    int* B = new int[N];

     for ( int i =0 ; i < N ; i++){
        cin >> A[i];

     }
     for ( int i =0 ; i < N ; i++){
        cin >> B[i];

     }


    for ( int i =0 ; i < N ; i++){
       a= false;
        for (int b=0; b < N ; b++){
            
            if ( A[i] == B[b]){
                
                a=true;
                b += N;
        
            } else if ( b == (N-1) and !a){
                 a= false;
                 i +=N;
            } 
        }
    }

    delete [] A;
    delete [] B;

    if(!a){
        cout << "DIFERENTES";
    } else cout << "IGUAIS";



    return 0;
}