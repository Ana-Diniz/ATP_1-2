// Trabalho 1 de ATP (integral) - Exercício 1 
// Nomes do grupo: Ana Maria Diniz da Costa, Maria Fernanda Perez, Pamela Rosa de Oliveira

#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");
	
    int contador, qtd_pokes, base1, base2, topping1, topping2, topping3, crunch1, crunch2, proteina1, proteina2, nut, molho;
	char tamanho, prot_dobro;
    float preco;
    
    preco = 0;
    contador = 0;
    
    cout << "Bem-vinde à ComPoke!\n";
    cout << "------------------------------------\n";
	cout << "Seu pedido terá quantos pokes? ";
	cin >> qtd_pokes;
	cout << "------------------------------------\n\n";
	
	while (contador < qtd_pokes) {
		contador++;
		
		cout << "TAMANHO\n\n";
		cout << "Escolha um tamanho:\n";
    	cout << "P - Pequeno (R$ 30,00)\n";
   		cout << "M - Médio (R$ 35,00)\n";
		cout << "G - Grande (R$ 40,00)\n\n";
    	cout << "------------------------------------\n";
    	
    	cout << "Digite o tamanho do poke " << contador << ": ";
        cin >> tamanho;
        
        if (tamanho != 'p') {
        	if (tamanho != 'P') {
        		if (tamanho != 'm') {
        			if (tamanho != 'M') {
        				if (tamanho != 'g') {
        					if (tamanho != 'G') {
        						cout << "Opção inválida, digite um valor correto: ";
            					cin >> tamanho;
            				}
            			}
            		}
            	}
        	}
		}
        
        if (tamanho == 1) {
        	preco = preco + 30;
		} else {
			if (tamanho == 2) {
				preco = preco + 35;
			} else {
				if (tamanho == 3) {
					preco = preco + 40;
				}
			}
		} 
        
        cout << "------------------------------------\n";
        cout << "MONTE SEU POKE!\n";
    	cout << "Você poderá escolher bases, toppings, crunchies, proteínas, nut e molhos\n";
    	cout << "------------------------------------\n\n";
    	
    	cout << "BASES (obrigatório)\n\n";
		cout << "Escolha de uma até duas bases:\n";
    	cout << "1 - Arroz japonês (gohan)\n";
    	cout << "2 - Arroz integral\n";
    	cout << "3 - Espaguete de abobrinha\n";
    	cout << "4 - Mix de folhas\n";
    	cout << "5 - Quinoa (+R$ 3,00)\n";
    	cout << "6 - Sem base\n\n";
		cout << "------------------------------------\n";
		
		cout << "Digite a primeira base do poke " << contador << ": ";
        cin >> base1;
        
        if (base1 > 5 || base1 < 1) {
        	cout << "Opção inválida, digite um valor correto: ";
            cin >> base1;
    	}
    	
    	if (base1 == 5) {
    		preco = preco + 3;
		}
        
       	cout << "Digite a segunda base do poke " << contador << ": ";
       	cin >> base2;
       	
       	if (base2 > 6 || base2 < 1) {
        	cout << "Opção inválida, digite um valor correto: ";
            cin >> base2;
    	}
    	
    	if (base2 == 5) {
    		preco = preco + 3;
		}
    
        cout << "------------------------------------\n";
    	cout << "O valor atual do seu pedido é R$ " << preco << endl;
    	cout << "------------------------------------\n\n";
    	
    	cout << "TOPPINGS\n\n";
    	cout << "Escolha até três toppings:\n";
    	cout << "1 - Abacate\n";
    	cout << "2 - Cenoura\n";
    	cout << "3 - Cream Cheese\n";
   	 	cout << "4 - Kani\n";
    	cout << "5 - Pepino\n";
    	cout << "6 - Sunomono (+R$ 1,00)\n";
    	cout << "7 - Tomate Cereja\n";
    	cout << "8 - Wakame (+R$ 1,00)\n";
    	cout << "9 - Sem topping\n\n";
    	cout << "------------------------------------\n";
    	
    	cout << "Digite o primeiro topping do poke " << contador << ": ";
        cin >> topping1;
        
        if (topping1 > 9 || topping1 < 1) {
        	cout << "Opção inválida, digite um valor correto: ";
            cin >> topping1;
    	}
    	
    	if (topping1 == 6) {
    		preco = preco + 1;
		} else {
			if (topping1 == 8) {
				preco = preco + 1;
			}
		}
    	
    	if (topping1 != 9) {
    		cout << "Digite o segundo topping do poke " << contador << ": ";
        	cin >> topping2;
        	
        	if (topping2 > 9 || topping2 < 1) {
        	cout << "Opção inválida, digite um valor correto: ";
            cin >> topping2;
    		}
    		
    		if (topping2 == 6) {
    			preco = preco + 1;
			} else {
				if (topping2 == 8) {
					preco = preco + 1;
				}
			}
    	}
			
		if (topping2 != 9 && topping1 != 9) {
			cout << "Digite o terceiro topping do poke " << contador << ": ";
        	cin >> topping3;
        		
        	if (topping3 > 9 || topping3 < 1) {
        		cout << "Opção inválida, digite um valor correto: ";
            	cin >> topping3;
    		}
        
        	if (topping3 == 6) {
    			preco = preco + 1;
			} else {
				if (topping3 == 8) {
					preco = preco + 1;
				}
			}
		}
  		
  		cout << "------------------------------------\n";
  		cout << "O valor atual do seu pedido é R$ " << preco << endl;
		cout << "------------------------------------\n\n";
		
		cout << "CRUNCHIES\n\n";
		cout << "Escolha até dois crunchies:\n";
		cout << "1 - Chips de banana da terra\n";
		cout << "2 - Chips de batata doce\n";
		cout << "3 - Cebola Crispy\n";
		cout << "4 - Nori\n";
		cout << "5 - Sem crunchies\n\n";
		cout << "------------------------------------\n";
		
		cout << "Digite o primeiro crunch do poke " << contador << ": ";
        cin >> crunch1;
        
        if (crunch1 > 5 || crunch1 < 1) {
        	cout << "Opção inválida, digite um valor correto: ";
            cin >> crunch1;
    	}
		
		if (crunch1 != 5) {
			 cout << "Digite o segundo crunch do poke " << contador << ": ";
       		 cin >> crunch2;
       		 
       		if (crunch2 > 5 || crunch2 < 1) {
        	cout << "Opção inválida, digite um valor correto: ";
            cin >> crunch2;
        	}
    	}
        
		cout << "------------------------------------\n";
		cout << "O valor atual do seu pedido é R$ " << preco << endl;
		cout << "------------------------------------\n\n";
		
		cout << "PROTEÍNAS (obrigatório)\n\n";
		cout << "Escolha de uma até duas bases:\n";
    	cout << "1 - Atum\n";
    	cout << "2 - Ceviche Havaiano\n";
    	cout << "3 - Frango desfiado\n";
    	cout << "4 - Ovo de codorna\n";
    	cout << "5 - Salmão grelhado (+R$ 2,00)\n";
    	cout << "6 - Sem proteína\n\n";
    	
		cout << "------------------------------------\n";
		cout << "Digite a primeira proteína do poke " << contador << ": ";
        cin >> proteina1;
        
        if (proteina1 > 5 || proteina1 < 1) {
        	cout << "Opção inválida, digite um valor correto: ";
            cin >> proteina1;
    	}
    	
    	if (proteina1 == 5) {
    		preco = preco + 2;
		}
        
       	cout << "Digite a segunda proteína do poke " << contador << ": ";
       	cin >> proteina2;
       	
       	if (proteina2 > 6 || proteina2 < 1) {
        	cout << "Opção inválida, digite um valor correto: ";
            cin >> proteina2;
    	}
       	
       	if (proteina2 == 5) {
    		preco = preco + 2;
		}
        
        cout << "------------------------------------\n";
        cout << "O valor atual do seu pedido é R$ " << preco << endl;
    	cout << "------------------------------------\n";
    	
    	cout << "Deseja proteína em dobro? (+R$ 16,00)\n";
    	cout << "S - Sim\n";
    	cout << "N - Não\n";
    	cin >> prot_dobro;
    	
    	if (prot_dobro != 's') {
    		if (prot_dobro != 'S') {
    			if (prot_dobro != 'n') {
    				if (prot_dobro != 'N') {
    					cout << "Opção inválida, digite um caracter válido: ";
    					cin >> prot_dobro;
					}
				}
			}
		}
		
    	if (prot_dobro == 1) {
    		preco = preco + 16;
    		cout << "Seu poke terá proteína em dobro!\n";
    		cout << "------------------------------------\n";
    		cout << "O valor atual do seu pedido é R$ " << preco << endl;
		}

		cout << "------------------------------------\n\n";
		
		cout << "NUT\n\n";
		cout << "Escolha um nut:\n";
   	 	cout << "1 - Amêndoa laminada\n";
    	cout << "2 - Castanha de caju\n";
    	cout << "3 - Castanha do Pará\n";
    	cout << "4 - Ervilha wasabi\n";
    	cout << "5 - Milho crunch\n";
    	cout << "6 - Sem nut\n\n";
		cout << "------------------------------------\n";
		
		cout << "Digite a nut do poke " << contador << ": ";
        cin >> nut;
        
        if (nut > 6 || nut < 1) {
        	cout << "Opção inválida, digite um valor correto: ";
            cin >> nut;
    	}
        
        cout << "------------------------------------\n";
        cout << "O valor atual do seu pedido é R$ " << preco << endl;
    	cout << "------------------------------------\n\n";
    	
        cout << "MOLHO\n\n";
		cout << "Escolha um molho:\n";
    	cout << "1 - Fresh Lime\n";
    	cout << "2 - Mostarda e mel\n";
    	cout << "3 - Ponzu\n";
    	cout << "4 - Shoyo\n";
    	cout << "5 - Tarê\n";
    	cout << "6 - Sem molho\n\n";
		cout << "------------------------------------\n";
		
		cout << "Digite o molho do poke " << contador << ": ";
        cin >> molho;
        
        if (molho > 6 || molho < 1) {
        	cout << "Opção inválida, digite um valor correto: ";
            cin >> molho;
    	}
        
        cout << "------------------------------------\n";
        cout << "O valor atual do seu pedido é R$ " << preco << endl;
    	cout << "------------------------------------\n\n";
    	cout << "REVISÃO\n";
    	cout << "Vamos revisar seu poke " << contador << "!";
    	
    	cout << "\n\n------------------------------------\n";
    	cout << "TAMANHO\n";
    	
    	switch (tamanho) {
            case 1:
                cout << "Seu poke será do tamanho pequeno (R$ 30,00)\n";
                break;
            case 2:
              	cout << "Seu poke será do tamanho médio (R$ 35,00)\n";
                break;
            case 3:
                cout << "Seu poke será do tamanho grande (R$ 40,00)\n";
                break;
        }
        
        cout << "------------------------------------\n";
        cout << "BASES\n";
        
        switch (base1) {
            case 1:
                cout << "A primeira base é arroz japonês\n";
                break;
            case 2:
                cout << "A primeira base é arroz integral\n";
                break;
            case 3:
                cout << "A primeira base é espaguete de abobrinha\n";
                break;
            case 4:
                cout << "A primeira base é mix de folhas\n";
                break;
            case 5:
                cout << "A primeira base é quinoa (+R$ 3,00)\n";
                break;
			}
			
		switch (base2) {
            case 1:
               	cout << "A segunda base é arroz japonês\n";
               	break;
            case 2:
                cout << "A segunda base é arroz integral\n";
                break;
          	case 3:
               	cout << "A segunda base é espaguete de abobrinha\n";
           		break;
           	case 4:
                cout << "A segunda base é mix de folhas\n";
                break;
            case 5:
                cout << "A segunda base é quinoa (+R$ 3,00)\n";
                break;
            case 6: 
            	cout << "Seu poke terá apenas uma base\n";
            	break;
        }
        
        cout << "------------------------------------\n";
        cout << "TOPPINGS\n";
        
        switch (topping1) {
        	case 1:
            	cout << "O primeiro topping é abacate\n";
            	break;
        	case 2:
            	cout << "O primeiro topping é cenoura\n";
            	break;
        	case 3:
            	cout << "O primeiro topping é cream cheese\n";
            	break;
        	case 4:
            	cout << "O primeiro topping é kani\n";
            	break;
        	case 5:
            	cout << "O primeiro topping é pepino\n";
            	break;
        	case 6:
            	cout << "O primeiro topping é sunomono (+R$ 1,00)\n";
            	break;
        	case 7:
            	cout << "O primeiro topping é tomate cereja\n";
            	break;
        	case 8:
            	cout << "O primeiro topping é wakame (+R$ 1,00)\n";
            	break;
            case 9:
            	cout << "Seu poke não terá toppings\n";
            	break;
    	}
    	
    	if (topping1 != 9) {
    		switch (topping2) {
        		case 1:
            		cout << "O segundo topping é abacate\n";
            		break;
        		case 2:
            		cout << "O segundo topping é cenoura\n";
            		break;
        		case 3:
            		cout << "O segundo topping é cream cheese\n";
            		break;
        		case 4:
            		cout << "O segundo topping é kani\n";
            		break;
        		case 5:
            		cout << "O segundo topping é pepino\n";
            		break;
        		case 6:
            		cout << "O segundo topping é sunomono (+R$ 1,00)\n";
            		break;
        		case 7:
            		cout << "O segundo topping é tomate cereja\n";
            		break;
        		case 8:
            		cout << "O segundo topping é wakame (+R$ 1,00)\n";
            		break;
           		case 9:
            		cout << "Seu poke terá apenas um topping\n";
            		break;
    		}
    	}
    	
    	if (topping1 != 9 && topping2 != 9) {
    		switch (topping3) {
        		case 1:
           			cout << "O terceiro topping é abacate\n";
           			break;
       			case 2:
            		cout << "O terceiro topping é cenoura\n";
           			break;
        		case 3:
            		cout << "O terceiro topping é cream cheese\n";
            		break;
        		case 4:
            		cout << "O terceiro topping é kani\n";
            		break;
        		case 5:
            		cout << "O terceiro topping é pepino\n";
            		break;
        		case 6:
            		cout << "O terceiro topping é sunomono (+R$ 1,00)\n";
            		break;
        		case 7:
           	 		cout << "O terceiro topping é tomate cereja\n";
            		break;
        		case 8:
            		cout << "O terceiro topping é wakame (+R$ 1,00)\n";
            		break;
            	case 9:
            		cout << "Seu poke terá apenas dois toppings\n";
            		break;
			}
		}
		
		cout << "------------------------------------\n";
		cout << "CRUNCHIES\n";
		
		switch (crunch1) {
    		case 1:
    			cout << "O primeiro crunch é chips de banana\n";
    			break;
    		case 2:
    			cout << "O primeiro crunch é chips de batata doce\n";
    			break;
    		case 3:
    			cout << "O primeiro crunch é cebola crispy\n";
    			break;
    		case 4:
    			cout << "O primeiro crunch é nori\n";
    			break;
    		case 5:
    			cout << "Seu poke não terá crunches\n";
    			break;
		}
		
		if (crunch1 != 5) {
			switch (crunch2) {
    			case 1:
    				cout << "O segundo crunch é chips de banana\n";
    				break;
    			case 2:
    				cout << "O segundo crunch é chips de batata doce\n";
    				break;
    			case 3:
    				cout << "O segundo crunch é cebola crispy\n";
    				break;
    			case 4:
    				cout << "O segundo crunch é nori\n";
    				break;
    			case 5:
    				cout << "Seu poke terá apenas um crunch\n";
    				break;
			}
		}
		
		cout << "------------------------------------\n";
		cout << "PROTEÍNAS\n";
		
		switch (proteina1) {
            case 1:
                cout << "A primeira proteína é atum\n";
                break;
            case 2:
                cout << "A primeira proteína é ceviche havaiano\n";
                break;
            case 3:
                cout << "A primeira proteína é frango desfiado\n";
                break;
            case 4:
                cout << "A primeira proteína é ovo de codorna\n";
                break;
            case 5:
                cout << "A primeira proteína é salmão grelhado (+R$ 2,00)\n";
                break;
        }
        
        switch (proteina2) {
            case 1:
               	cout << "A segunda proteína é atum\n";
               	break;
            case 2:
                cout << "A segunda proteína é ceviche havaiano\n";
                break;
          	case 3:
               	cout << "A segunda proteína é frango desfiado\n";
           		break;
           	case 4:
                cout << "A segunda proteína é ovo de codorna\n";
                break;
            case 5:
                cout << "A segunda proteína é salmão grelhado (+R$ 2,00)\n";
                break;
            case 6: 
            	cout << "Seu poke terá apenas uma proteína\n";
            	break;
        }
        
        if (prot_dobro == 1) {
    		cout << "Seu poke terá proteína em dobro! (+R$ 16,00)\n";
		}
		
		cout << "------------------------------------\n";
		cout << "NUT\n";
		
		switch (nut) {
            case 1:
                cout << "A nut é amêndoa laminada\n";
                break;
            case 2:
                cout << "A nut é castanha de caju\n";
                break;
            case 3:
                cout << "A nut é castanha do Pará\n";
                break;
            case 4:
                cout << "A nut é ervilha wasabi\n";
                break;
            case 5:
                cout << "A nut é milho crunch\n";
                break;
            case 6:
            	cout << "Seu poke não terá nut\n";
            	break;
        }
        
        cout << "------------------------------------\n";
		cout << "MOLHO\n";
        
        switch (molho) {
            case 1:
                cout << "O molho é fresh lime\n";
                break;
            case 2:
                cout << "O molho é mostarda e mel\n";
                break;
            case 3:
                cout << "O molho é ponzu\n";
                break;
            case 4:
                cout << "O molho é shoyo\n";
                break;
            case 5:
                cout << "O molho é tarê\n";
                break;
            case 6:
            	cout << "Seu poke não terá molho\n";
            	break;
        }
        
        if (qtd_pokes == 1) {
        	cout << "------------------------------------\n";
        	cout << "O valor do seu pedido é R$ " << preco << endl;
    		cout << "------------------------------------\n";
		} else {
			cout << "------------------------------------\n";
       		cout << "O valor atual do seu pedido é R$ " << preco << endl;
    		cout << "------------------------------------\n";
		}
	}
	
	if (qtd_pokes != 1) {
		cout << "------------------------------------\n";
		cout << "FINALIZANDO..." << endl;
   		cout << "O valor total é R$ " << preco << endl;
    	cout << "------------------------------------\n";
	}
	
	cout << "Já estamos preparando seu pedido!\n";
	cout << "Obrigado pela preferência!";
}

