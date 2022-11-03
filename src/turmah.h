//
// Created by USER on 28/10/2022.
//
#include <list>
#include "slot.h"
#ifndef TURMAH_H
#define TURMAH_H

class TurmaH{
private:
    std::string codUc;
    std::string codTurma;
    std::list<Slot> horarioUcTurma;
    int num_estudantes = 0;
public:
    std::string getCodUc() const;
    std::string getCodTurma() const;
    std::list<Slot> getHorarioUcTurma() const;
    void addHorarioUcTurma(Slot HorarioUcTurma);
    TurmaH(std::string CodUc, std::string CodTurma);
    int get_num_estudantes();
};

#endif //TURMAH_H
//
// Created by USER on 28/10/2022.
//
#include <list>
#include "slot.h"
#ifndef TURMAH_H
#define TURMAH_H

class TurmaH{
private:
    std::string codUc;
    std::string codTurma;
    std::list<Slot> horarioUcTurma;
    int num_estudantes = 0;
public:
    std::string getCodUc() const;
    std::string getCodTurma() const;
    std::list<Slot> getHorarioUcTurma() const;
    void addHorarioUcTurma(Slot HorarioUcTurma);
    TurmaH(std::string CodUc, std::string CodTurma);
    int get_num_estudantes();
};

#endif //TURMAH_H
