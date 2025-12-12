#include <stdio.h>
#include <math.h>

void menu(void)
{
    printf("Menu de opcoes:\n");
    printf("1 - Construção de uma matriz 18 por 18, em que cada linha é composta pelo vetor lido (primeira linha) e por permutações dos seus valores (outras linhas)\n");
    printf("2 -  Cálculo da raíz quadrada de todos os elementos no vetor\n");
    printf("3 - Devolução do vetor,  com a primeira  metade dos valores ordenada por ordem crescente \n");
    printf("4 - Cálculo  da  soma  da  primeira metade  dos  elementos no  vetor com os da segunda metade (dá um vetor com metado do tamanho)\n");
    printf("5 - Cálculo da mediana dos elementos no vetor\n");
    printf("6 - Devolução dos valores do vetor que não são divisíveis por três\n");
    printf("7 - Ajuda \n");
    printf("8 - Leitura de um novo vetor, e devolução de um  vetor que  mistura  metade do primeiro vetor e metade do segundo \n");
    printf("9 - Apresentação  da  decomposição  em  números  primos  dos  números no vetor inicial \n");
    printf("10 - Geração  de  um  novo  vetor  1x18   aleatório,  cálculo  e  devolução  da matriz 18x18 resultante do produto do vetor inicial com o novo vetor lido \n");
    printf("11 - Cálculo e apresentação da matriz transposta referida no ponto anterior \n");
    printf("0 - Sair\n");
}

