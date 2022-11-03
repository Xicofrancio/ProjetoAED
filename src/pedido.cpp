//
// Created by David Castro on 01/11/2022.
//

#include "pedido.h"

Pedido::Pedido(const Estudante &estudante, std::string tipo): estudante(estudante),tipo(tipo) {}

Estudante Pedido::getEstudante() {return this -> estudante;}

std::string Pedido ::getTipoPedido() {return this -> tipo;}

std::vector<UcTurma> Pedido::getUcDesejadas() {return this->UcTurmadesejadas;}

void Pedido::setEstudante(const Estudante estudante) {this -> estudante;}

void Pedido::setTipoPedido(std::string tipo) {this-> tipo;}

void Pedido::addUcdesejada(const UcTurma UcTurmadesejada) {this-> UcTurmadesejadas.push_back(UcTurmadesejada);}
