/*Desenvolva um programa que leia um número inteiro N informado pelo usuário
e, utilizando uma estrutura de repetição, mostre todos os números pares de 0 até
N.*/

#include <iostream>

using namespace std;

int main(){

    int n, i;
    i=0;

    cout<<"Informe um numero: "<<endl;
    cin>>n;
    system("cls");
    for(i=0;i<=n;i++){
            if(i%2==0){
            cout<<i<<endl;
        }
    }

        return 0;
}
