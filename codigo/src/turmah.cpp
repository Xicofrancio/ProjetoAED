//
// Created by USER on 29/10/2022.
//

#include "estudante.h"
#include "slot.h"
#include "turmah.h"

TurmaH::TurmaH(std::string CodUc, std::string CodTurma){codUc = CodUc; codTurma = CodTurma;}

std::string TurmaH::getCodTurma() const{return codTurma;}

std::string TurmaH::getCodUc() const{return codUc;}

std::list<Slot> TurmaH::getHorarioUcTurma() const{return horariosUcTurma;}

int TurmaH::get_num_estudantes() {return num_estudantes;}

bool TurmaH:: is_possible(){
    bool l = true;
    if(num_estudantes == 25){ l = false;}
    return l;
}

void TurmaH:: addEstudante(){if(is_possible())num_estudantes++;}

void TurmaH::addHorarioUcTurma(Slot SlotUcTurma) {horariosUcTurma.push_back(SlotUcTurma);}