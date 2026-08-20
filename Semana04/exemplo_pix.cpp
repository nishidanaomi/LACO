 #include <iostream>

 using namespace std;

 int main() {
 	double valor;
 	string pix_s;
 	bool pix;

 	cout<<"Informe o valor do produto"<<endl;
 	cin>>valor;

 	cout<<"PIX ? (S/N)"<<endl;
 	cin>>pix_s;

 	if ((pix_s == "S") || (pix_s == "s")) {
 		pix = true;
	} else {
		pix = false;
	}

	//ternario
	//pix = (	(pix_s == "S") 	? 	true 	: 	false);

	if (pix == true) {
		valor = valor*0.95;
		valor *= 0.95;
	} else {
		valor = valor*1.1;
	}

	//ternario
	//valor = (	(pix ==true)	? 	valor*0.95 	:  valor*1.1);

	system("cls");
	cout<<"Valor: "<<valor<<endl;
 }
