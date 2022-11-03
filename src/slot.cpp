//
// Created by USER on 29/10/2022.
//

#include "estudante.h"
#include "gestordehorarios.h"
#include "pedido.h"
#include "slot.h"
#include "turmah.h"
#include "ucturma.h"

Slot::Slot(std::string Dia, float HoraInicio, float HoraFim, std::string Tipo,float duracao) {dia = Dia; horaInicio = HoraInicio; horaFim = HoraFim; tipo = Tipo; duracao = Duracao;}

std::string Slot::getDia() const{return dia;}

float Slot::getHoraInicio() const{return horaInicio;}

float Slot::getHoraFim() const{return horaFim;}

std::string Slot::getTipo() const{return tipo;}

float Slot::getDuracao() const {return duracao;}

void Slot::setDia(std::string Dia) {dia = Dia;}

void Slot::setHoraInicio(float HoraInicio) {horaInicio = HoraInicio;}

void Slot::setHoraFim(float HoraFim) {horaFim = HoraFim;}

void Slot::setTipo(std::string Tipo) {tipo = Tipo;}

void Slot::setDuracao(float Duracao) {duracao= Duracao;}

bool Slot::erro(Slot slot) const {

    if(dia != slot.dia)return false;

    if(horaInicio == slot.horaInicio) return true;

    if(horaInicio < slot.horaInicio)return slot.horaInicio < slot.horaFim;


    else{return horaInicio < slot.horaFim;}

}

Slot::Slot(){
    dia = "Monday";
    tipo = "T";
    dia= 1;
    horaInicio = 0;
    horaFim = 0;
    duracao = 0;
}
