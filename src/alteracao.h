#ifndef ALTERACAO_H
#define ALTERACAO_H

#include "ucturma.h"

using namespace std;


class Alteracao {
private:
    UcTurma atual;
    UcTurma desejada;
public:
    Alteracao(UcTurma atual, UcTurma desejada);

    /*!
     * Dá-nos a alteração atual de turma
     * @return a alteração desejada
     */
    UcTurma getDesejada();

    /*!
     *  Dá-nos a alteração atual de turma
     * @return a alteração atual
     */
    UcTurma getAtual();

    /*!
     * Permite mudar a alteração desejada de turma
     * @param Desejada
     */
    void setDesejada(UcTurma Desejada);

    /*!
     * Permite mudar a alteração atual de turma
     * @param Atual
     */
    void setAtual(UcTurma Atual);
};

#endif //ALTERACAO_H
