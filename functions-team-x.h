
#ifndef FUNCTIONS_TEAM_X_H
#define FUNCTIONS_TEAM_X_H


/**
 * @brief Apresenta o menu principal da aplicação.
 * @note Imprime opções e lê a escolha do utilizador.
 */
void menu(void);

/**
 * @brief Escreve um vetor de inteiros no ecrã.
 * @param valores Vetor de inteiros a imprimir.
 * @note O tamanho do vetor é 18.
 */
void escreverarray(int valores[]);

/**
 * @brief Lê valores do utilizador.
 * @param valores Vetor de inteiros onde serão armazenados os dados lidos.
 * @note O tamanho do vetor é 18.
 */
void lerarray(int valores[]);

/**
 * @brief Calcula a mediana de um vetor de inteiros.
 * @param valores Vetor de inteiros.
 * @param tamanho Número de elementos no vetor.
 * @return A mediana dos valores como `double`.
 */
double mediana(int valores[], int tamanho);

/**
 * @brief Ordena um vetor de inteiros (ordem crescente).
 * @param valores Vetor a ordenar (modificado in-place).
 * @param tamanho Número de elementos do vetor.
 */
void ordenar(int valores[], int tamanho);

/**
 * @brief Mostra os elementos do vetor que são divisíveis por 3.
 * @param valores Vetor de inteiros.
 * @param tamanho Número de elementos.
 */
void divisiveis3(int valores[], int tamanho);

/**
 * @brief Mistura a primeira metade do primeiro vetor com a segunda metade do segundo vetor.
 * @param v novo vetor(ou segundo vetor usado na mistura).
 * @param valores Vetor origem (ou primeiro vetor usado na mistura).
 * @param tamanho Número de elementos considerados.
 */
void mistura(int v[], int valores[], int tamanho);

/**
 * @brief Construção de uma matriz 18 por 18, em que cada linha é composta pelo vetor lido (primeira linha) e por permutações dos seus valores (outras linhas).
 * @param valores Vetor de 18 inteiros.
 * @param matriz Matriz 18x18 de inteiros (saída).
 */
void matriz18x18(const int valores[18], int matriz[18][18]);

/**
 * @brief Devolução da matriz 18x18 resultante do produto do vetor inicial com o novo vetor lido.
 * @param matriz Matriz 18x18 de inteiros.
 */
void mostrarmatriz(const int matriz[18][18]);

/**
 * @brief Ordena a primeira metade de um vetor de forma crecente.
 * @param vetor Vetor de inteiros a ordenar.
 * @param tamanho Número total de elementos.
 * @note A segunda metade fica igual.
 */
void ordenarPrimeiraMetade(int vetor[], int tamanho);

/**
 * @brief soma  da  primeira metade  dos  elementos no  vetor com os da segunda metade .
 * @param vetor Vetor de inteiros de entrada.
 * @param tamanho Número total de elementos.
 * @param resultado Vetor de saída com os resultados da soma por posição.
 * @note Dá um vetor com metade do tamanho.
 */
void somaMetades(int vetor[], int tamanho, int resultado[]);

/**
 * @brief Mostra um vetor no ecrã.
 * @param v Vetor de inteiros.
 * @param tamanho Número de elementos.
 */
void mostrarVetor(const int v[], int tamanho);

/**
 * @brief Mostra o vetor da somaMetades
 * @param vetor Vetor de inteiros.
 * @param tamanho Número de elementos.
 */
void mostrarVetormetades(int vetor[], int tamanho);

/**
 * @brief Calcula a raiz quadrada.
 * @param valores Vetor de inteiros.
 * @param tamanho Número de elementos.
 */
void raizquadrada(int valores[], int tamanho);

/**
 * @brief Identifica e/ou mostra números primos do vetor.
 * @param valores Vetor de inteiros.
 * @param tamanho Número de elementos.
 */
void numerosprimos(int valores[], int tamanho);

/**
 * @brief Verifica se um número é primo.
 * @param n Número inteiro a testar.
 * @note Função que complementa a função numerosprimos.
 */
int primo(int n);

/**
 * @brief cálculo da matriz 18x18 resultante do produto do vetor inicial com o novo vetor lido
 * @param v1 Vetor de inteiros.
 * @param v2 Vetor de inteiros.
 * @param matriz Matriz 18x18 (saída).
 */
void calcularMatriz(int v1[], int v2[], int matriz[18][18]);

/**
 * @brief Mostra uma matriz 18x18.
 * @param matriz Matriz 18x18.
 */
void mostrarMatriz(int matriz[18][18]);

/**
 * @brief Transpõe uma matriz 18x18 da opção anterior.
 * @param M Matriz original 18x18.
 * @param MT Matriz transposta 18x18 (saída).
 * @warning Só disponível se a opção anterior for feita primeiro.
 */
void transporMatriz(const int M[18][18], int MT[18][18]);

/**
 * @brief Mostra a matriz transposta 18x18.
 * @param MT Matriz 18x18 transposta.
 */
void mostrarMatrizT(int MT[18][18]);

/**
 * @brief Apresenta um ecrã de ajuda com comandos/opções disponíveis.
 */
void mostrarAjuda(void);

#ifdef __cplusplus
}
#endif

#endif /* FUNCTIONS_TEAM_X_H */
