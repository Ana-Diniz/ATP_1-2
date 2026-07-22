#include <iostream>
#include <cmath>
using namespace std;
int  main(){
	float a,b,c, delta,n1,n2;
	cout<<"informe os coeficientes a,b e c de ax2+bx+c=0: \n";
	cin>> a>> b>> c;
	delta = pow(b,2)-4*a*c;
	
	if (delta > 0){
		n1= (-1*b+sqrt(delta))/2*a;
		n2= (-1*b-sqrt(delta))/2*a;
		cout<< " as duas raizes reais sao:"<< n1<< "e"<< n2;
	}
	else {
		if (delta == 0){
			cout <<" a unica raiz real eh:"<< -1*b/2*a;
		}
		else{
			cout<< "sem raizes reais :(";
		}
	}
}
