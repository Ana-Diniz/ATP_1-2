#include <iostream>
using namespace std;
int main(){
	int ano;
	cout<<"Informe o ano:";
	cin>> ano;
	if (ano % 4==0){
		if (ano % 100 == 0){
			if ( ano % 400 == 0){
				cout << ano << " eh bissexto";
			}
		} else{
			cout << ano << "nao eh bissexto";
		
		} else {
			cout << ano << "nao eh bissexto";
		}
	}else{
		cout  << ano << "ano nao eh bissexto";
		}
}
