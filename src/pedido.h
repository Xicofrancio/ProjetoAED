//
// Created by USER on 28/10/2022.
//
#ifndef PEDIDO_H
#define PEDIDO_H
#include "estudante.h"
class Pedido{
private:
    std::string tipo;
    Estudante estudante;
    std::vector<UcTurma> UcTurmadesejadas;
public:
    Pedido(const Estudante &estudante, std::string tipo);
    Estudante getEstudante();
    std::vector<UcTurma> getUcDesejadas();
    std::string getTipoPedido();
    void setEstudante(const Estudante estudante);
    void addUcdesejada(const UcTurma UcTurmadesejada);
    void setTipoPedido(std::string tipo);
};

#endif //PEDIDO_H
