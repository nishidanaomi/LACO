/* Peça para o usuário informar 8 números e exiba-os de forma inversa. */

#include <iostream>
using namespace std;

int main(){
    int v[8];

    for(int i=1; i<9; i++){
        system("cls");
        cout<<"Informe o "<<i<<"º numero: "<<endl;
        cin>>v[i];
    }

    for(int i=8; i>0; i--){
        cout<<v[i]<<" ";
    }

    return 0;
}
