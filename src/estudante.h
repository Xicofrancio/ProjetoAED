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
    std::basic_string<char> numero;
    std::string nome;
    std::list<UcTurma> turmas;
public:
    Estudante(std::string Numero, std::string Nome);
    std::string getNumero() const;
    void setNumero(std::string Numero);
    std::string getNome() const;
    void setNome(std::string Nome);
    std::list<UcTurma> getTurmas() const;
    void addUcTurma(const UcTurma ucTurma) const;
    void rmUcTurma(const UcTurma ucTurma);
    bool operator<(const Estudante estudante) const;
    bool operator==(const Estudante estudante) const;
};

#endif //ESTUDANTE_H
