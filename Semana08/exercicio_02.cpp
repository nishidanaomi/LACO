/*Desenvolva um programa que leia 5 números inteiros informados pelo usuário.
Ao final, o programa deverá mostrar a soma de todos os números digitados.
*/

#include <iostream>

using namespace std;

int main(){

    int soma;

    cout<<"Digite 5 numeros para a soma: "<<endl;

    for(int i=0; i<5; i++){
        int num;
        cin>>num;

        soma+=num;
    }

    system("cls");

    cout<<"A soma dos numeros eh igual a "<<soma<<endl;

    return 0;
}
