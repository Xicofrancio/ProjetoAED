#ifndef PROJETOAED_GESTOR_H
#define PROJETOAED_GESTOR_H
#include <vector>
#include <set>
#include <queue>
#include "estudante.h"
#include "turmah.h"
#include "pedido.h"

using namespace std;


class gestor {
private:
    set <Estudante> estudantes;
    vector <Pedido> pedidosRejeitados;
    vector <TurmaH> horario;
    queue <Pedido> pedidosHold;
public:
    UCTurma inputUCTurma();

    int getNumeroEstudante(string codigoEstudante, string nomeEstudante);

    int getCodTurma(string codUC, string codTurma);

    void concluirPedido();

    void salvarPedido(const Estudante &estudante, Pedido tipo);

    void addUC();

    void addHora();

    void addEstudante();
};


#endif //GESTOR_H
