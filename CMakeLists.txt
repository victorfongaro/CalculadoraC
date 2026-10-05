cmake_minimum_required(VERSION 3.10)
project(CalculadoraC C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

if (MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -pedantic)
endif()

# Adicionando operacoesEspeciais.c na lista de fontes
set(SOURCES
    main.c
    menus.c
    operacoes.c
    operacoesEspeciais.c
    arquivo.c
)

add_executable(calculadora ${SOURCES})

if (UNIX)
    target_link_libraries(calculadora PRIVATE m)
endif()