#ifndef AGENDA_H
#define AGENDA_H
#include "compromisso.h"


typedef struct {
    Compromisso* *compromissos;
    int tamanho;
    int capacidade;
} Agenda;

//Cria uma agenda dinâmica.
Agenda *criarAgenda(int capacidadeInicial);

//Adiciona um compromisso à agenda.
void adicionarCompromisso(Agenda *agenda, Compromisso *compromisso);

//Exibe todos os compromissos armazenados.
void listarCompromissos(Agenda *agenda);

//Remove um compromisso da agenda.
void removerCompromisso(Agenda *agenda, int indice);

//Busca compromissos em uma data específica.
void consultarCompromissosPorData(Agenda *agenda, int dia, int mes, int ano);

//Permite adiar ou antecipar um compromisso.
void alterarHorarioCompromisso(Agenda *agenda, int indice, int
minutos, int adiar);

#endif