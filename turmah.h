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
public:
    std::string getCodUc() const;
    void setCodUc(std::string CodUc);
    std::string getCodTurma() const;
    void setCodTurma(std::string CodTurma);
    std::list<Slot> getHorarioUcTurma() const;
    void setHorarioUcTurma(std::list<Slot> HorarioUcTurma);
    TurmaH(std::string CodUc, std::string CodTurma, std::list<Slot> HorarioUcTurma);
};

#endif //TURMAH_H