void escreverarray(int valores[], int tamanho) 
{
    int i;
    printf("Os valores no array sao:\n");
    for (i = 0; i < 18; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");    
}


void lerarray(int valores[], int tamanho) 
{
    int i;
    printf("Introduza 18 números inteiros entre -1 e 18:\n");

    for (i = 0; i < 18; i++) {
        int numero;
        do {
            printf("%dº número: ", i + 1);
            scanf("%d", &numero);

            if (numero < -1 || numero > 18) {
                printf("Valor fora do intervalo [-1, 18]. Tente novamente.\n");
            }
        } while (numero < -1 || numero > 18);

        valores[i] = numero;
    }
    printf("Leitura concluida.\n");
}


void ordenar(int valores[], int tamanho) {
    int i, trocou;
    do {
        trocou = 0;
        for (i = 0; i < tamanho - 1; i++) {
            if (valores[i] > valores[i + 1]) {
                int tmp = valores[i];
                valores[i] = valores[i + 1];
                valores[i + 1] = tmp;
                trocou = 1;
            }
        }
    } while (trocou);
}
double mediana(int valores[], int tamanho) 
{
    ordenar(valores, tamanho); // garante que está ordenado
    if (tamanho % 2 == 0) 
    {
        int m1 = tamanho / 2 - 1;
        int m2 = tamanho / 2;
        return (valores[m1] + valores[m2]) / 2.0;
    }
}
void divisiveis3(int valores[],int tamanho)
{
    printf("Valores não divisiveis por 3:\n");
    for (int i=0;i<tamanho;i++)
    {
        if (valores[i] % 3 != 0)
        {
            printf("%d\n",valores[i]);
            
        }
        
    }
}
void mistura(int v[],int valores[],int tamanho)
{   
    printf("Primeira metade:\n");
    for (int i=0;i< tamanho/2;i++)
    {
        printf("%d",valores[i]);
    }
    printf("\n");
    printf("Segunda metade:\n");
    for (int k=tamanho/2;k<tamanho;k++)
    {
        printf("%d",v[k]);
    }
    printf("\n");
    
}
void matriz18x18(const int valores[18],int matriz[18][18])
{
//Preenchimento da primeira linha da matriz que recebe os valores do vetor
    for (int j = 0; j < 18; j++){
        matriz[0][j] = valores[j];
    }

    //Preenchimento das restantes linhas, cada linha seguinte é uma permutação da linha anterior
    for (int i = 1; i < 18; i++){
        for (int j = 0; j < 18; j++){
                int indice = j +1;
        if (indice >= 18){
            indice = indice - 18;
        }
            //Cada elemento da nova linha recebe o elemento da posição (j+1) da linha anterior e volta ao início quando atinge o final
            matriz[i][j] = matriz[i - 1][(j + 1) % 18];
        }
    }
}
void mostrarmatriz(const int matriz[18][18])
{    
//mostrar a matriz
    printf("\nMatriz 18x18 resultante:\n");
    for (int i = 0; i < 18; i++){
        for (int j = 0; j < 18; j++){
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }
}
void ordenarPrimeiraMetade(int vetor[],int tamanho) {
    // Para vetor de 18 elementos
    int metade=tamanho/2;
    //  ordena��o para a primeira metade
    for(int i = 0; i < metade - 1; i++) {
        for(int j = 0; j < metade - i - 1; j++) {
            if(vetor[j] > vetor[j + 1]) {
                // Troca os elementos
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

void mostrarVetor(const int v[], int tamanho) 
{
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}


void somaMetades(int vetor[], int tamanho, int resultado[]) 
{
    int metade = tamanho / 2;

    for(int i = 0; i < metade; i++) {
        resultado[i] = vetor[i] + vetor[i + metade];
    }
}

void mostrarVetormetades(int vetor[], int tamanho) 
{
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
void raizquadrada(int valores[],int tamanho)
{
//Cálculo da raiz quadrada
for(int i = 0; i < tamanho; i++)
{
    printf("Elemento %2d: %2d ->", i + 1, valores[i]);

    //Verifica se o número é negativo
    if (valores[i] < 0)
    {
        if (valores[i] == -1){
        printf("Raiz quadrada de um -1: numero complexo (i)\n");

        }else {
        printf("Nao ha raiz quadrada real (numero negativo)");
        }
    }
    else 
    {
        //Calcula a raiz quadrada
        double raiz = sqrt((double)valores[i]);
        printf("Raiz quadrada: %.4f\n", raiz);
    }
}
}

int primo(int n) {
    if (n < 2) return 0;        // -1, 0, 1 não são primos
    if (n == 2) return 1;       // 2 é primo
    // Teste de divisibilidade simples: 2 até n-1
    for (int d = 2; d < n; d++) {
        if (n % d == 0) return 0; // encontrou divisor => não é primo
    }
    return 1; // não encontrou divisor => primo
}

void numerosprimos(int valores[],int tamanho)
{
for (int i = 0; i < tamanho; i++) {
        int n = valores[i];
        if (primo(n)) {
            printf("%d \n", n);
        }
}
}
void calcularMatriz(int v1[], int v2[], int matriz[18][18]) 
{
    for (int i = 0; i < 18; i++) 
    {
        for (int j = 0; j < 18; j++) {
            matriz[i][j] = v1[i] * v2[j];
        }
    }

}

void mostrarMatriz(int matriz[18][18]) {
    printf("Matriz %dx%d:\n", 18, 18);
    for (int i = 0; i < 18; i++) {
        for (int j = 0; j < 18; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}
void transporMatriz(const int M[18][18], int MT[18][18]) 
{
    for (int i = 0; i < 18; i++) 
    {
        for (int j = 0; j < 18; j++) 
        {
            MT[i][j] = M[j][i];
        }
    }
}

void mostrarMatrizT(int MT[18][18]) {
    for (int i = 0; i < 18; i++) {
        for (int j = 0; j < 18; j++) {
            printf("%3d ", MT[i][j]);
        }
        printf("\n");
    }
}

void mostrarAjuda(void) {
    printf("=== AJUDA ===\n");
    printf("Este programa trabalha com um vetor de %d numeros inteiros (-1 a 18).\n\n", 18);
    printf("Regras:\n");
    printf("- Introduza %d valores entre -1 e 18 (validacao obrigatoria).\n", 18);
    printf("- Depois escolha uma opcao do menu para executar uma funcionalidade.\n\n");
    printf("Exemplo: na opcao 2, o programa calcula a raiz quadrada de cada valor do vetor.\n");
    printf("Nota: entradas fora do intervalo [-1, 18] serao rejeitadas e pedidas novamente.\n");
    printf("================\n\n");
}





