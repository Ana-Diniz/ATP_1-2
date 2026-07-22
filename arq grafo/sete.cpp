#include <iostream>
using namespace std;
 main(){
 	int a, b;
 	cout << "informe limite inferior: ";
 	cin >> a;
 	cout << "informe limite superior: ";
 	cin >> b;
 	
 	while (true){
 		if ( a > b) break;
 		if ( a%2 == 0){
 			a = a + 1;
 			cout << a << " ";
		 }else {
		 	a = a + 2;
		 	if (a > b) break;
		 	cout << a << " ";
		 }
	 }
 }
