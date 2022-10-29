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
    std::string getCodUc();
    void setCodUc();
    std::string getCodTurma();
    void setCodTurma();
    UcTurma(std::string CodUc, std::string CodTurma);
};

#endif //UCTURMA_H
