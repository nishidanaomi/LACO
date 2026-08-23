/*
Um supermercado está oferecendo descontos com base no valor da compra:
Até R$ 100 → sem desconto
De R$ 100 a R$ 200 → 10% de desconto
Acima de R$ 200 → 20% de desconto
Portanto, escreva um programa que:
Leia o valor da compra
Calcule o desconto aplicado
Exiba:
Valor original
Valor do desconto
*/

#include <iostream>

using namespace std;

int main(){

    double total;
    double desconto = 0.00;

    cout << "Total da compra: ";
    cin >> total;

    if ( total >= 100.00 && total < 200.00 ){
            desconto = total * 0.1;
        cout << "Valor original: R$" << total << endl;
        cout << "Valor do desconto: R$" << desconto << endl;
    } else if ( total >= 200.00 ) {
        desconto = total * 0.2;
        cout << "Valor original: R$" << total << endl;
        cout << "Valor do desconto: R$" << desconto << endl;
    } else {
        cout << "Valor original: R$" << total << endl;
        cout << "Valor do desconto: " << desconto << endl;
    }

    return 0;
}
