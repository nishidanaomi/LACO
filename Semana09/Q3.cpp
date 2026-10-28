/*Faça um programa que preencha um vetor com 10 números reais, calcule e mostre a quantidade de números negativos e a soma dos números positivos desse vetor.*/

#include <iostream>

int main(){
    int V[10];
    int qtdn = 0, somap=0;

    for(int i=0; i<10; i++){
        scanf("%d", &V[i]);

        if(V[i]<0){
            qtdn++;
        } else {
            somap+=V[i];
        }
    }
    std::cout<<"Quantidade de numeros negativos: "<<qtdn<<std::endl;
    std::cout<<"Soma dos numeros positivos: "<<somap<<std::endl;

    return 0;
}
