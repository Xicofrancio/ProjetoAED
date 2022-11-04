    //
// Created by USER on 28/10/2022.
//
#include "ucturma.h"
#ifndef SLOT_H
#define SLOT_H

class Slot{
private:
    std::string dia;
    float horaInicio;
    float horaFim;
    std::string tipo;
    float duracao;
    UcTurma ucturma;
public:
    std::string getDia() const; // retorna o dia da aula
    void setDia(std::string Dia); // define o dia da aula
    float getHoraInicio() const; // retorna hora inicial em float
    void setHoraInicio(float HoraInicio); // define hora inicial em float
    float getHoraFim() const;
    void setHoraFim(float HoraFim);
    void setDuracao(float Duracao);
    float getDuracao() const;
    UcTurma getUCTurma()const;
    void setUCTurma(UcTurma ucTurma);
    std::string getTipo() const;
    void setTipo(std::string Tipo);

    Slot(std::string Dia, float HoraInicio, float HoraFim, std::string Tipo,float Duracao, UcTurma ucTurma);
    Slot();

    bool erro(Slot slot)const;
};

#endif //SLOT_H
