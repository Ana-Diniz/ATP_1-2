#include <iostream>
using namespace std;
int main (){
	int n1, n2, i = 0;
	cout << "informe o dividendo: \n";
	cin >> n1;
	cout << "informe o divisor: \n";
	cin >> n2;
	
	
	while (n1 > n2){
		n1 = n1 - n2;
		i++;
	}
	cout << "o resto eh: " << n1 << endl;
	cout << "o quociente eh: " << i << endl;
	
}
