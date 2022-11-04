//
// Created by USER on 29/10/2022.
//
#include "estudante.h"
#include "turmah.h"
#include "ucturma.h"


using namespace std;

Estudante::Estudante(string Numero, std::string Nome) {numero= Numero; nome = Nome;};

string Estudante::getNumero() const{return numero;};

void Estudante::setNumero(string Numero) {numero = Numero;};

std::string Estudante::getNome() const{return nome;};

void Estudante::setNome(std::string Nome) {nome = Nome;};

std::list<UcTurma> Estudante::getTurmas() const{return turmas;}

void  Estudante::addUcTurma(const UcTurma ucTurma) const {
    turmas.push_back(ucTurma);
}

void Estudante::rmUcTurma(const UcTurma ucTurma) {
    for(auto c = turmas.begin(); c != turmas.end();c++){
        if (c->operator==(ucTurma)) {
            turmas.erase(c);
            break;
        }
    }
}

bool Estudante::operator<(const Estudante estudante) const{
    return numero < estudante.numero;
}
bool Estudante::operator==(const Estudante estudante) const{
    return numero == estudante.numero;
}



