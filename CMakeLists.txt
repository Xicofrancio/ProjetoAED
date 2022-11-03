cmake_minimum_required(VERSION 3.23)
project(Fim)

set(CMAKE_CXX_STANDARD 14)

add_executable(Projeto
        .idea/.gitignore
        .idea/modules.xml
        .idea/Projeto.iml
        .idea/workspace.xml
        csv/classes.csv
        csv/classes_per_uc.csv
        csv/students_classes.csv
        main.cpp
        src/ucturma.cpp
        src/cli.cpp
        src/estudante.cpp
        src/gestordehorarios.cpp
        src/pedido.cpp
        src/slot.cpp
        src/turmah.cpp)

add_compile_definitions(_GLIBCXX_USE_CXX11_ABI=0)
