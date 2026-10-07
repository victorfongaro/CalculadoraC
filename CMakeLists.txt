cmake_minimum_required(VERSION 3.10)

project(CalculadoraC C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

set(SOURCES
    main.c
    arquivo.c
    menus.c
    operacoes.c
    operacoesEspeciais.c
)

set(HEADERS
    headers.h
)

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

target_link_libraries(${PROJECT_NAME} m)