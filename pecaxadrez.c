#include <stdio.h>

/*
	Simulação de movimentos de peças de xadrez usando técnicas de recursividade e loops aninhados.

	Peças simuladas:
	- Torre: recursividade -> 5 casas para a direita
	- Bispo: recursividade + loops aninhados (externo vertical, interno horizontal) -> 5 passos diagonais para cima e direita
	- Rainha: recursividade -> 8 casas para a esquerda
	- Cavalo: loops aninhados com múltiplas variáveis/condições (com continue/break) -> 2 casas para cima e 1 para a direita

	Regras de saída:
	- Imprimir a direção a cada casa percorrida usando printf, uma direção por linha.
	- Separar a saída de cada peça com uma linha em branco.

	Apenas variáveis do tipo inteiro e strings (char*) são utilizadas.
*/

/* Assinaturas das funções recursivas */
void moverTorreDireitaRecursivo(int passosRestantes, const char *direcaoDireita);
void moverBispoCimaDireitaRecursivo(int passosRestantes, const char *direcaoCima, const char *direcaoDireita);
void moverRainhaEsquerdaRecursivo(int passosRestantes, const char *direcaoEsquerda);
void moverCavaloCimaDireitaComplexo(int casasCima, int casasDireita, const char *direcaoCima, const char *direcaoDireita);

int main(void) {
	/* Quantidade de casas para cada peça */
	int casasTorre = 5;
	int casasBispo = 5;
	int casasRainha = 8;

	/* Direções representadas como strings */
	const char *CIMA = "Cima";
	const char *BAIXO = "Baixo";
	const char *DIREITA = "Direita";
	const char *ESQUERDA = "Esquerda";

	/* Torre (recursivo): 5 casas para a direita */
	moverTorreDireitaRecursivo(casasTorre, DIREITA);

	/* Separador */
	printf("\n");

	/* Bispo (recursivo + loops aninhados): 5 passos diagonais Cima + Direita */
	moverBispoCimaDireitaRecursivo(casasBispo, CIMA, DIREITA);

	/* Separador */
	printf("\n");

	/* Rainha (recursivo): 8 casas para a esquerda */
	moverRainhaEsquerdaRecursivo(casasRainha, ESQUERDA);

	/* Separador */
	printf("\n");

	/* Cavalo (loops aninhados complexos): 2 casas para cima e 1 para a direita */
	int casasCimaCavalo = 2;
	int casasDireitaCavalo = 1;
	moverCavaloCimaDireitaComplexo(casasCimaCavalo, casasDireitaCavalo, CIMA, DIREITA);

	/* Interface simples: usuário escolhe peça (3 opções) e direção */
	printf("\n");
	printf("Escolha a peça para mover:\n");
	printf("1 - Torre\n");
	printf("2 - Bispo\n");
	printf("3 - Rainha\n");
	printf("Opção: ");
	int opcaoPeca = 0;
	scanf("%d", &opcaoPeca);

	printf("\n");
	if (opcaoPeca == 1) {
		/* Torre: direção cardinal */
		printf("Direção (1-Cima, 2-Baixo, 3-Esquerda, 4-Direita): ");
		int opcaoDirecao = 0;
		scanf("%d", &opcaoDirecao);
		const char *dir = DIREITA;
		switch (opcaoDirecao) {
			case 1: dir = CIMA; break;
			case 2: dir = BAIXO; break;
			case 3: dir = ESQUERDA; break;
			case 4: dir = DIREITA; break;
			default: dir = DIREITA; break;
		}
		printf("\n");
		moverTorreDireitaRecursivo(casasTorre, dir);
	} else if (opcaoPeca == 2) {
		/* Bispo: direção diagonal (vertical + horizontal) */
		printf("Direção diagonal (1-Cima Direita, 2-Cima Esquerda, 3-Baixo Direita, 4-Baixo Esquerda): ");
		int opcaoDirecao = 0;
		scanf("%d", &opcaoDirecao);
		const char *vert = CIMA;
		const char *horiz = DIREITA;
		switch (opcaoDirecao) {
			case 1: vert = CIMA; horiz = DIREITA; break;
			case 2: vert = CIMA; horiz = ESQUERDA; break;
			case 3: vert = BAIXO; horiz = DIREITA; break;
			case 4: vert = BAIXO; horiz = ESQUERDA; break;
			default: vert = CIMA; horiz = DIREITA; break;
		}
		printf("\n");
		moverBispoCimaDireitaRecursivo(casasBispo, vert, horiz);
	} else if (opcaoPeca == 3) {
		/* Rainha: direção cardinal */
		printf("Direção (1-Cima, 2-Baixo, 3-Esquerda, 4-Direita): ");
		int opcaoDirecao = 0;
		scanf("%d", &opcaoDirecao);
		const char *dir = ESQUERDA;
		switch (opcaoDirecao) {
			case 1: dir = CIMA; break;
			case 2: dir = BAIXO; break;
			case 3: dir = ESQUERDA; break;
			case 4: dir = DIREITA; break;
			default: dir = ESQUERDA; break;
		}
		printf("\n");
		moverRainhaEsquerdaRecursivo(casasRainha, dir);
	}

	return 0;
}

