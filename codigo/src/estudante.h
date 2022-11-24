//
// Created by USER on 28/10/2022.
//

#include <list>
#include <queue>
#include "string"
#include "ucturma.h"


#ifndef ESTUDANTE_H
#define ESTUDANTE_H

class Pedido;

class Estudante {
private:
    int numero;
    std::string nome;
    std::list<UcTurma> turmas;
public:
    Estudante(int Numero, std::string Nome);

    /*!
     * Dá-nos o número de um certo estudante
     * @return número de estudante
     */
    int getNumero() const;

    /*!
     * Permite definir o número para um estudante
     * @param Numero
     */
    void setNumero(int Numero);

    /*!
     * Dá-nos o nome de um certo estudante
     * @return nome de estudante
     */
    std::string getNome() const;

    /*!
     * Permite definir o nome para um estudante
     * @param Nome
     */
    void setNome(std::string Nome);

    /*!
     * Dá-nos uma lista com as turmas
     * @return lista com turmas
     */
    std::list<UcTurma> getTurmas() const;

    /*!
     * Adiciona as turmas relativas ao estudante
     * @param ucTurma
     */
    void addUcTurma(const UcTurma &ucTurma);

    /*!
     * Remove turmas de um determinado estudante
     * @param ucTurma
     */
    void rmvUcTurma(const UcTurma &ucTurma);

    /*!
     * Ajuda-nos no set a comparar o número de estudantes
     * @param estudante
     * @return bool para a comparaçáo entre números
     */
    bool operator<(const Estudante estudante) const;

    /*!
     * Ajuda-nos no set a comparar o número de estudantes
     * @param estudante
     * @return bool para a igualdade dos números
     */
    bool operator==(const Estudante estudante) const;

    Estudante(int numero, std::string nome, std::list<UcTurma> turmas);
};

#endif //ESTUDANTE_H