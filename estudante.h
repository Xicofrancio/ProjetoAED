//
// Created by USER on 28/10/2022.
//

#include <list>
#include <queue>
#include "ucturma.h"
#include "pedido.h"
#ifndef ESTUDANTE_H
#define ESTUDANTE_H

class Estudante{
private:
    int numero;
    std::string estatuto;
    std::string nome;
    std::list<UcTurma> turmas;
    std::queue<Pedido> pedidos;
public:
    Estudante();
    Estudante(int Numero, std::string Estatuto, std::string Nome, std::list<UcTurma> Turmas, std::queue<Pedido> Pedidos);
    int getNumero();
    void setNumero();
    std::string getEestatuto();
    void setEestatuto();
    std::string getNome();
    void setNome();
    std::list<UcTurma> getTurmas();
    void setTurmas();
    std::queue<Pedido> getPedidos();
    void setPedidos();
};

#endif //ESTUDANTE_H
