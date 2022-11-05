using namespace std;
#include <iostream>

#include "alteracao.h"
#include "estudante.h"
#include "gestordehorarios.h"
#include "pedido.h"
#include "slot.h"
#include "turmah.h"
#include "ucturma.h"
#include "readFiles.h"
#include "cli.h"

using namespace std;

void cli::helper(){
    readFiles estudantes;

    /*GestorDeHorarios gestorfeup;
    gestorfeup.addEstudante();
    gestorfeup.addHorario();
    gestorfeup.addUC();*/
    exit_loop: ;
    string caminho;
    cout<<"Que operacao quer executar?"<<endl<< "1) Carregar Ficheiros!" << endl <<"1) Fazer um pedido (alteracao de horario)" << endl <<  "2) Visualizar horario,turma e uc"<<endl;
    int n;
    int i;
    std::string Tipo;
    cin >> n;
    while(n != 0) {
        switch (n) {

            case 1:
                int p;
                cout << "1) Carregar classes.csv" << endl << "2) Carregar classes_per_uc.csv" << endl << "3) Carregar students_classes.csv" << endl << "4) Voltar" << endl;
                cin >> p;
                switch (p) {
                    case 1:
                        cout << "Insira o caminho:";
                        cin >> caminho;
                        estudantes.genHorarios(caminho);
                        break;

                    case 2:
                        cout << "Insira o caminho:";
                        cin >> caminho;
                        estudantes.genUC(caminho);
                        break;
                    case 3:
                        cout << "Insira o caminho:";
                        cin >> caminho;
                        estudantes.genEtudantes(caminho);
                        break;
                    case 4:
                        goto exit_loop;
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
        }

    }

