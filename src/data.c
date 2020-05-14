#include <stdio.h>
#include <stdlib.h>
#include <data.h>
void imprimir_data(Data *d)
{
    printf("%i/%i/%i\n", d->dia, d->mes, d->ano);
}

void ler_valores_e_criar_data(Data *data)
{
    int unused __attribute__((unused));
    printf("Informe o dia: ");
    unused = scanf("%i", &data->dia);
    printf("Informe o mes: ");
    unused = scanf("%i", &data->mes);
    printf("Informe o ano: ");
    unused = scanf("%i", &data->ano);
    printf("===================");
    printf("\n");
}
int solicitar_tamanho_do_vetor()
{
    int unused __attribute__((unused));
    int tamanho;
    printf("Informe a quantidade de datas: ");
    unused = scanf("%d", &tamanho);
    return tamanho;
}
Data *criar_e_preencher_vetor(int tamanho)
{

    Data *vetor_de_datas = calloc(tamanho, sizeof(Data));
    int unused __attribute__((unused));
    int i = 0;
    for (i = 0; i < tamanho; i++)
    {
        ler_valores_e_criar_data(&vetor_de_datas[i]);
    }
    return vetor_de_datas;
}
void imprimir_datas_ordenadas(Data *datas, int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        imprimir_data(&datas[i]);
    }
}
int compara_datas (const void * a, const void * b){
  const Data *data_1 = a;
  const Data *data_2= b;
  int aux;
  aux = compara_inteiros(data_1->ano, data_2->ano);
  if (aux!=0)return aux;
  else{
    aux = compara_inteiros(data_1->mes, data_2->mes);
    if (aux!=0) return aux;
    else return compara_inteiros(data_1->dia, data_2->dia);
  }
}
int compara_inteiros(const int a, const int b){
    if (a < b) return -1;
    else if (a > b) return 1;
    else return 0;
}

