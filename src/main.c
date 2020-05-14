#include <stdio.h>
#include <stdlib.h>
#include <data.h>


int main()
{   
    const int tamanho = solicitar_tamanho_do_vetor();
    Data *datas;
    datas = criar_e_preencher_vetor(tamanho);
    qsort(datas, tamanho, sizeof(Data), compara_datas);
    imprimir_datas_ordenadas(datas, tamanho);
    free(datas);
    return (0);
}
