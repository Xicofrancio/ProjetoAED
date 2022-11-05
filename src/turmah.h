//
// Created by USER on 28/10/2022.
//
#include <list>
#include "slot.h"
#ifndef TURMAH_H
#define TURMAH_H

class TurmaH{
private:
    std::string codUc; // codigo da UC
    std::string codTurma; // codigo da Turma
    std::list<Slot> horariosUcTurma; // Horario da turma
    int num_estudantes = 0; // numero de estudantes
public:
    /*!
     * retorna o código da UC
     * @return
     */
    std::string getCodUc() const;// retorna codigo da Uc
    /*!
     * retorna o código da Turma
     * @return
     */
    std::string getCodTurma() const; // retorna codigo da Turma
    /*!
     * retorna o horário dessa turma por uc;
     * @return
     */
    std::list<Slot> getHorarioUcTurma() const; // retorna o horario da turma
    /*!
     * adiciona um horario a essa turma
     * @param HorarioUcTurma
     */
    void addHorarioUcTurma(Slot HorarioUcTurma);// adiciona um horario de uma Uc a turma
    /*!
     * constroi um objeto de Turma em que so seja necessario o código da uc e da turma
     * @param CodUc
     * @param CodTurma
     */
    TurmaH(std::string CodUc, std::string CodTurma);//construtor da turma
    /*!
     * retorna o numero de alunos
     * @return
     */
    int get_num_estudantes();// retorna o numero de estudantes
    /*!
     * adiciona 1 ao numero de estudantes da turma
     */
    void addEstudante();
    /*!
     * confirma se a turma não atingiu o numero máximo
     * @return
     */
    bool is_possible();
};

#endif //TURMAH_H
//
// Created by USER on 28/10/2022.
//
#include <list>
#include "slot.h"
#ifndef TURMAH_H
#define TURMAH_H

class TurmaH{
private:
    std::string codUc;
    std::string codTurma;
    std::list<Slot> horarioUcTurma;
    int num_estudantes = 0;
public:
    std::string getCodUc() const;
    std::string getCodTurma() const;
    std::list<Slot> getHorarioUcTurma() const;
    void addHorarioUcTurma(Slot HorarioUcTurma);
    TurmaH(std::string CodUc, std::string CodTurma);
    int get_num_estudantes();
};

#endif //TURMAH_H