/*
	Função recursiva: Torre para a direita.
	Imprime "Direita" até consumir todos os passos.
*/
void moverTorreDireitaRecursivo(int passosRestantes, const char *direcaoDireita) {
	if (passosRestantes <= 0) {
		return;
	}
	printf("%s\n", direcaoDireita);
	moverTorreDireitaRecursivo(passosRestantes - 1, direcaoDireita);
}

/*
	Função recursiva: Bispo na diagonal para cima e direita.
	Cada chamada recursiva realiza um passo diagonal composto de dois subpassos
	usando loops aninhados (externo vertical, interno horizontal).
*/
void moverBispoCimaDireitaRecursivo(int passosRestantes, const char *direcaoCima, const char *direcaoDireita) {
	if (passosRestantes <= 0) {
		return;
	}
	/* Loops aninhados: externo (vertical), interno (horizontal) */
	for (int vertical = 0; vertical < 1; vertical++) {
		for (int horizontal = 0; horizontal < 1; horizontal++) {
			/* Duas direções imprimidas como dois passos distintos */
			printf("%s\n", direcaoCima);
			printf("%s\n", direcaoDireita);
		}
	}
	moverBispoCimaDireitaRecursivo(passosRestantes - 1, direcaoCima, direcaoDireita);
}

/*
	Função recursiva: Rainha para a esquerda.
*/
void moverRainhaEsquerdaRecursivo(int passosRestantes, const char *direcaoEsquerda) {
	if (passosRestantes <= 0) {
		return;
	}
	printf("%s\n", direcaoEsquerda);
	moverRainhaEsquerdaRecursivo(passosRestantes - 1, direcaoEsquerda);
}

/*
	Cavalo: loops aninhados com múltiplas variáveis/condições, utilizando continue/break.
	Objetivo: 2 casas para Cima e 1 casa para Direita, imprimindo a direção por casa.
*/
void moverCavaloCimaDireitaComplexo(int casasCima, int casasDireita, const char *direcaoCima, const char *direcaoDireita) {
	/* for externo controla os segmentos (vertical depois horizontal) e carrega múltiplas variáveis */
	for (int segmento = 0, totalSegmentos = 2; segmento < totalSegmentos; segmento++) {
		int alvo = (segmento == 0) ? casasCima : casasDireita;
		int passosDados = 0;
		int protecaoLoop = 0; /* evita loops infinitos */

		/* while interno executa os passos do segmento atual */
		while (passosDados < alvo) {
			/* condição artificial para demonstrar continue sem afetar a lógica desejada */
			if (alvo < 0) {
				/* não ocorre no nosso cenário, mas demonstra controle de fluxo */
				continue;
			}

			if (segmento == 0) {
				/* segmento vertical: Cima */
				printf("%s\n", direcaoCima);
				passosDados++;
				/* exemplo de continue: volta ao topo do while imediatamente */
				continue;
			} else {
				/* segmento horizontal: Direita */
				if (alvo == 0) {
					break; /* nada a fazer */
				}
				printf("%s\n", direcaoDireita);
				passosDados++;
			}

			protecaoLoop++;
			if (protecaoLoop > 100) {
				break; /* proteção de segurança */
			}
		}
	}
}
