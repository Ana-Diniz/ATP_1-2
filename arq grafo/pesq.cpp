#include <iostream>
using namespace std;
main(){
	int idade, min_idade_h, quant_m, max_idade_m;
	char sexo, tatuagem, piercing;
	cout << "informe o sexo: ";
	cin >> sexo;
	if (sexo == 'm' || sexo == 'M' || sexo == 'f' || sexo == 'F'){
		cout << "possui tattoos? ";
		cin >> tatuagem;
		cout << "possui piercings? ";
		cin >> piercing;
		cout << "Qual a sua idade? ";
		cin >> idade;
	}
	min_idade_h = 100000;
	quant_m = 0;
	max_idade_m = 0;
	if (tatuagem == 's' || tatuagem == 'S' && piercing == 's' || piercing == 'S'){
		quant_m = quant_m + 1;
		cout << "A quantidade de mulheres que possuem tattoos e piercings eh: " << quant_m;
	}
}
