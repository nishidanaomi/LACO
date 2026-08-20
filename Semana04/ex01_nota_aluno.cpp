/* 
Lista de exercícios
1 - Crie um programa que leia a nota de um aluno (0 a 10) e classifique:
0 a 4.9 ? Reprovado
5.0 a 6.9 ? Recuperação
7.0 a 10 ? Aprovado 
*/

#include <iostream>

using namespace std;

int main() {

double nota;

cout << "Nota do aluno: " << endl;

cin >> nota;

if ( (nota => 0) && (nota <= 4.9) ) {
	cout << "Reprovado";
} else if ( (nota >4.9) && (nota <= 6.9) ) {
	cout << "Recuperação";
} else if ( (nota => 7) && (nora <= 10)){
		cout << "Aprovado";
} else {
	cout << "Nota inválida. Reinicie e digite uma nota válida."
}
	
	return 0;
}
