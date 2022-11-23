cmake_minimum_required(VERSION 3.19)
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
        codigo/main.cpp
        codigo/src/ucturma.cpp
        codigo/src/cli.cpp
        codigo/src/estudante.cpp
        codigo/src/pedido.cpp
        codigo/src/slot.cpp
        codigo/src/turmah.cpp
        codigo/src/readFiles.cpp)

add_compile_definitions(_GLIBCXX_USE_CXX11_ABI=0)
