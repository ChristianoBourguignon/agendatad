#include "data.h"
#include <stdio.h>
#include <stdlib.h>

// Cria data e aloca na memória
Data *criarData(int dia, int mes, int ano){
    Data *dt = (Data*)malloc(sizeof(Data));
    if (dt == NULL) {
        printf("Memória insuficiente!\n");
        exit(1);
    }
    dt->dia = dia;
    dt->mes = mes;
    dt->ano = ano;
    return dt;
}

//Exibe a data no formato DD/MM/AAAA.
void imprimirData(Data *data){
    printf("\n%02d/%02d/%d\n",data->dia,data->mes,data->ano);
}

//Libera a memória alocada para uma estrutura Data.
void destruirData(Data *data){
    free(data);
}

//Adiciona um número de dias à data, ajustando corretamente os meses e anos.
void somarDias(Data *data, int dias){
    // resultado do mod são os dias
    // resultado da divisão são os meses

    data->dia = data->dia + (dias%30);
    data->mes = data->mes + (dias/30);
    if (data->dia > 30){
        data->dia = data->dia - 30;
        data->mes = data->mes + 1;
    }
    if(data->mes > 12){
        data->mes = 1;
        data->ano = data->ano + 1;
    }
}


//Subtrai um número de dias da data, garantindo ajustes corretos.
void subtrairDias(Data *data, int dias){
    data->dia = data->dia - (dias % 30);
    data->mes = data->mes - (dias / 30);
    if (data->dia < 1) {
        data->mes--;
        data->dia += 30;
    }
    if (data->mes < 1) {
        data->mes = 12;
        data->ano--;
    }
}