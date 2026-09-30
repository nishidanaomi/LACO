#include <iostream>
using namespace std;

int main (){
    int v[5];

    for (int i=0; i<5; i++){
        system("cls");
        cout<<"Informe o valor no indice: "<<i<<endl;
        cin>>v[i];
    }
    int i = 0;
    do{
        cout<<v[i];
        i++;
    } while(i<5);

    return 0;
}
