Calculadora em C

Este é um projeto de uma calculadora modular desenvolvida em linguagem C. O programa apresenta um menu interativo e suporta tanto operações matemáticas básicas como operações especiais (trigonometria, potências, raízes), além de contar com manipulação de ficheiros.

📁 Estrutura do Projeto

O código foi dividido em vários módulos para melhor organização e manutenção:

main.c: Ponto de entrada do programa. Faz a chamada principal para os menus e gere o fluxo da aplicação.

menus.c: Contém a interface do utilizador e as funções responsáveis por exibir opções no terminal.

operacoes.c: Implementação das operações matemáticas básicas (adição, subtração, multiplicação, divisão).

operacoesEspeciais.c: Implementação das operações matemáticas avançadas (requer a biblioteca <math.h>).

arquivo.c: Responsável pela manipulação de ficheiros (por exemplo, guardar o histórico de operações ou ler dados de entrada).

headers.h: Ficheiro de cabeçalho central, contendo todas as assinaturas de funções e inclusões de bibliotecas padrão necessárias.

CMakeLists.txt: Ficheiro de configuração do CMake com as instruções de compilação (incluindo o link para a biblioteca matemática -lm).

⚙️ Pré-requisitos

Para compilar e executar este projeto em sistemas Linux, certifique-se de que tem os seguintes pacotes instalados:

Compilador C (GCC ou Clang)

CMake

Make

🚀 Como Compilar e Executar

O projeto utiliza o CMake para automatizar o processo de compilação. Siga os passos abaixo no seu terminal, a partir da pasta raiz do projeto:

Limpe qualquer compilação anterior (opcional, mas recomendado):

rm -rf build


Crie a pasta de compilação e entre nela:

mkdir build
cd build


Gere os ficheiros de configuração do Make:

cmake ..


Compile o código-fonte:

make


Execute a calculadora:

./CalculadoraC


📝 Notas de Desenvolvimento

Caso realize alterações em algum dos ficheiros .c ou .h, basta aceder à pasta build e executar o comando make novamente.

Se adicionar novos ficheiros ao projeto no futuro, lembre-se de os incluir na variável SOURCES dentro do ficheiro CMakeLists.txt.