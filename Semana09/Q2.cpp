/*Faça um programa que receba do usuário um vetor com 10 posições. Em seguida deverá ser impresso o maior e o menor elemento do vetor.*/

#include <iostream>

int main(){
    int V[10];
    int maior, menor;
    maior=0;

    for(int i=0; i<10; i++){
        scanf("%d", &V[i]);

        if(V[i]>maior){
            maior=V[i];
        }
        if(V[i]<menor){
            menor=V[i];
        }
    }

    std::cout<<"Maior elemento do vetor = "<<maior<<std::endl;
    std::cout<<"Menor elemento do vetor = "<<menor<<std::endl;

    return 0;
}
