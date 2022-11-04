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

    int getCodigoTurma(string codUC, string codigoTurma);

    void concluirPedido();

    void salvarPedido(const Pedido pedido);

    void addUC();

    void addHora();

    void addEstudante();

    void novoEstudante();

    bool pedidoPossivel(const vector <Slot> newSchedule);

    list <Slot> getHorariosTurma(UCTurma turma);

    vector <Slot> newSchedule(const list <UcTurma> turmas, const vector <Ucturma> newturmas);

};


#endif //GESTOR_H
