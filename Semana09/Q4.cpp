/*Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos juntamente com a media dos valores.*/

#include <iostream>
using namespace std;

int main(){
    int V[5];

    for(int i=0; i<5; i++){
        cin>>V[i]>>endl;
    }
    for(int i=0; i<5; i++){
        cout<<V[i]<<" ";
    }
}
