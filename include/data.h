#ifndef DATA
#define DATA
#include <stdio.h>
typedef struct
{
    int dia;
    int mes;
    int ano;
}Data;
int compara_datas(const void * a, const void * b);
void ler_valores_e_criar_data(Data *data);
void imprimir_data(Data *d);
int solicitar_tamanho_do_vetor();
Data *criar_e_preencher_vetor(int tamanho);
void imprimir_datas_ordenadas(Data *datas, int tamanho);
int compara_inteiros (const int a, const int b);
#endif