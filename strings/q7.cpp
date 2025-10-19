/*A espectrometria de massa é uma técnica química analítica usada para determinar a massa, a composição elementar e a estrutura das moléculas. Na espectrometria de massa, a massa monoisotópica é usada com mais frequência do que a massa média e, portanto, todas as massas de aminoácidos são consideradas monoisotópicas, a menos que indicado de outra forma. A unidade padrão usada em espectrometria de massa para medir a massa é a unidade de massa atômica, que também é chamada de dalton (Da) e é definida como um duodécimo da massa de um átomo neutro de carbono-12. A massa de um único aminoácido é igual à massa monoisotópica deste mesmo aminoácido (fornecido pela tabela abaixo) mais a massa monoisotópica de uma única molécula de água (cujo valor é 18.01056 Da). Por exemplo (considere hipoteticamente um aminoácido A):

M_aminoacidoA = M_monoisotopicaA + M_monoisotopicaÁgua

Dada uma fita de DNA com comprimento de 70 proteínas, composta por 4 nucleobases (contendo os símbolos A, C, G e T), seu papel é criar um programa que receberá uma fita de DNA (String, dados inseridos na mesma linha e sem espaço) e retornará o peso total da fita de DNA de acordo com a tabela de massa monoisotópica em relação a cada proteína.

Tabela Simplificada de Massa Monoisotópica (Fonte Wikipédia):

Aminoácidos	Massa (Da)
A	71.03711
C	103.00919
G	57.02146
T	101.04768
*/


#include <iostream>
 #include <cstring>
 
using namespace std;

double valor( char a){

	if(a == 'A')
	return 71.03711;
	else if(a == 'T')
	return 101.04768;
	else if(a == 'C')
	return 103.00919;
	else if (a == 'G')
	return 57.02146;
	else
	return 0;
	

}

int main (){
	string fita;
	cin >> fita;
	
	int TAM= fita.size();
	double soma=18.01056*TAM;
	
	for(int i=0; i < TAM ; i++){
		
	soma+= valor(fita[i]);
	
	}
	
	cout << soma;

	return 0;
}
