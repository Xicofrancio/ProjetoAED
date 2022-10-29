//
// Created by USER on 28/10/2022.
//
#include <set>
#include <vector>
#include <string>
#include "estudante.h"
#include "turmah.h"
#ifndef GESTAOHORARIOS_H
#define GESTAOHORARIOS_H

class GestaoHorarios{
private:
    std::set<Estudante> estudantes;
    std::vector<TurmaH> horario;
public:
    std::set<Estudante> getEstudantes();
    std::vector<TurmaH> getHorario();
    void setEstudantes(std::set<Estudante> *Estudantes);
    void setHorario(std::vector<TurmaH> *Horario);
    GestaoHorarios(std::set<Estudante> *Estudantes, std::vector<TurmaH> *Horario);
};
#endif //GESTAOHORARIOS_H
