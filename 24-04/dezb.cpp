#include <iostream>
using namespace std;
//b)
int main(){
	float  peso_tot, pre_qui, i, peso, pre_caro;
	char item;
	i = 0;
	pre_caro = 0;
	
	while (i < 3){
		cout << "informe o item: ";
		cin >> item;
		cout << "informe o peso em gramas: ";
		cin >> peso;
		cout << "informe qual eh o preco por quilo: ";
		cin >> pre_qui;
		i++;
		if (pre_caro < pre_qui){
			pre_caro = pre_caro + pre_qui;
		}
		
	}
	
			cout << "o produto que possui o maior preco por quilo eh " << pre_qui;
	
	
	
	
}

