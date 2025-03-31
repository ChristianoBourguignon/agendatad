#include "horario.h"
#include <stdio.h>
#include <stdlib.h>

Horario *criarHorario(int hora, int minuto){
    Horario *h1 = (Horario*)malloc(sizeof(Horario));
    if (h1== NULL){
        printf("Memória insuficiente!\n");
        exit(1);
    }
    h1->hora = hora;
    h1->minuto = minuto;
    return h1;
}


void imprimirHorario(Horario *horario){
    printf("\n%02d:%02d\n", horario->hora, horario->minuto);
}


void destruirHorario(Horario *horario){
    free(horario);
}


void somarMinutos(Horario *horario, int minutos){
    int min;
    min = horario->minuto + minutos;
    // % - minutos
    // / - horas
    if (min > 60){
        horario->hora += 1;
        horario->minuto = horario->minuto + minutos%60;
    }
    if (horario->hora > 23){
        min = horario->hora % 24;
        horario->hora = min;
    }
}


void subtrairMinutos(Horario *horario, int minutos){
    int min;
    min = (horario->hora * 60 + horario->minuto) - minutos;
    // % - minutos
    // / - horas
    while (min < 0) {
        min += 1440;
    }
    
    horario->hora = min / 60; 
    horario->minuto = min % 60;
}