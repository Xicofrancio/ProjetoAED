using namespace std;
#include <iostream>

#include "alteracao.h"
#include "estudante.h"
#include "gestordehorarios.h"
#include "pedido.h"
#include "slot.h"
#include "turmah.h"
#include "ucturma.h"

void helper(){
    Gestor gestorfeup;
    gestorfeup.addEstudante();
    gestorfeup.addHorario();
    gestorfeup.addUC();
    cout<<"Que operação quer executar?"<<endl<< "1) fazer um pedido (alteração de horario)" << "2) visualizar horário,turma e uc"<<endl;
    int n;
    int i;
    std::string Tipo;
    cin >> n;
    if (n == 1){
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
    if(n == 2) {
        cout << "Número do aluno:" << endl;
        cin << int i;
        for (auto c:) {
            if(i==)
        }
    }

}
