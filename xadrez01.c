    #include <stdio.h>
    #include <stdlib.h>

    // Constantes para facilitar a escrita do código
    #define TAMANHO_TABULEIRO 8
    #define MAX_MOVIMENTOS 7  // Máximo de casas que uma peça pode mover (8 posições - 1 posição inicial)

    // Função para simular movimento do Bispo (usando FOR)
    void movimentoBispo() {
        int i, casas, direcao;
        
        printf("♝ BISPO - Movimento Diagonal\n");
        printf("Escolha a direção do movimento:\n");
        printf("1. Cima Esquerda\n");
        printf("2. Cima Direita\n");
        printf("3. Baixo Esquerda\n");
        printf("4. Baixo Direita\n");
        printf("Digite sua escolha (1-4): ");
        scanf("%d", &direcao);
        
        printf("Quantas casas você quer mover o Bispo? (máximo %d): ", MAX_MOVIMENTOS);
        scanf("%d", &casas);
        
        // Validação do limite de movimentos
        if (casas <= 0 || casas > MAX_MOVIMENTOS) {
            printf("Erro: O número de casas deve estar entre 1 e %d!\n\n", MAX_MOVIMENTOS);
            return;
        }
        
        printf("Bispo movendo %d casas: ", casas);
        
        switch (direcao) {
            case 1:
                printf("(Cima Esquerda)\n");
                break;
            case 2:
                printf("(Cima Direita)\n");
                break;
            case 3:
                printf("(Baixo Esquerda)\n");
                break;
            case 4:
                printf("(Baixo Direita)\n");
                break;
            default:
                printf("(Direção inválida)\n");
                return;
        }
        
        for (i = 1; i <= casas; i++) {
            switch (direcao) {
                case 1:
                    printf("Cima, Esquerda\n");
                    break;
                case 2:
                    printf("Cima, Direita\n");
                    break;
                case 3:
                    printf("Baixo, Esquerda\n");
                    break;
                case 4:
                    printf("Baixo, Direita\n");
                    break;
            }
        }
        printf("\n");
    }

    // Função para simular movimento da Torre (usando WHILE)
    void movimentoTorre() {
        int i = 1, casas, direcao;
        
        printf("♜ TORRE - Movimento Horizontal/Vertical\n");
        printf("Escolha a direção do movimento:\n");
        printf("1. Cima\n");
        printf("2. Baixo\n");
        printf("3. Esquerda\n");
        printf("4. Direita\n");
        printf("Digite sua escolha (1-4): ");
        scanf("%d", &direcao);
        
        printf("Quantas casas você quer mover a Torre? (máximo %d): ", MAX_MOVIMENTOS);
        scanf("%d", &casas);
        
        // Validação do limite de movimentos
        if (casas <= 0 || casas > MAX_MOVIMENTOS) {
            printf("Erro: O número de casas deve estar entre 1 e %d!\n\n", MAX_MOVIMENTOS);
            return;
        }
        
        printf("Torre movendo %d casas: ", casas);
        
        switch (direcao) {
            case 1:
                printf("(Cima)\n");
                break;
            case 2:
                printf("(Baixo)\n");
                break;
            case 3:
                printf("(Esquerda)\n");
                break;
            case 4:
                printf("(Direita)\n");
                break;
            default:
                printf("(Direção inválida)\n");
                return;
        }
        
        while (i <= casas) {
            switch (direcao) {
                case 1:
                    printf("Cima\n");
                    break;
                case 2:
                    printf("Baixo\n");
                    break;
                case 3:
                    printf("Esquerda\n");
                    break;
                case 4:
                    printf("Direita\n");
                    break;
            }
            i++;
        }
        printf("\n");
    }

    // Função para simular movimento da Rainha (usando DO-WHILE)
    void movimentoRainha() {
        int i = 1, casas, direcao;
        
        printf("♕ RAINHA - Movimento Livre\n");
        printf("Escolha a direção do movimento:\n");
        printf("1. Cima\n");
        printf("2. Baixo\n");
        printf("3. Esquerda\n");
        printf("4. Direita\n");
        printf("5. Cima Esquerda\n");
        printf("6. Cima Direita\n");
        printf("7. Baixo Esquerda\n");
        printf("8. Baixo Direita\n");
        printf("Digite sua escolha (1-8): ");
        scanf("%d", &direcao);
        
        printf("Quantas casas você quer mover a Rainha? (máximo %d): ", MAX_MOVIMENTOS);
        scanf("%d", &casas);
        
        // Validação do limite de movimentos
        if (casas <= 0 || casas > MAX_MOVIMENTOS) {
            printf("Erro: O número de casas deve estar entre 1 e %d!\n\n", MAX_MOVIMENTOS);
            return;
        }
        
        printf("Rainha movendo %d casas: ", casas);
        
        switch (direcao) {
            case 1:
                printf("(Cima)\n");
                break;
            case 2:
                printf("(Baixo)\n");
                break;
            case 3:
                printf("(Esquerda)\n");
                break;
            case 4:
                printf("(Direita)\n");
                break;
            case 5:
                printf("(Cima Esquerda)\n");
                break;
            case 6:
                printf("(Cima Direita)\n");
                break;
            case 7:
                printf("(Baixo Esquerda)\n");
                break;
            case 8:
                printf("(Baixo Direita)\n");
                break;
            default:
                printf("(Direção inválida)\n");
                return;
        }
        
        do {
            switch (direcao) {
                case 1:
                    printf("Cima\n");
                    break;
                case 2:
                    printf("Baixo\n");
                    break;
                case 3:
                    printf("Esquerda\n");
                    break;
                case 4:
                    printf("Direita\n");
                    break;
                case 5:
                    printf("Cima, Esquerda\n");
                    break;
                case 6:
                    printf("Cima, Direita\n");
                    break;
                case 7:
                    printf("Baixo, Esquerda\n");
                    break;
                case 8:
                    printf("Baixo, Direita\n");
                    break;
            }
            i++;
        } while (i <= casas);
        
        printf("\n");
    }

    // Função para exibir menu interativo
    void exibirMenu() {
        printf("=== MATE CHECK - JOGO DE XADREZ ===\n");
        printf("Escolha uma peça para simular o movimento:\n");
        printf("1. ♝ Bispo - Movimento Diagonal\n");
        printf("2. ♜ Torre - Movimento Horizontal/Vertical\n");
        printf("3. ♕ Rainha - Movimento Livre\n");
        printf("0. Sair\n");
        printf("Digite sua escolha: ");
    }

    int main() {
        int escolha;
        int continuar = 1;
        
        printf("Bem-vindo ao Desafio de Xadrez - MateCheck!\n");
        printf("Este programa simula movimentos de peças de xadrez usando estruturas de repetição.\n\n");
        
        // Loop principal do jogo
        while (continuar) {
            exibirMenu();
            scanf("%d", &escolha);
            
            switch (escolha) {
                case 1:
                    printf("\n");
                    movimentoBispo();
                    break;
                    
                case 2:
                    printf("\n");
                    movimentoTorre();
                    break;
                    
                case 3:
                    printf("\n");
                    movimentoRainha();
                    break;
                    
                case 0:
                    printf("\nObrigado por jogar MateCheck! Até a próxima!\n");
                    continuar = 0;
                    break;
                    
                default:
                    printf("\nOpção inválida! Tente novamente.\n\n");
                    break;
            }
            
            if (continuar) {
                printf("Pressione Enter para continuar...");
                getchar();
                getchar();
                printf("\n");
            }
        }
        
        return 0;
    }
