//
// Created by Marcelo on 02/11/2022.
//

#include "alteracao.h"

UcTurma Alteracao::getAtual() {return atual;}
UcTurma Alteracao::getDesejada() {return desejada;}
Alteracao::Alteracao(UcTurma &atual, UcTurma &desejada) {}
void Alteracao::setAtual(UcTurma Atual) {atual = Atual;}
void Alteracao::setDesejada(UcTurma Desejada) {desejada = Desejada;}