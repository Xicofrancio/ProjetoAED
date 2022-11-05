//
// Created by USER on 28/10/2022.
//
#include <list>
#include "slot.h"
#ifndef TURMAH_H
#define TURMAH_H

class TurmaH{
private:
    std::string codUc; // codigo da UC
    std::string codTurma; // codigo da Turma
    std::list<Slot> horariosUcTurma; // Horario da turma
    int num_estudantes = 0; // numero de estudantes
public:
    std::string getCodUc() const; // retorna codigo da Uc
    std::string getCodTurma() const; // retorna codigo da Turma
    std::list<Slot> getHorarioUcTurma() const; // retorna o horario da turma
    void addHorarioUcTurma(Slot HorarioUcTurma);// adiciona um horario de uma Uc a turma
    void addEstudante();
    TurmaH(std::string CodUc, std::string CodTurma);//construtor da turma
    int get_num_estudantes();// retorna o numero de estudantes
    void addEstudante();
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
