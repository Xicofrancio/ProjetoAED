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
    std::vector<TurmaH> horarios;
    std::set<Estudante> estudantes;

public:
    void genEtudantes();
    void genHorarios();
    void genUC();
};


#endif //UNTITLED8_READFILES_H
