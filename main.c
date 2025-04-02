#include "agenda.h"
#include <stdio.h>

int main()
{
    // Data *d1;
    // Horario *h1;
    // d1 = criarData(1,1,2001);
    // subtrairDias(d1,1);
    // imprimirData(d1);
    // h1 = criarHorario(10,30);
    // imprimirHorario(h1);
    // somarMinutos(h1,85);
    // imprimirHorario(h1);
    // subtrairMinutos(h1,85);
    // imprimirHorario(h1);

    // Timestamp *ts = criarTimestamp(1,1,2002,23,30);
    // somarMinutosTimestamp(ts,60);
    // imprimirTimestamp(ts);
    // subtrairMinutosTimestamp(ts,60);
    // imprimirTimestamp(ts);

    Compromisso* c1;
    Compromisso* c2;
    Compromisso* c3;
    Compromisso* c4;
    Compromisso* c5;
    Compromisso* c6;
    Agenda* a1;
    c1 = criarCompromisso(1,1,2002,00,30,"Aula Online");
    c2 = criarCompromisso(2,1,1900,00,30,"Aula Online");
    c3 = criarCompromisso(3,1,2002,00,30,"Aula Online");
    c4 = criarCompromisso(4,1,2002,00,30,"Aula Online");
    c5 = criarCompromisso(5,1,2002,00,30,"Aula Online");
    //c6 = criarCompromisso(6,1,2002,00,30,"Aula Online");
    a1 = criarAgenda(5);
    adicionarCompromisso(a1,c1);
    adicionarCompromisso(a1,c2);
    adicionarCompromisso(a1,c3);
    adicionarCompromisso(a1,c4);
    adicionarCompromisso(a1,c5);
    //adicionarCompromisso(a1,c6);
    //listarCompromissos(a1);
    removerCompromisso(a1,2);
    listarCompromissos(a1);
    printf("\nCompromissos:\n");
    //adicionarCompromisso(a1,c2);
    //listarCompromissos(a1);
    consultarCompromissosPorData(a1,5,1,2002);



    return 0;
}