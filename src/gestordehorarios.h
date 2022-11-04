#ifndef GESTOR_H
#define GESTOR_H

#include <vector>
#include <set>
#include <queue>
#include "estudante.h"
#include "turmah.h"
#include "pedido.h"

using namespace std;


class GestorDeHorarios {
private:
    set <Estudante> estudante;
    vector <Pedido> pedidosRejeitados;
    vector <TurmaH> horario;
    queue <Pedido> pedidosHold;
public:
    UcTurma inputUCTurma();

    int getNumeroEstudante(string codigoEstudante, string nomeEstudante);


    bool concluirPedido();

    void salvarPedido(const Pedido pedido);

    void addUC();

    void addHora();

    void addEstudante();

    void novoEstudante();

    list <Slot> getHorariosTurma(UcTurma turma);

    vector <Slot> newSchedule(const list <UcTurma> turmas, const vector <Ucturma> newturmas);

    int getCodigoTurma(string codUC, const string &codigoTurma);

    bool pedidoPossivel(const vector<Slot> &newSchedule);
};


#endif //GESTOR_H
