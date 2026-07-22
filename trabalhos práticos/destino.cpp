#include <iostream>
using namespace std;


int main (){
	setlocale (LC_ALL, "portuguese");
	int quant_pass, destino;
	int horario;
	float passagem;
	
	cout << "Quantos assentos serão adquiridos? \n";
	cin >> quant_pass;
	
	cout << "Qual o destino da sua viagem? \n";
	cout << "---------------------------------------------------------" << endl;
	cout << " 1: CidadeAoSul -> CidadeAoNorte. \n 2: CidadeAoNorte -. CidadeAoSul. ";
	cin >> 	destino;
	
	if ( destino > 2){
		cout << " Inválido, digite um número correspondente a um dos dois destinos disponíveis.";
		cin >> destino;
	}
	if  (destino == 1)
		passagem = 40.00 * quant_pass;
	
	cout << "informe qual o horário da sua viagem: \n";
	cout << "Horários disponíveis: \n ";
	cout << "---------------------------------------------------------" << endl;
	cout << " 1: 8:00\n 2: 10:00\n 3: 12:00\n 4: 14:00\n 5: 16:00 \n";
	cin >> horario;
	
	if(destino == 1){
		switch (horario){
			case 1:
				cout << "A posição do sol nesse horário será: \n";
				cout << "	N	" << endl;
				cout << "O	Ô	*" <<  endl;
				cout << "	S	" << endl;
				break;
			case 2:
				cout << "A posicão do sol nesse horário será: \n";
				cout << "	N  *" << endl;
				cout << "O	Ô	L" << endl;
				cout << "	S	" << endl;
				break;
			case 3:
				cout << "A posição do sol nesse horário será: \n";
				cout << "	*	" << endl;
				cout << "O	Ô	L" << endl;
				cout << "	S	" << endl;
				break;
			case 4:
				cout << "A posição do sol nesse horário será: \n";
				cout << " * N	" << endl;
				cout << "O	Ô	L" << endl;
				cout << "	S	" << endl;
				break;
				
			case 5:
				cout << "A posição do sol nesse horário será: \n";
				cout << "	N	" << endl;
				cout << "*	Ô	L" <<endl;
				cout << "	S	" << endl;
				break;
		}
	}
			if(destino == 2){
		switch (horario){
			case 1:
				cout << "A posição do sol nesse horário será: \n";
				cout << "	N	" << endl;
				cout << "*	Ô	L" <<  endl;
				cout << "	S	" << endl;
				break;
			case 2:
				cout << "A posicão do sol nesse horário será: \n";
				cout << " * N   " << endl;
				cout << "O	Ô	L" << endl;
				cout << "	S	" << endl;
				break;
			case 3:
				cout << "A posição do sol nesse horário será: \n";
				cout << "	*	" << endl;
				cout << "O	Ô	L" << endl;
				cout << "	S	" << endl;
				break;
			case 4:
				cout << "A posição do sol nesse horário será: \n";
				cout << "   N * " << endl;
				cout << "O	Ô	L" << endl;
				cout << "	S	" << endl;
				break;
				
			case 5:
				cout << "A posição do sol nesse horário será: \n";
				cout << "	N	" << endl;
				cout << "O	Ô	*" <<endl;
				cout << "	S	" << endl;
				break;
		}
	}
}