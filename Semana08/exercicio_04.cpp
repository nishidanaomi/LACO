/*Desenvolva um programa que permita ao usuário digitar vários números
inteiros. O programa deve continuar solicitando números até que o usuário digite
0.
Ao final, informe:
A quantidade de números digitados;
A soma dos números;
A média dos números.*/

#include <iostream>

using namespace std;

int main(){
    int num,qtd,soma;
    double media=0.0;
    qtd=0;
    soma=0;

    cout<<"Digite numeros naturais (n>0) separados por espaco e zero (0) para concluir: "<<endl;
    cin>>num;

        /*for(int i=0;nums!=0;i++);*/
    while(num!=0){
        qtd+=1;
        soma+=num;
        cin>>num;
    }

    if(qtd>0){
        media=(double)soma/qtd;
    }

    cout<<"Quantidade de numeros digitados: "<<qtd<<endl;
    cout<<"Soma dos numeros: "<<soma<<endl;
    cout<<"Media dos numeros: "<<media<<endl;

    return 0;
}
