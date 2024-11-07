#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h> // Para a função sleep()

int main() {
    printf("============== JOGUINHO JOKEMPO ==============\n");

    const char *items[] = {"PEDRA", "PAPEL", "TESOURA"};
    int comp, op;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));
    comp = rand() % 3;

    printf("[ 0 ] PEDRA\n");
    printf("[ 1 ] PAPEL\n");
    printf("[ 2 ] TESOURA\n");
    printf("Sua escolha: ");
    scanf("%d", &op);

    // "JO-KEM-PO" com pausas entre as falas
    printf("JO\n");
    sleep(1);
    printf("KEM\n");
    sleep(1);
    printf("PO\n");
    
    printf("-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("O computador escolheu %s\n", items[comp]);
    printf("O jogador escolheu %s\n", items[op]);
    printf("-=-=-=-=-=-=-=-=-=-=-=-\n");

    // Determina o resultado do jogo
    if (comp == 0) { // Computador escolhe PEDRA
        if (op == 0) {
            printf("EMPATE\n");
        } else if (op == 1) {
            printf("JOGADOR VENCE!!\n");
        } else if (op == 2) {
            printf("COMPUTADOR VENCE!!\n");
        } else {
            printf("OPÇÃO INVALIDA\n");
        }
    } else if (comp == 1) { // Computador escolhe PAPEL
        if (op == 0) {
            printf("COMPUTADOR VENCE!!\n");
        } else if (op == 1) {
            printf("EMPATE\n");
        } else if (op == 2) {
            printf("JOGADOR VENCE!!\n");
        } else {
            printf("OPÇÃO INVALIDA\n");
        }
    } else if (comp == 2) { // Computador escolhe TESOURA
        if (op == 0) {
            printf("JOGADOR VENCE!!!\n");
        } else if (op == 1) {
            printf("COMPUTADOR VENCE!!\n");
        } else if (op == 2) {
            printf("EMPATE\n");
        } else {
            printf("OPÇÃO INVALIDA\n");
        }
    } else {
        printf("OPÇÃO INVALIDA\n");
    }

    sleep(3); // Espera de 3 segundos antes de encerrar o programa
    return 0;
}

