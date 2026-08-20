#include <iostream>

using namespace std;

int main (){
	
	double num1;
	double num2;
	char operador;
	double resultado;
	
cout << "Digite a conta separado por espaço (ex: 5 + 3): ";
cin >> num1 >> operador >> num2;
/*
cout << "Digite o primeiro número:  ";
cin >> num1;

cout << "Digite o operador do cálculo (+, -, *, /): ";
cin >> operador;

cout << "Digite o segundo número: ";
cin >> num2; 
*/

if ( operador == '+' ) {
	resultado = num1 + num2;
	cout << "O resultado de " << num1 << " + " << num2 << " é igual a: " << resultado << endl;
} else if ( operador == '-' ) {
	resultado = num1 - num2;
	cout << "O resultado de " << num1 << " - " << num2 << " é igual a: " << resultado << endl;
} else if ( operador == '*' ) {
	resultado = num1 * num2;
	cout << "O resultado de " << num1 << " * " << num2 << " é igual a: " << resultado << endl;
} else if ( operador == '/' && num2 != 0 ){
	resultado = num1 / num2;
	cout << "O resultado de " << num1 << " / " << num2 << " é igual a: " << resultado << endl;
} else {
	cout << "Entrada inválida. Inicie o programa e digite novamente.";
}

return 0;
}
