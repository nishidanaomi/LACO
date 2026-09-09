
#include <iostream>

using namespace std;

int main() {

    for(int tabuada=1; tabuada<=10; tabuada++){
        for(int mult=0; mult<=10; mult++) {
            cout<<tabuada<<" x "<<mult<<" = "<<(tabuada*mult)<<endl;
        }
        cout<<endl;
    }

    return 0;
}
