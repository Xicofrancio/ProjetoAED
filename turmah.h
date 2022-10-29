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
    std::string getCodUc();
    void setCodUc();
    std::string getCodTurma();
    void setCodTurma();
    std::list<Slot> getHorarioUcTurma();
    void setHorarioUcTurma();
    TurmaH(std::string CodUc, std::string CodTurma, std::list<Slot> HorarioUcTurma);
};

#endif //TURMAH_H
