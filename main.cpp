#include <iostream>
#include <sstream>
#include <fstream> //Para ler o ficheiro .csv
#include <vector>
#include "src/estudante.h"
#include "src/gestordehorarios.h"
#include "src/turmah.h"
#include "src/ucturma.h"

using namespace std;

void ler(){
    list<UcTurma> UCTURMAS;
    ifstream inputfile;
    inputfile.open("C:\\Users\\USER\\Desktop\\Universidade\\2ano\\Algoritmos e estrutura de dados\\Fim\\csv\\classes_per_uc.csv");
    string line;
    getline(inputfile,line);
    while(getline(inputfile,line)){
        string codUc;
        string codTurma;
        stringstream inputstring(line);
        getline( inputstring, codUc,',');
        getline(inputstring,codTurma,',');
        line = "";
        UcTurma ucturma1(codUc,codTurma);
        UCTURMAS.push_back(ucturma1);
    }
    for(const auto& c: UCTURMAS) {
        cout << c.getCodUc() << " " << c.getCodTurma() << endl;
    }
}

int main(){
    ler();
    return 0;
}

