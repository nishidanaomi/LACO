#include <iostream>

using namespace std;

int main() {
    int tabuada;

    cout<<"Informe a tabuada: "<<endl;
    cin>>tabuada;

    system("cls");

    for(int mult=0; mult<=10; mult++) {
        cout<<tabuada<<" x "<<mult<<" = "<<(tabuada*mult)<<endl;
    }

    return 0;
}
