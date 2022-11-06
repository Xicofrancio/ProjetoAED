//
// Created by David Castro on 01/11/2022.
//

#include "pedido.h"

Pedido::Pedido(const Estudante estudante, std::string tipo) : estudante(estudante), tipo(tipo) {}

Estudante Pedido::getEstudante() { return estudante; }

std::string Pedido::getTipoPedido() { return tipo; }

std::vector<UcTurma> Pedido::getUcDesejadas() { return UcTurmaDesejadas; }

void Pedido::setEstudante(const Estudante Estudante1) { estudante = Estudante1; }

void Pedido::setTipoPedido(std::string Tipo) { tipo = Tipo; }

void Pedido::addUcDesejada(const UcTurma UcTurmaDesejada) { UcTurmaDesejadas.push_back(UcTurmaDesejada); }
