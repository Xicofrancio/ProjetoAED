//
// Created by USER on 29/10/2022.
//

#include "estudante.h"
#include "gestaohorarios.h"
#include "pedido.h"
#include "slot.h"
#include "turmah.h"
#include "ucturma.h"

Slot::Slot(std::string Dia, float HoraInicio, float HoraFim, std::string Tipo) {dia = Dia; horaInicio = HoraInicio; horaFim = HoraFim; tipo = Tipo;}

std::string Slot::getDia() const{return dia;}

float Slot::getHoraInicio() const{return horaInicio;}

float Slot::getHoraFim() const{return horaFim;}

std::string Slot::getTipo() const{return tipo;}

void Slot::setDia(std::string Dia) {dia = Dia;}

void Slot::setHoraInicio(float HoraInicio) {horaInicio = HoraInicio;}

void Slot::setHoraFim(float HoraFim) {horaFim = HoraFim;}

void Slot::setTipo(std::string Tipo) {tipo = Tipo;}
