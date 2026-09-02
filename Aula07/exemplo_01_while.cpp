#include <iostream>

using namespace std;

int main(){

    double total, desconto;
    char resposta = 'S';

    while (resposta == 'S'){
        system("cls");
        cout << "Total da compra: ";
        cin >> total;

        if ( total >= 100 && total < 200 ){
                    desconto = total * 0.1;
        } else if ( total >= 200 ) {
                desconto = total * 0.2;
        } else {
                desconto = 0;
        }

        system("cls");
        cout << "Valor original: R$" << total << endl;
        cout << "Valor do desconto: R$" << desconto << endl;

        cout << "Deseja continuar? (S/N)" << endl;
        cin >> resposta;
    }


    return 0;
}
