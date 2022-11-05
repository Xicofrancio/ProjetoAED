//
// Created by USER on 28/10/2022.
//

#include <list>
#include <queue>
#include "string"
#include "ucturma.h"


#ifndef ESTUDANTE_H
#define ESTUDANTE_H

class Pedido;

class Estudante{
private:
    int numero;
    std::string nome;
    std::list<UcTurma> turmas;
public:
    Estudante(int numero, std::string nome);
    int getNumero() const;
    void setNumero(int Numero);
    std::string getNome() const;
    void setNome(std::string Nome);
    std::list<UcTurma> getTurmas() const;
    void addUcTurma(const UcTurma& ucTurma);
    void rmvUcTurma(const UcTurma& ucTurma);
    bool operator<(const Estudante estudante) const;
    bool operator==(const Estudante estudante) const;
};

#endif //ESTUDANTE_H