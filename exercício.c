// Pedir ao usuário o preço unitário de um item e a quantidade desejada
// Calcular o total do pedido
//Exibir o total do pedido e atualizar o contador global de pedidos
// Perguntar ao usuário se deseja fazer outro pedido e repetir o processo até que ele escolha sair
// Exibir o número total de pdidos feitos antes de encerrar

#include <stdio.h>

int total_pedidos = 0; // variável global, por isso foi declarada fora 

// Função para calcular o valor de um pedido
void pedido() {
    float valor_unitario; // variável local
    int quantidade;       // variável local
    float total;          // variável local

    printf("Digite o preço unitário do item escolhido: ");
    scanf("%f", &valor_unitario);

    printf("Digite a quantidade desejada: ");
    scanf("%d", &quantidade);

    // cálculo do valor total do pedido (variáveis locais)
    total = valor_unitario * quantidade;

    // atualiza o número total de pedidos
    total_pedidos++; // como é uma variável global, pode ser usada dentro da função

    // exibindo o resultado
    printf("O total do seu pedido ficou em R$ %.2f\n", total);
    printf("Número total de pedidos até agora: %d\n\n", total_pedidos);
}

// função / programa principal
int main() {
    char opcao; // variável local

    printf("***************************\n");
    printf("CALCULO DE PEDIDOS DO MENU\n");
    printf("***************************\n");

    // loop para permitir vários pedidos
    do {
        pedido();

        printf("Deseja fazer outro pedido? S para sim e N para não: ");
        scanf(" %c", &opcao);
    } while (opcao == 's' || opcao == 'S');

    // Exibe o número total de pedidos antes de encerrar o programa 
    printf("\nTotal de pedidos realizados: %d\n", total_pedidos);
    printf("Encerrando o sistema...\n");

    return 0;
}
