#include <iostream>
using namespace std;
//abs==absoluto/ modulo.

int Abs (int v){
	int res;
	if (v >= 0)
		res = v;
	else 
		res = -1 * v;
	return res;
}

int main(){
	int x, y, z;
	
	x= Abs (2);
	y = Abs (-5);
	z = Abs (-10);
	cout << x << " " << y << " " << z;
	
	
	
	
}
