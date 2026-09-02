#include <iostream>

using namespace std;

int main() {
    char cont;
    int tabuada;

    do {
        int mult = 10;
        cout<<"Informe a tabuada: ";
        cin>>tabuada;

        system("cls");

        do {
            cout<<tabuada<<" x "<<mult<<" = "<<(tabuada*mult)<<endl;
            mult--;
        } while (mult >= 0);

        cout<<"Deseja continuar? (S/N)"<<endl;
        cin>>cont;

        system("cls");

    } while (cont=='S');

    return 0;
}
