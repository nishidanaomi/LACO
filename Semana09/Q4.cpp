/*Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos juntamente com a media dos valores.*/

#include <iostream>
using namespace std;

int main(){
    int QTD=5;
    int V[QTD];
    double media,soma;

    for(int i=0; i<QTD; i++){
        cin>>V[i];
    }
    system("cls");
    cout<<"Valores digitados: ";
    for(int i=0; i<QTD; i++){
        cout<<V[i]<<" ";
        soma+=V[i];
    }
    cout<<endl;

    media=soma/QTD;
    cout<<"Media: "<<media<<endl;

    return 0;
}
