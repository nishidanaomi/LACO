/*Imprima o vetor em progressão aritmética (PA) com razão 2, iniciando do valor 0 e encerrando no valor 10.*/

#include <iostream>
using namespace std;
int main(){
    int v[6];
    int razao = 2;
    for(int i=0; i<6; i++){
        v[i]=i*razao;
    }
    for(int i=0; i<6; i++){
        cout<<v[i]<<"\t";
    }

    return 0;
}
