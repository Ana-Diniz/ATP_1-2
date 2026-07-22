#include <iostream>
using namespace std;
int main (){
	// soma dos multiplos de 3 entre 30 e 60. do while.
	int n, soma;
	n = 27;
	soma = 0;
	do {
		n = n + 3;
		soma = soma + n;
		cout << n << endl;
		}while (n != 60);{
		cout << "a soma eh: " << soma << endl;
		}
}
