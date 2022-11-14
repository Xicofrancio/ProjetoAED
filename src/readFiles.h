//
// Created by David Castro on 04/11/2022.
//
#include "slot.h"
#include "estudante.h"
#include "turmah.h"
#include <vector>
#include <set>

#ifndef UNTITLED8_READFILES_H
#define UNTITLED8_READFILES_H


class readFiles {


public:
    std::vector<Slot> horarios;
    std::set<Estudante> estudantes;
    std::vector<UcTurma> ucturmas;
    /*!
     * armazena estudantes na respetiva classe
     */
    void genEtudantes();

    /*!
     * armazena horarios na respetiva classe
     */
    void genHorarios();

    /*!
     * armazena uc na respetiva classe
     */
    void genUC();

    /*!
     * devolve o horário de um determinado estudante
     * @param numero_estudante
     */
    void getHorarioEstudante(int numero_estudante);

    /*!
     * devolve o horário de um determinado estudante de acordo com o dia da semana
     * @param numero
     * @param dia
     */
    void getHorarioEstudanteDia(int numero, std::string dia);

    /*!
     * retira as virgulas de modo a armazenar dados sm virgulas
     * @param Line
     * @param division
     * @return os ficheiros sem virgulas de separação
     */
    std::vector<std::string> reducer(std::string Line, char &division);
};


#endif //UNTITLED8_READFILES_H
