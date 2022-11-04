//
// Created by USER on 29/10/2022.
//

#include "estudante.h"
#include "turmah.h"
#include "ucturma.h"

UcTurma::UcTurma(std::string CodUc, std::string CodTurma) {codUc = CodUc; codTurma = CodTurma;}

std::string UcTurma::getCodTurma() const{return codTurma;}

std::string UcTurma::getCodUc() const{return codUc;}

void UcTurma::setCodTurma(std::string CodTurma) {codTurma = CodTurma;}

void UcTurma::setCodUc(std::string CodUc) {codUc = CodUc;}

bool UcTurma::operator==(const UcTurma ucTurma) const { codUc == ucTurma.codUc && codTurma == ucTurma.codTurma;}

UcTurma::UcTurma() {
    codTurma = "";
    codUc = "";
}