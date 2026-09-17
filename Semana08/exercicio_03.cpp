/*Desenvolva um programa que peça ao usuário para digitar uma senha. A senha
correta será 1234. Enquanto o usuário digitar uma senha incorreta, o programa
deverá solicitar que ele tente novamente. Caso o usuário acerte a senha,
informe também quantas tentativas foram necessárias para acertar a senha.*/

#include <iostream>

using namespace std;

int main(){
    int senha, tentativas;
    tentativas=1;

    cout<<"Digite a senha: "<<endl;
    cin>>senha;

    while(senha!=1234){
        cout<<"Senha incorreta! Tente novamente: "<<endl;
        cin>>senha;
        tentativas+=1;
    }

    cout<<"Senha correta! Voce acertou a senha com "<<tentativas<<" tentativas."<<endl;

    return 0;
}
