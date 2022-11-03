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
    std::vector<UcTurma> UcTurmaDesejadas;
public:
    Pedido( Estudante Estudante1, std::string Tipo);
    Estudante getEstudante();
    std::vector<UcTurma> getUcDesejadas();
    std::string getTipoPedido();
    void setEstudante(const Estudante Estudante1);
    void addUcDesejada(const UcTurma UcTurmaDesejada);
    void setTipoPedido(std::string tipo);
};

#endif //PEDIDO_H
