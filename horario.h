#ifndef HORARIOTAD
#define HORARIOTAD

typedef struct {
    int hora, minuto;
} Horario;

//Cria e inicializa um Horario.
Horario *criarHorario(int hora, int minuto);

//Exibe o horário no formato HH:MM.
void imprimirHorario(Horario *horario);

//Libera a memória alocada para Horario.
void destruirHorario(Horario *horario); 

//Adiciona minutos ao horário, ajustando corretamente as horas.
void somarMinutos(Horario *horario, int minutos);

//Subtrai minutos, retrocedendo corretamente as horas.
void subtrairMinutos(Horario *horario, int minutos); 

#endif