#ifndef DATATAD
#define DATATAD

typedef struct data {
    int dia, mes, ano;
} Data;

//Aloca e inicializa uma estrutura Data.
Data *criarData(int dia, int mes, int ano);

//Exibe a data no formato DD/MM/AAAA.
void imprimirData(Data *data);

//Libera a memória alocada para uma estrutura Data.
void destruirData(Data *data);

//Adiciona um número de dias à data, ajustando corretamente os meses e anos.
void somarDias(Data *data, int dias); 

//Subtrai um número de dias da data, garantindo ajustes corretos.
void subtrairDias(Data *data, int dias);

#endif