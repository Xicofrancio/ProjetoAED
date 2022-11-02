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
    std::string estatuto;
    std::string nome;
    std::list<UcTurma> turmas;
public:
    Estudante(int Numero, std::string Estatuto, std::string Nome, std::list<UcTurma> Turmas);
    int getNumero() const;
    void setNumero(int Numero);
    std::string getEestatuto() const;
    void setEestatuto(std::string Estatuto);
    std::string getNome() const;
    void setNome(std::string Nome);
    std::list<UcTurma> getTurmas() const;
    void addUcTurma(UcTurma ucTurma) const;
    void rmUcTurma(UcTurma ucTurma) const;
    bool operator<(const Estudante estudante);
    bool operator==(const Estudante estudante);
};

#endif //ESTUDANTE_H
