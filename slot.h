//
// Created by USER on 28/10/2022.
//

#ifndef SLOT_H
#define SLOT_H

class Slot{
private:
    std::string dia;
    float horaInicio;
    float horaFim;
    std::string tipo;
public:
    std::string getDia() ;
    void setDia(std::string *Dia);
    float getHoraInicio();
    void setHoraInicio(float HoraInicio);
    float getHoraFim();
    void setHoraFim(float HoraFim);
    std::string getTipo();
    void setTipo(std::string *Tipo);
    Slot(std::string *Dia, float HoraInicio, float HoraFim, std::string *Tipo);
};

#endif //SLOT_H
