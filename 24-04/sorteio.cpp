#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//srand==numero aleatorio.
int main (){
	int num;
	char opcao;
	srand (time(NULL));
	do {
		num = rand ()%100 +1;
		cout << "O numero sorteado foi: \n" << num << endl;
		cout << "parar o programa? \n";
		cin >> opcao;
	
	} while (opcao != 'S' && opcao != 's');
			
}
