/*
Desenvolva um programa que leia um ano e determine se ele é bissexto.
Um ano é bissexto quando o mesmo é divisível por 4 e não por 100 ou é divisível por 400
*/

#include <iostream>

using namespace std;
int main() {

    int ano;

    cout << "Digite o ano para saber se ele e bissexto: " << endl;
    cin >> ano;

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
        cout << "O ano e bissexto." << endl;
    } else {
        cout << "O ano nao e bissexto." << endl;
    }

    return 0;
}
