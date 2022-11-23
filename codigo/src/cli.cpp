
#include <iostream>

#include "estudante.h"
#include "pedido.h"
#include "slot.h"
#include "turmah.h"
#include "ucturma.h"
#include "readFiles.h"
#include "cli.h"
#include <algorithm>

using namespace std;

bool sortnumberdecrescente(Estudante &p1, Estudante &p2) {
    if(p1.getNumero()>p2.getNumero()) return true;
    return false;
}

bool sortnumbercrescente(Estudante &p1, Estudante &p2) {
    if(p1.getNumero()<p2.getNumero()) return true;
    return false;
}

bool sortbyname(Estudante &p1, Estudante &p2){
    if(p1.getNome()<p2.getNome()) return true;
    return false;
}

void cli::helper(){

    readFiles estudantes;

    /*GestorDeHorarios gestorfeup;
    gestorfeup.addEstudante();
    gestorfeup.addHorario();
    gestorfeup.addUC();*/
    exit_loop: ;
    cout<<"Que operacao quer executar?"<<endl<< "1) Carregar Ficheiros!" << endl <<"2) Visualizar horario,turma e uc" << endl << "3) Fazer um pedido (alteracao de horario)"<<endl;
    int n;
    int i;
    std::string Tipo;
    cin >> n;
    while(n != 0) {
        if (n == 1) {

            int p;
            cout << "1) Carregar classes.csv" << endl << "2) Carregar classes_per_uc.csv" << endl
                 << "3) Carregar students_classes.csv" << endl << "4) Voltar" << endl;
            cin >> p;
            switch (p) {
                case 1:
                    estudantes.genHorarios();
                    break;
                case 2:
                    estudantes.genUC();
                    break;
                case 3:
                    estudantes.genEtudantes();
                    break;
                case 4:
                    goto exit_loop;
            }
        } else if (n == 2) {
            int l;
            cout << "1) Visualizar horarios" << endl << "2) Visualizar estudantes";
            cin >> l;
            switch (l) {
                case 1:
                    estudantes.getHorarioEstudante(202028547);
                    break;
                case 2:
                    int w;
                    cout << "1) Ordenar por ordem alfabetica" << endl << "2) Ordenar por numero de estrudante decrescente" << endl << "3) Ordenar por numero de estrudante crescente";
                    cin >> w;
                    if(w == 1){
                        estudantes.estudantes.sort(sortbyname);
                        estudantes.visualizarEstudantes();
                    }
                    if(w == 2){
                        estudantes.estudantes.sort(sortnumberdecrescente);
                        estudantes.visualizarEstudantes();
                    }
                    if (w == 3){
                        estudantes.estudantes.sort(sortnumbercrescente);
                        estudantes.visualizarEstudantes();
                    }
            }
        }
    }
}






        /*
        if (n == 10) {
            cout << "Número do aluno:" << endl;
            cin >> i;
            cout << "Troca pretendida:" << endl;
            cin >> Tipo;
            for (auto c: gestorfeup) {
                if (c.getNumeroEstudante() == i) {
                    Pedido pedido(c, Tipo);
                }
            }
        }
        if (n == 2) {
            cout << "Número do aluno:" << endl;
            cin << int
            i;
            for (auto c:) {
                if (i ==)
            }*/




