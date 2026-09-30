
/* Peça para o usuário informar 8 números e exiba-os de forma inversa. */

#include <iostream>
using namespace std;

int main(){
    const int tamanho = 8;
    int v[tamanho];

    for(int i=0; i<tamanho; i++){
        system("cls");
        cout<<"Informe o numero: "<<endl;
        cin>>v[i];
    }

    system("cls");

    for(int i=tamanho; i>=0; i--){
        cout<<v[i]<<endl;
    }

    return 0;
}
