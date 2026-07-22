#include <iostream>
using namespace std;
//a)
int main(){
	float  gra, peso_tot, pre_qui, i, peso;
	char item;

	i = 0;
	peso = 0;
	do{
	cout << "informe o produto (atribua apenas a letra inicial para identifica-lo): ";
	cin >> item;
	cout << "informe qual eh o preco do quilo deste produto: ";
	cin >> pre_qui;
	cout << "quantas gramas tem o seu produto? ";
	cin >> gra;
	i++;
	peso = peso + gra;
	
	
	}while (i < 3);
	peso_tot = peso;
	cout << "o peso total eh: "<< peso_tot;
	
		
}
