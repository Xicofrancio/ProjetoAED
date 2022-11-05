//
// Created by David Castro on 04/11/2022.
//
#include "slot.h"
#include "estudante.h"
#include "turmah.h"
#include <vector>
#include <set>
#ifndef UNTITLED8_READFILES_H
#define UNTITLED8_READFILES_H


class readFiles {
private:
    std::vector<Slot> horarios;
    std::set<Estudante> estudantes;
    std::vector<UcTurma> ucturmas;
public:
    void genEtudantes(std::string caminho);
    void genHorarios(std::string caminho);
    void genUC(std::string caminho);
    std::vector<std::string> reducer(std::string Line, char& division);
};


#endif //UNTITLED8_READFILES_H
