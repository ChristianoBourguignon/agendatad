#ifndef TIMESTAMPTAD
#define TIMESTAMPTAD

#include "data.h"
#include "horario.h"

typedef struct {
    Data *data;
    Horario *horario;
} Timestamp;

//Cria um timestamp com Data e Horário.
Timestamp *criarTimestamp(int dia, int mes, int ano, int hora, int minuto);

//Exibe data e horário no formato - DD/MM/AAAA HH:MM.
void imprimirTimestamp(Timestamp *timestamp);

//Libera memória da estrutura Timestamp.
void destruirTimestamp(Timestamp *timestamp);

//Adiciona minutos ao timestamp, ajustando data e horário.
void somarMinutosTimestamp(Timestamp *timestamp, int minutos);

//Subtrai minutos, garantindo consistência entre data e horário.
void subtrairMinutosTimestamp(Timestamp *timestamp, int minutos);

#endif