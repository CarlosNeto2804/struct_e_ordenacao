## Desafio
- No arquivo data.h, defina o tipo Data com os atributos dia(int), mês(int), ano(int);
- Escreva o protótipo de uma função de comparação no arquivo data.h com a estrutura: int rotulo (const void * a, const void * b);
- Implemente esta função de comparação no arquivo data.c
- Na sua main, escreva um programa que lê n datas e as armazena num vetor
- Utilize a função qsort da stdlib.h enviando seu vetor, a quantidade n de elementos, a dimensão do seu tipo Data e o rótulo da sua função de comparação.
- Imprima as datas ordenadas, uma data por linha

## Critério de comparação: 
- Uma data contém atributos: dia (int), mês (int) e ano (int). 
- Uma data d1 é maior que uma data d2 se o ano em d1 é maior que o ano em d2.
- Para datas com anos iguais, o mês deve ser utilizado para determinar a maior data. Datas com valores maiores para o mês serão consideradas maiores. 
- Por fim, caso o mês e ano sejam iguais o dia é utilizado para deerminar a maior data. Menores dias indicaram datas menores após as comparações acima. 
- Duas datas são iguais apenas se seus valores dia, mês e ano seão extamente iguais.

- Você deve implementar um programa que ordena "Datas" de maneira ascendente utilizando a função qsort.

## Entrada
- Leia uma quantidade n de datas.
- Para cada data leia seu dia, mês e ano.
## Saída
- Imprima as datas ordenadas, uma por linha.
- Os atributos devem ser impressos na ordem: dia mês ano

## Compilar
- Executar Makefile
```bash
$ make
``` 
A instrução irá gerar a pasta **bin** com o arquivo **exercicio_data**

## Execução
```bash
$ ./bin/exercicio_data 
```