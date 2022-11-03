//
// Created by USER on 29/10/2022.
//

#include "estudante.h"
#include "gestaohorarios.h"
#include "pedido.h"
#include "slot.h"
#include "turmah.h"
#include "ucturma.h"

TurmaH::TurmaH(std::string *CodUc, std::string CodTurma, std::list<Slot> HorarioUcTurma){codUc = CodUc; codTurma = CodTurma; horarioUcTurma = HorarioUcTurma;}

std::string TurmaH::getCodTurma() const{return codTurma;}

std::string TurmaH::getCodUc() const{return codUc;}

std::list<Slot> TurmaH::getHorarioUcTurma() const{return horarioUcTurma;}

void TurmaH::setCodTurma(std::string CodTurma) {codTurma = CodTurma;}

void TurmaH::setCodUc(std::string CodUc) {codUc = CodUc;}

void TurmaH::setHorarioUcTurma(std::list<Slot> HorarioUcTurma) {horarioUcTurma = HorarioUcTurma;}