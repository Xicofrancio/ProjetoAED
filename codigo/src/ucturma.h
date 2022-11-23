//
// Created by USER on 28/10/2022.
//
#include <iostream>
#ifndef UCTURMA_H
#define UCTURMA_H

class UcTurma{
private:
    std::string codUc;
    std::string codTurma;
public:
    /*!
     * retorna o codigo da UC
     * @return
     */
    std::string getCodUc() const; // retorna codigo da UC
    /*!
     * define o codigo da UC
     * @param CodUc
     */
    void setCodUc(std::string CodUc);// define o codigo da Uc
    /*!
     * retorna o codigo da turma
     * @return
     */
    std::string getCodTurma() const; // retorna o CodTurma
    /*!
     * define o codigo da turma
     * @param CodTurma
     */
    void setCodTurma(std::string CodTurma); // define o CodTurma
    /*!
     * cria uma UCTurma com os parametros de codigo de uc e codigo de turma
     * @param CodUc
     * @param CodTurma
     */
    UcTurma(std::string CodUc, std::string CodTurma); // construtor de turma
    /*!
     * constroi uma UCTurma sem precisar de parametros
     */
    UcTurma(); // default construtor da turma
    /*!
     * compara o codigo Uc e de Turma
     * @param ucTurma
     * @return
     */
    bool operator==(const UcTurma ucTurma) const; // comparador de UcTurma
};

#endif //UCTURMA_H
