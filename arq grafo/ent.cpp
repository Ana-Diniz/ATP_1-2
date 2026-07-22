#include <iostream>
using namespace std;
int main (){
	int n;
	n = 98;
	while (true){
		if (n == 200){
			break;
		}
		n = n + 2;
		cout << n << " ";
	}
	cout << endl;
	n = 98;
	while ( n != 200){
		n = n + 2;
		cout << n << " "; 
	}
	cout << endl;
	n = 98;
	while (true){
		n = n + 2;
		cout << " ";
		if (n == 200){
			break;
		}
	}
	n = 98;
	do {
		n = n + 2;
		cout << n << " ";
	} while ( n != 200);
	
	n = 98;
	while (true) {
		n = n + 2;
		if (n = 202){
			break;
		}
		cout << n << " ";
	} 
}
