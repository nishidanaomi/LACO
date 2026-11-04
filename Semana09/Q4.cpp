/*Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos juntamente com a media dos valores.*/

#include <iostream>
using namespace std;

int main(){
    int V[5];
    double media;

    for(int i=0; i<5; i++){
        cin>>V[i];
    }
    system("cls");
    cout<<"Valores digitados: ";
    for(int i=0; i<5; i++){
        cout<<V[i]<<" ";
    }
    cout<<endl;

    media=(V[0]+V[1]+V[2]+V[3]+V[4])/5;
    cout<<"Media: "<<media<<endl;

    return 0;
}
