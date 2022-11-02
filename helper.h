//
// Created by David Castro on 01/11/2022.
//

#ifndef PROJETO_HELPER_H
#define PROJETO_HELPER_H
#include <vector>
#include <set>
#include <queue>
#include "estudante.h"
#include "turmah.h"
#include "pedido.h"

using namespace std;
class helper {
private:
    set<Estudante> estudantes;
    vector<TurmaH> horario;
    queue<Pedido> pedidoHold;
    vector<Pedido> pedidosRejeitados;
public:
    int getUcTurma(string codUc, string codTurma);
    int getEstudante(string numero, string uc);
    void guardarPedido(const Estudante &estudante, Pedido tipo);
}


#endif //PROJETO_HELPER_H
