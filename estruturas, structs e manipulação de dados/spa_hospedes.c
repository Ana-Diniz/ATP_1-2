#include <stdio.h>
#define MAX_HOSPEDES 20
#define MAX_DIAS 30

typedef struct {
    int numeroFicha;
    char nome[100];
    int idade;
    float pesoEntrada;
    float pesoSaida;
    float caloriasDiarias;
    int diasTratamento;
} Hospede;

Hospede hospedes[MAX_HOSPEDES];
int totalHospedes = 0;

void cadastrarHospede() {
    if (totalHospedes >= MAX_HOSPEDES) {
        printf("Capacidade máxima de hóspedes atingida.\n");
        return;
    }
    Hospede h;
    h.numeroFicha = totalHospedes + 1;
    printf("Cadastro do hóspede número %d\n", h.numeroFicha);
    printf("Nome: ");
    if (scanf(" %[^\n]s", h.nome) != 1) {
        printf("Erro ao ler o nome.\n");
        return;
    }
    printf("Idade: ");
    scanf("%d", &h.idade);
    printf("Peso ao entrar: ");
    scanf("%f", &h.pesoEntrada);
    h.pesoSaida = 0.0;
    printf("Calorias diárias permitidas: ");
    scanf("%f", &h.caloriasDiarias);
    printf("Dias de tratamento (máximo 30 dias): ");
    scanf("%d", &h.diasTratamento);
    if (h.diasTratamento > MAX_DIAS) {
        h.diasTratamento = MAX_DIAS;
    }
    hospedes[totalHospedes] = h;
    totalHospedes++;
}

void exibirHospedes() {
    if (totalHospedes == 0) {
        printf("Nenhum hóspede cadastrado.\n");
        return;
    }
    for (int i = 0; i < totalHospedes; i++) {
        printf("\n--- Dados do hóspede número %d ---\n", hospedes[i].numeroFicha);
        printf("Nome: %s\n", hospedes[i].nome);
        printf("Idade: %d\n", hospedes[i].idade);
        printf("Peso ao entrar: %.2f kg\n", hospedes[i].pesoEntrada);
        if (hospedes[i].pesoSaida != 0.0) {
            printf("Peso ao sair: %.2f kg\n", hospedes[i].pesoSaida);
        } else {
            printf("Peso ao sair: Não registrado\n");
        }
        printf("Calorias diárias: %.2f\n", hospedes[i].caloriasDiarias);
        printf("Dias de tratamento: %d\n", hospedes[i].diasTratamento);
    }
}

void darAlta() {
    int numeroFicha;
    float pesoSaida;
    if (totalHospedes == 0) {
        printf("Nenhum hóspede cadastrado.\n");
        return;
    }
    printf("Digite o número da ficha do paciente que receberá alta: ");
    scanf("%d", &numeroFicha);
    if (numeroFicha < 1 || numeroFicha > totalHospedes) {
        printf("Número de ficha inválido.\n");
        return;
    }
    Hospede *h = &hospedes[numeroFicha - 1];
    if (h->pesoSaida != 0.0) {
        printf("O paciente já recebeu alta.\n");
        return;
    }
    printf("Digite o peso ao sair (em gramas): ");
    scanf("%f", &pesoSaida);
    pesoSaida /= 1000.0;
    h->pesoSaida = pesoSaida;
    float pesoPerdido = h->pesoEntrada - h->pesoSaida;
    printf("Paciente %s recebeu alta.\n", h->nome);
    printf("Peso ao entrar: %.2f kg\n", h->pesoEntrada);
    printf("Peso ao sair: %.2f kg\n", h->pesoSaida);
    printf("Peso perdido: %.2f kg\n", pesoPerdido);
}

int main() {
    int opcao;
    do {
        printf("\n--- Menu do Spa Rei Momo ---\n");
        printf("1. Cadastrar novo hóspede\n");
        printf("2. Exibir todos os hóspedes\n");
        printf("3. Dar alta a um hóspede\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1: cadastrarHospede(); break;
            case 2: exibirHospedes(); break;
            case 3: darAlta(); break;
            case 4: printf("Saindo...\n"); break;
            default: printf("Opção inválida.\n");
        }
    } while (opcao != 4);
    return 0;
}