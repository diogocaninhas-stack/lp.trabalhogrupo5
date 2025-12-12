#include <stdio.h>
#include "functions-team-x.c"
#include <math.h>

void menu();
void escreverarray(int valores[], int tamanho);
void lerarray(int valores[], int tamanho);
double mediana(int valores[], int tamanho);
void ordenar(int valores[], int tamanho);
void divisiveis3(int valores[],int tamanho);
void mistura(int v[],int valores[],int tamanho);
void matriz18x18(const int valores[18],int matriz[18][18]);
void mostrarmatriz(const int matriz[18][18]);
void ordenarPrimeiraMetade(int vetor[],int tamanho);
void somaMetades(int vetor[], int tamanho, int resultado[]);
void mostrarVetor(const int v[], int tamanho);
void somaMetades(int vetor[], int tamanho, int resultado[]);
void mostrarVetormetades(int vetor[], int tamanho);
void raizquadrada(int valores[],int tamanho);
void numerosprimos(int valores[],int tamanho);
int primo(int n);
void calcularMatriz(int v1[], int v2[], int matriz[18][18]);
void mostrarMatriz(int matriz[18][18]);
void transporMatriz(const int M[18][18], int MT[18][18]);
void mostrarMatrizT(int MT[18][18]);
void mostrarAjuda(void);