#ifndef COMPROMISSO_H
#define COMPROMISSO_H
#include "timestamp.h"

typedef struct {
    Timestamp *timestamp;
    char descricao[100];
} Compromisso;

//Cria um compromisso.
Compromisso *criarCompromisso(int dia, int mes, int ano, int hora, int minuto,
char *descricao);

//Exibe os detalhes do compromisso.
void imprimirCompromisso(Compromisso *dado);

//Libera memória.
void destruirCompromisso(Compromisso *compromisso);

//Adia um compromisso em minutos.
void adiarCompromisso(Compromisso *compromisso, int minutos);

// Antecipar um compromisso.
void anteciparCompromisso(Compromisso *compromisso, int minutos);

#endif