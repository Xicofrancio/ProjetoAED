//
// Created by USER on 29/10/2022.
//
#include "estudante.h"
#include "gestaohorarios.h"
#include "pedido.h"
#include "slot.h"
#include "turmah.h"
#include "ucturma.h"

Estudante::Estudante() {};
Estudante::Estudante(int Numero, int Estatuto, int Nome, std::list<UcTurma> Turmas, std::queue<Pedido> Pedidos) {
    numero=Numero;
    estatuto=Estatuto;
    nome = Nome;
    turmas = Turmas;
    pedidos = Pedidos;
};