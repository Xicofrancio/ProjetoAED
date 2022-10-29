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
    std::string getDia();
    void setDia();
    float getHoraInicio();
    void setHoraInicio();
    float getHoraFim();
    void setHoraFim();
    std::string getTipo();
    void setTipo();
    Slot(std::string Dia, float HoraInicio, float HoraFim, std::string Tipo);
};

#endif //SLOT_H
