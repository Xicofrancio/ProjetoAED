#ifndef PROJETOAED_GESTOR_H
#define PROJETOAED_GESTOR_H
#include <vector>
#include <set>
#include <queue>
#include "estudante.h"
#include "turmah.h"
#include "pedido.h"

using namespace std;


class gestordehorarios {
private:
    set <Estudante> estudantes;
    vector <Pedido> pedidosRejeitados;
    vector <TurmaH> horario;
    queue <Pedido> pedidosHold;
public:
    UcTurma inputUCTurma();

    int getNumeroEstudante(string codigoEstudante, string nomeEstudante);

    int getCodTurma(string codUC, string codTurma);

    void concluirPedido();

    void salvarPedido(const Estudante &estudante, Pedido tipo);

    void addUC();

    void addHora();

    void addEstudante();

    bool pedidoPossivel(const vector<Slot> newSchedule);

    vector<Slot> newSchedule(const list<UcTurma> turmas, const vector<Ucturma> newturmas);

};


#endif //GESTOR_H
