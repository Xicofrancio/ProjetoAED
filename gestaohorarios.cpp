//
// Created by USER on 29/10/2022.
//

#include "estudante.h"
#include "gestaohorarios.h"
#include "pedido.h"
#include "slot.h"
#include "turmah.h"
#include "ucturma.h"

GestaoHorarios::GestaoHorarios(std::set<Estudante> Estudantes, std::vector<TurmaH> Horario) {
    estudantes = Estudantes;
    horario = Horario;
}

std::set<Estudante> GestaoHorarios::getEstudantes() const{
    return estudantes;
}

std::vector<TurmaH> GestaoHorarios::getHorario() const{
    return horario;
}

void GestaoHorarios::setEstudantes(std::set<Estudante> Estudantes) {
    estudantes = Estudantes;
}

void GestaoHorarios::setHorario(std::vector<TurmaH> Horario) {
    horario = Horario;
}

