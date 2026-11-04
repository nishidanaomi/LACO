/*Faça um programa que receba do usuário um vetor com 10 posições. Em seguida deverá ser impresso o maior e o menor elemento do vetor.*/

#include <iostream>
using namespace std;

int main(){
    int qtd=10;
    int V[qtd];
    int maior, menor;
    maior=0;

    for(int i=0; i<qtd; i++){
        cin>>V[i];
    }
    maior=menor=V[0];
    for(int i=0; i<qtd; i++){
        if(V[i]>maior){
            maior=V[i];
        }
        if(V[i]<menor){
            menor=V[i];
        }
    }

    cout<<"Maior elemento do vetor = "<<maior<<endl;
    cout<<"Menor elemento do vetor = "<<menor<<endl;

    return 0;
}
