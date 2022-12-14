//
// Created by USER on 29/10/2022.
//
#include "estudante.h"
#include "turmah.h"
#include "ucturma.h"


using namespace std;

Estudante::Estudante(int Numero, std::string Nome) {
    numero = Numero;
    nome = Nome;
}

int Estudante::getNumero() const { return numero; }


void Estudante::setNumero(int Numero) { numero = Numero; };

std::string Estudante::getNome() const { return nome; };

void Estudante::setNome(std::string Nome) { nome = Nome; };

std::list<UcTurma> Estudante::getTurmas() const { return turmas; }

void Estudante::addUcTurma(const UcTurma &ucTurma) { turmas.push_back(ucTurma); }

void Estudante::rmvUcTurma(const UcTurma &ucTurma) {
    for (auto c = turmas.begin(); c != turmas.end(); c++) {
        if (c->operator==(ucTurma)) {
            turmas.erase(c);
            break;
        }
    }
}

bool Estudante::operator<(const Estudante estudante) const {
    return numero < estudante.numero;
}

bool Estudante::operator==(const Estudante estudante) const {
    return numero == estudante.numero;
}

Estudante::Estudante(int numero, std::string nome, std::list<UcTurma> turmas) {
    this->numero = numero;
    this->nome = nome;
    this->turmas = turmas;
}



