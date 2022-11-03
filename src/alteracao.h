#ifndef ALTERACAO_H
#define ALTERACAO_H

#include "ucturma.h"

using namespace std;


class Alteracao {
private:
    UCTurma &atual;
    UCTurma &pretendida;
public:
    Alteracao(UCTurma &atual, UCTurma &desejada);

    UCTurma getPretendida();

    UCTurma getAtual();

    void setPretendida(UCTurma desejada);

    void setAtual(UCTurma atual);
};

#endif //ALTERACAO_H
