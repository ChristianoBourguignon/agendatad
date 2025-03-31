#include "agenda.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Cria uma agenda dinâmica.

Agenda *criarAgenda(int capacidadeInicial){
    Agenda *agenda;
    agenda = (Agenda*)malloc(sizeof(Agenda));

    if (agenda==NULL){
        printf("Memória insuficiente para a Agenda");
        exit(2);
    }
    agenda->compromissos = (Compromisso**)malloc(capacidadeInicial * sizeof(Compromisso));
    if(agenda->compromissos == NULL){
        printf("Memória insuficiente para o Compromisso");
        exit(2);
    }
    agenda->tamanho = 0;
    agenda->capacidade = capacidadeInicial;
    return agenda;
}

//Adiciona um compromisso à agenda.
void adicionarCompromisso(Agenda *agenda, Compromisso *compromisso){   
    int tamAgenda = agenda->tamanho + 1;
    if((agenda->tamanho+1) > agenda->capacidade){
        printf("Sem espaço na agenda");
        return;
    }
    agenda->compromissos[agenda->tamanho] = compromisso;
    agenda->tamanho += 1;
    
}

//Exibe todos os compromissos armazenados.
void listarCompromissos(Agenda *agenda){
    printf("Compromissos da Agenda \n");
    for(int i=0;i<agenda->tamanho;i++){
        if(agenda->compromissos[i] != NULL){
            imprimirCompromisso(agenda->compromissos[i]);
            printf("=============================\n");
        }
    }
}

//Remove um compromisso da agenda.
void removerCompromisso(Agenda *agenda, int indice){
    destruirCompromisso(agenda->compromissos[indice]);
}

//Busca compromissos em uma data específica.
void consultarCompromissosPorData(Agenda *agenda, int dia, int mes, int ano);

//Permite adiar ou antecipar um compromisso.
void alterarHorarioCompromisso(Agenda *agenda, int indice, int
minutos, int adiar);