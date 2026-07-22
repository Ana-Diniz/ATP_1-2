#include <iostream>

using namespace std;

int main(){
	
int colunaA[5] = {0,0,0,0,0};
int colunaB[5] = {0,0,0,0,0};
int colunaC[5] = {0,0,0,0,0};
int colunaD[5] = {0,0,0,0,0};
int quantidade, i, linha;
char coluna;

i = 0;

cout << "quantos assentos deseja pegar?" << endl;
cin >> quantidade;

while(quantidade > i){
	i++;
	cout << "Qual coluna do assento?\n";
	cin >> coluna;
	if(coluna == 'A' || coluna == 'a'){
		cout << "Qual linha?";
		cin >> linha;
		colunaA[linha] = 1;
	}
}
cout << "Assentos disponiveis:" << endl;
cout << "    A  B  C  D\n";
cout << "1   " << colunaA[1] << "  " << colunaB[1] << "  " << colunaC[1] << "  " << colunaD[1];
cout << "2   " << colunaA[2] << "  " << colunaB[2] << "  " << colunaC[2] << "  " << colunaD[2];
cout << "3   " << colunaA[3] << "  " << colunaB[3] << "  " << colunaC[3] << "  " << colunaD[3];
cout << "4   " << colunaA[4] << "  " << colunaB[4] << "  " << colunaC[4] << "  " << colunaD[4];
cout << "5   " << colunaA[5] << "  " << colunaB[5] << "  " << colunaC[5] << "  " << colunaD[5];
}