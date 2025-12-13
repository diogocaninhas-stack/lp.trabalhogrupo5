
/**
 * @mainpage Trabalho de Laboratorio de Programacao - Grupo 5(PL4)
 *
 * @section intro Introdução
 * O objetivo deste trabalho é desenvolver um programa capaz de pedir ao
utilizador 18 números inteiros, dentro do intervalo entre –1 e 18, e guardá-
los num vetor. Depois de inseridos e validados os valores, o programa apre-
senta um menu através do qual o utilizador pode realizar várias operações.
Entre estas operações incluem-se: a construção de uma matriz 18×18, onde
a primeira linha corresponde ao vetor introduzido e as restantes resultam de
permutações dos seus elementos; o cálculo da raiz quadrada de todos os va-
lores do vetor; a devolução do vetor com a primeira metade ordenada por
ordem crescente; o cálculo da soma entre os elementos da primeira metade
e da segunda metade; a determinação da mediana; e a apresentação apenas
dos valores que não são divisíveis por três.
Para além do objetivo principal, o projeto inclui também uma versão mais
elaborada, com funcionalidades adicionais que devem ser integradas no menu.
Entre elas está a leitura de um novo vetor e a criação de um vetor misto com-
posto por metade do vetor original e metade do vetor recém-lido; a decompo-
sição dos valores do vetor inicial em números primos; a geração de um vetor
aleatório 1×18 e o cálculo da matriz 18×18 resultante do produto entre esse
vetor e o vetor inicial; e ainda o cálculo da matriz transposta obtida a partir
desse produto. Para ajudar o utilizador, o programa inclui também uma pá-
gina de ajuda acessível através da opção 7 do menu, bem como instruções
adicionais quando é executado pela linha de comandos usando a flag.
 *
 * @section features Funcionalidades
 * - Leitura e escrita de vetores
 * - Ordenação e cálculo de mediana
 * - Identificação de números primos
 * - Construção e transposição de matrizes 18x18
 * - Calculo da raíz quadrada
 * - Devolução do vetor,  com a primeira  metade dos valores ordenada por ordem crescente
 * - Cálculo  da  soma  da  primeira metade  dos  elementos no  vetor com os da segunda metade (dá um vetor com metado do tamanho)
 * - Devolução dos valores do vetor que não são divisíveis por três
 * - Devolução de um  vetor que  mistura  metade do primeiro vetor e metade do segundo
 * - Cálculo e apresentação da matriz transposta
 * - Apresentação de uma página de ajuda
 * @section usage Como usar
 * 1. Compilar com `make`
 * 2. Executar `./main.exe`
 *
 * @section structure Estrutura do Código
 * - `functions-team-x.h` — Declarações das funções
 * - `functions-team-x.c` — Implementações das funções
 * - `mainx.c` - Programa principal
 * @section authors Autores
 * - Diogo Silva 55981
 * - Gabriel Nogueira 55838
 * - Gabriel Caetano 55915
 * - Alexandre Santos 56019
 */
