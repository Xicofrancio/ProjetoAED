//
// Created by USER on 28/10/2022.
//
#ifndef PEDIDO_H
#define PEDIDO_H
#include "estudante.h"

enum TipoPedido{ADD,REM,ALT,ALTC};

class Pedido{
private:
    std::string tipo;
    Estudante estudante;
    std::vector<UcTurma> UcTurmaDesejadas;
public:
    Pedido( Estudante Estudante1, std::string Tipo);
    /*!
     * devolve o estudante
     * @return estudante
     */
    Estudante getEstudante();
    /*!
     * devolve as uc pretendidas
     * @return
     */
    std::vector<UcTurma> getUcDesejadas();
    /*!
     * devolve o tipo de pedido(alteração/remoção turma etc...)
     * @return tipo de pedido
     */
    std::string getTipoPedido();
    /*!
     * permite criar um estudante novo
     * @param Estudante1
     */
    void setEstudante(const Estudante Estudante1);
    /*!
     * permite adicionar uma uc
     * @param UcTurmaDesejada
     */
    void addUcDesejada(const UcTurma UcTurmaDesejada);
    /*!
     * permit definir o tipo de pedido a fazer
     * @param tipo
     */
    void setTipoPedido(std::string tipo);
};

#endif //PEDIDO_H
