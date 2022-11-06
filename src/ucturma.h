//
// Created by USER on 28/10/2022.
//

#ifndef UCTURMA_H
#define UCTURMA_H

class UcTurma {
private:
    std::string codUc;
    std::string codTurma;
public:
    static int num_max_estudantes;

    std::string getCodUc() const; // retorna codigo da UC
    void setCodUc(std::string CodUc);// define o codigo da Uc
    std::string getCodTurma() const; // retorna o CodTurma
    void setCodTurma(std::string CodTurma); // define o CodTurma
    UcTurma(std::string CodUc, std::string CodTurma); // construtor de turma
    UcTurma(); // default construtor da turma
    bool operator==(const UcTurma ucTurma) const; // comparador de UcTurma
};

#endif //UCTURMA_H
