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
    float duracao;
public:
    std::string getDia() const;
    void setDia(std::string Dia);
    float getHoraInicio() const;
    void setHoraInicio(float HoraInicio);
    float getHoraFim() const;
    void setHoraFim(float HoraFim);
    void setDuracao(float Duracao);
    float getDuracao() const;

    std::string getTipo() const;
    void setTipo(std::string Tipo);

    Slot(std::string Dia, float HoraInicio, float HoraFim, std::string Tipo,float Duracao);
    Slot();

    bool erro(Slot slot)const;
};

#endif //SLOT_H
