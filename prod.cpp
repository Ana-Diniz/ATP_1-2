#include <iostream>
using namespace std;
main (){
	setlocale(LC_ALL,"portuguese");
	char per;
	float n, i, peso, preco, cont_per, soma_peso,soma_preco, menor_pre, maior_pes, preco_pes, soma_pre_n_per;
	cout << "Quantos itens serão processados?";
	cin >> n;
	i = 1;
	cont_per = 0;
	soma_peso = 0.0;
	soma_pre_n_per = 0.0;
	menor_pre = 100000;
	maior_pes = 0;
	
	do{
		cout << "O produto é perecível?";
		cin >> per;
		cout << "informe o peso e o preço: ";
		cin >> peso >> preco;
		if (per == 'S' || per == 's'){
			cont_per = cont_per + 1;
		}else{
			soma_pre_n_per = soma_pre_n_per + preco;
		}
		soma_peso = soma_peso + peso;
		if (preco < menor_pre)
			menor_pre = preco;
		if (peso > maior_pes){
			maior_pes = peso;
			preco_pes = preco;
		}
		i= i + 1;
	}while (i <= n);
	cout << "A quantidade de perecíveis é: " << cont_per << endl;
	cout << "O peso total é: " << soma_peso << endl;
	if (cont_per == n)
		cout << "Não há produtos não perecíveis. ";
	else{
		cout << "A média dos preços dos não perecíveis é: " << soma_pre_n_per/(n-cont_per) << endl;
		cout << "O menor preço é: " << menor_pre << endl;
		cout << "O preço do mais pesado é: " << preco_pes << endl;
	}
}
