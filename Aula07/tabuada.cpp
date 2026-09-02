#include <iostream>

using namespace std;

int main() {
    int tabuada;
    int mult = 0;

    cout<<"Informe a tabuada: ";
    cin>>tabuada;

    system("cls");

    do {
        cout<<tabuada<<" x "<<mult<<" = "<<(tabuada*mult)<<endl;
        mult++;
    } while (mult <= 10);

    return 0;
}
