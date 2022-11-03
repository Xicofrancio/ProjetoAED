//
// Created by USER on 28/10/2022.
//

#ifndef UCTURMA_H
#define UCTURMA_H

class UcTurma{
private:
    std::string codUc;
    std::string codTurma;
public:
    static int num_max_estudantes;
    std::string getCodUc() const;
    void setCodUc(std::string CodUc);
    std::string getCodTurma() const;
    void setCodTurma(std::string CodTurma);
    UcTurma(std::string CodUc, std::string CodTurma);
    UcTurma();
    bool operator==(const UcTurma ucTurma) const;
};

#endif //UCTURMA_H
