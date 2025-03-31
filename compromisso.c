#include "compromisso.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Compromisso *criarCompromisso(int dia, int mes, int ano, int hora, int minuto,
char *descricao){
    Compromisso *c1 = (Compromisso*)malloc(sizeof(Compromisso));
    if (c1==NULL){
        printf("Sem memória");
        exit(2);
    }
    c1->timestamp = criarTimestamp(dia,mes,ano,hora,minuto);
    strcpy(c1->descricao, descricao);
    return c1;
}

//Exibe os detalhes do compromisso.
void imprimirCompromisso(Compromisso *dado){
    printf("Detalhes do compromisso: %s\n",dado->descricao);
    printf("Data do compromisso: ");
    imprimirData(dado->timestamp->data);
    printf("Horario do compromisso: ");
    imprimirHorario(dado->timestamp->horario);
}

//Libera memória.
void destruirCompromisso(Compromisso *compromisso){
    destruirData(compromisso->timestamp->data);
    destruirHorario(compromisso->timestamp->horario);
    free(compromisso);
}

//Adia um compromisso em minutos.
void adiarCompromisso(Compromisso *compromisso, int minutos){
    somarMinutosTimestamp(compromisso->timestamp,minutos);
}

// Antecipar um compromisso.
void anteciparCompromisso(Compromisso *compromisso, int minutos){
    subtrairMinutosTimestamp(compromisso->timestamp,minutos);
}