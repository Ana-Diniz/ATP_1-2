#include <iostream>
using namespace std;

main(){
	float a, b, c, d;
	a = -2;
	b = -29;
	c = 200;
	d = 20;
	
	while (true){
		a = a + 2;
		b = b + 30;
		c = c / 2;
		d = d - 5;
		cout << a << endl << b << endl << c << endl << d << endl;
		if ( d == -5) break;
	} 
}
