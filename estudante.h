//
// Created by USER on 28/10/2022.
//

#include <list>
#include <queue>
#include <string>
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
    Estudante(int Numero, std::string *Estatuto, std::string *Nome, std::list<UcTurma> *Turmas, std::queue<Pedido> *Pedidos);
    int getNumero();
    void setNumero(int Numero);
    std::string getEestatuto();
    void setEestatuto(std::string Estatuto);
    std::string getNome();
    void setNome(std::string Nome);
    std::list<UcTurma> getTurmas();
    std::queue<Pedido> getPedidos();
};

#endif //ESTUDANTE_H
