cmake_minimum_required(VERSION 3.30)
project(tadAgenda C)

set(CMAKE_C_STANDARD 11)

add_executable(tadAgenda main.c
        agenda.c
        compromisso.c
        data.c
        horario.c
        timestamp.c
)
