//
// Created by USER on 29/10/2022.
//

#include "estudante.h"
#include "gestordehorarios.h"
#include "pedido.h"
#include "slot.h"
#include "turmah.h"
#include "ucturma.h"

TurmaH::TurmaH(std::string CodUc, std::string CodTurma){codUc = CodUc; codTurma = CodTurma;}

std::string TurmaH::getCodTurma() const{return codTurma;}

std::string TurmaH::getCodUc() const{return codUc;}

std::list<Slot> TurmaH::getHorarioUcTurma() const{return horariosUcTurma;}

int TurmaH::get_num_estudantes() {return num_estudantes;}

void TurmaH:: addEstudante(){num_estudantes++;}

void TurmaH::addHorarioUcTurma(Slot SlotUcTurma) {horariosUcTurma.push_back(SlotUcTurma);}