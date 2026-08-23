#include <iostream>
#include <cmath>

using namespace std;

int main() {

	double a=1,b=5,c=6,x1,x2;

	x1 = (-1*b + sqrt(pow(b,2) -4*a*c))/2*a;
	x2 = (-1*b - sqrt(pow(b,2) -4*a*c))/2*a;

	cout<<"X1="<<x1<<"\n";
	cout<<"X2="<<x2<<endl;

}
