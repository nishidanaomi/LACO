#include <iostream>


using namespace std;

int main() {

    // Declarando as variaveis cujos valores numericos inteiros
	// serao informados pelo usuario
    int v1, v2, resultado;

    // Imprimindo na tela a primeira solicitacao de valor
    cout<<"Informe o primeiro valor"<<endl;

    // Obtem o que o usuario digitou e armazena em v1
	cin>>v1;

	cout<<"Informe o segundo valor"<<endl;
	cin>>v2;

	// Operacao aritmetica de soma
	resultado = v1 + v2;

	//Exibindo o resultado da soma na tela
	cout<<endl<<"O valor da soma e "<<resultado<<endl;

}
