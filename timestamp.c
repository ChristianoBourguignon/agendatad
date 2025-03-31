#include "timestamp.h"
#include <stdio.h>
#include <stdlib.h>

//Cria um timestamp com Data e Horário.
Timestamp *criarTimestamp(int dia, int mes, int ano, int hora, int minuto){
    Timestamp *ts = (Timestamp*)malloc(sizeof(Timestamp));
    if(ts == NULL){
        printf("Memória insuficiente!\n");
        exit(1);
    }
    ts->data = criarData(dia,mes,ano);
    ts->horario = criarHorario(hora,minuto);
    return ts;
}

//Exibe data e horário no formato - DD/MM/AAAA HH:MM.
void imprimirTimestamp(Timestamp *timestamp){
    imprimirData(timestamp->data);
    imprimirHorario(timestamp->horario);
}

//Libera memória da estrutura Timestamp.
void destruirTimestamp(Timestamp *timestamp){
    destruirHorario(timestamp->horario);
    destruirData(timestamp->data);
    free(timestamp);
}

//Adiciona minutos ao timestamp, ajustando data e horário.
void somarMinutosTimestamp(Timestamp *timestamp, int minutos){
    int horaAnterior = timestamp->horario->hora;
    somarMinutos(timestamp->horario,minutos);
    // if(timestamp->horario->hora < horaAnterior){
    //     somarDias(timestamp->data, minutos/1440);
    // }
    if(horaAnterior > timestamp->horario->hora ){
        somarDias(timestamp->data,1);
    } else {
        somarDias(timestamp->data,minutos/1440);
    }
}

//Subtrai minutos, garantindo consistência entre data e horário.
void subtrairMinutosTimestamp(Timestamp *timestamp, int minutos){
    int horaAnterior = timestamp->horario->hora;
    subtrairMinutos(timestamp->horario,minutos);
    if(horaAnterior < timestamp->horario->hora ){
        subtrairDias(timestamp->data,1);
    } else {
        subtrairDias(timestamp->data,minutos/1440);
    }
}