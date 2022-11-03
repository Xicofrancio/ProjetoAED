#ifndef ALTERACAO_H
#define ALTERACAO_H

#include "ucturma.h"

using namespace std;


class Alteracao {
private:
    UcTurma &atual;
    UcTurma &desejada;
public:
    Alteracao(UcTurma &atual, UcTurma &desejada);

    UcTurma getDesejada();

    UcTurma getAtual();

    void setDesejada(UcTurma Desejada);

    void setAtual(UcTurma Atual);
};

#endif //ALTERACAO_H
