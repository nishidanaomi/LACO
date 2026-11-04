/*Faça um programa que preencha um vetor com 10 números reais, calcule e mostre a quantidade de números negativos e a soma dos números positivos desse vetor.*/

#include <iostream>
using namespace std;

int main(){
    int QTD=10;
    int V[QTD];
    int qtdn = 0, somap=0;

    for(int i=0; i<QTD; i++){
        cin>>V[i];

        if(V[i]<0){
            qtdn++;
        } else {
            somap+=V[i];
        }
    }

    system("cls");
    cout<<"Quantidade de numeros negativos: "<<qtdn<<endl;
    cout<<"Soma dos numeros positivos: "<<somap<<endl;

    return 0;
}
