#include <iostream>

using namespace std;

int main(){
    int senha, tentativas;
    tentativas=1;

    cout<<"Digite a senha: "<<endl;
    cin>>senha;

    while (senha != 1234) {
        cout<<"Senha incorreta! Tente de novo: "<<endl;
        cin>>senha;
        tentativas+=1;
    }

    cout<<"Acesso liberado!"<<endl;

    return 0;
}
