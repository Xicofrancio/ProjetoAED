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
    /*!
     *  retorna o dia da aula
     * @return
     */
    std::string getDia() const;
    /*!
     * define o dia da aula
     * @param Dia
     */
    void setDia(std::string Dia);
    /*!
     * retorna a hora inicial da aula
     * @return
     */
    float getHoraInicio() const; // retorna hora inicial em float
    /*!
     * define a hora inicial da aula
     * @param HoraInicio
     */
    void setHoraInicio(float HoraInicio); // define hora inicial em float
    /*!
     * retorna a hora final da aula(hora inicial+duração)
     * @return
     */
    float getHoraFim() const;
    /*!
     * define a hora final da aula
     * @param HoraFim
     */
    void setHoraFim(float HoraFim);
    /*!
     * define a duração da aula
     * @param Duracao
     */
    void setDuracao(float Duracao);
    /*!
     * retorna a duração da aula
     * @return
     */
    float getDuracao() const;
    /*!
     * retorna a UcTurma a que pertence a aula
     * @return
     */
    UcTurma getUCTurma()const;
    /*!
     * define a UcTurma a que pertence a aula
     * @param ucTurma
     */
    void setUCTurma(UcTurma ucTurma);
    /*!
     * retorna o tipo de aula(T,TP,PL)
     * @return
     */
    std::string getTipo() const;
    /*!
     * define o tipo de aula
     * @param Tipo
     */
    void setTipo(std::string Tipo);
    /*!
     * cria um "slot" que representa as informações correspondentes a aula: dia, hora inicial, hora final, duração, tipo  e ucturma
     * @param Dia
     * @param HoraInicio
     * @param HoraFim
     * @param Tipo
     * @param Duracao
     * @param ucTurma
     */
    Slot(std::string Dia, float HoraInicio, float HoraFim, std::string Tipo,float Duracao, UcTurma ucTurma);
    /*!
     * construtor default, cria um "slot" de uma aula sem ser necessário parametros
     */
    Slot();
    /*!
     * impossibilita a sobreposiçoes de aulas
     * @param slot
     * @return
     */
    bool erro(Slot slot)const;
};

#endif //SLOT_H
