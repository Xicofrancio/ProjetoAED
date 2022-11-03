//
// Created by USER on 29/10/2022.
//
#include "estudante.h"
#include "gestaohorarios.h"
#include "pedido.h"
#include "slot.h"
#include "turmah.h"
#include "ucturma.h"


using namespace std;

Estudante::Estudante(int Numero, std::string Estatuto, std::string Nome, std::list<UcTurma> Turmas) {numero= Numero; estatuto= Estatuto; nome = Nome; turmas = Turmas;};

int Estudante::getNumero() const{return numero;};

void Estudante::setNumero(int Numero) {numero = Numero;};

std::string Estudante::getEestatuto() const{return estatuto;};

void Estudante::setEestatuto(std::string Estatuto) {estatuto = Estatuto;};

std::string Estudante::getNome() const{return nome;};

void Estudante::setNome(std::string Nome) {nome = Nome;};

std::list<UcTurma> Estudante::getTurmas() const{return turmas;}

void  Estudante::addUcTurma(UcTurma ucTurma) const {
    this->turmas.push_back(ucTurma);
}

void Estudante::rmUcTurma(UcTurma ucTurma) const {
    for(auto c = this ->turmas.begin(); c != this->turmas.end();c++){
        if(c->operator==(ucTurma)) {
        this->turmas.erase(c);
        break;
    }
}}

bool Estudante::operator<(const Estudante estudante) {
    return this -> numero < estudante.numero;
}
bool Estudante::operator==(const Estudante estudante) {
    return this -> numero == estudante.numero;
}



