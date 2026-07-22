#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (){
	int segredo;
	int chute;
	srand (time(NULL));
	
	segredo = rand ()%100 + 1;
	
	do {
		cout << "adivinhe o numero de 0 a 100: " << endl;
		cin >> chute;
		
		if (segredo < chute){
			cout << "o segredo eh menor que isso. " << endl;
		}else if (segredo > chute){
			cout << " O segredo eh maior que isso" << endl;
		}else{
			cout << "voce acertou!!";
			break;
		}
	} while (true);
			
}
