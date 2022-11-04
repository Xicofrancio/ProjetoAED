//
// Created by David Castro on 04/11/2022.
//
#include <iostream>
#include <fstream>
#include <vector>
#include "readFiles.h"
#include "estudante.h"
using namespace std;


vector<string> reducer(string Line, char& division){
    string medium;

    vector<string> result;
    size_t pos;
    while ((pos = Line.find(division)) != std::string::npos) {
        string token = Line.substr(0, pos);
        result.push_back(token);
        Line.erase(0, pos + 1);
    }
    result.push_back(Line);
    return result;
}

void readFiles::genEtudantes() {
    string ant;
    string line;
    ifstream in("C:\\Users\\USER\\Desktop\\Universidade\\2ano\\Algoritmos e estrutura de dados\\Fim\\csv\\students_classes.csv");
    if(in.is_open()) {
        (getline(in, line));
        while (getline(in, line)) {
            char& b = (char& ) ",";
            vector<string> Students =  reducer(line, b);
            for(auto c: Students){
                if(c==Students[0] && ant != Students[0]){
                    ant = c;
                    int l = stoi(Students[0]);
                    string s = Students[1];
                    Estudante estudante(l,s);
                    cout << estudante.getNome() << endl;
                    cout << estudante.getNumero() << endl;
                    estudantes.insert(estudante);
                }else{

                }

            }

        }
    }
}

void readFiles::genHorarios(){
    string line;
    ifstream in("C:\Users\USER\Desktop\Universidade\2ano\Algoritmos e estrutura de dados\Fim\csv\classes.csv");
    if(in.is_open()) {
        (getline(in, line));
        while (getline(in, line)) {
            char& b = (char& ) ",";
            vector<string> Horarios =  reducer(line, b);
            for(auto c: Horarios){
                string day = Horarios[2];
                string type = Horarios[5];
                float initial = stoi(Horarios[3]);
                float duracao = stoi(Horarios[4]);
                float final = initial + duracao;
                string uc = Horarios[1];
                string turma = Horarios[0];
                UcTurma ucTurma(uc, turma);
                Slot slot(day, initial, final, type, duracao, ucTurma);
                cout <<  slot.getDia() <<endl;// turma
                cout << slot.getHoraInicio() <<endl;// numero
                cout << slot.getDuracao()<<endl;// dia
                cout << slot.getHoraFim() <<endl;// hora incial
                cout << slot.getTipo()<< endl;// duraÃ§ao
                cout<<"turma: " << slot.getUCTurma().getCodTurma()<<". uc:" <<slot.getUCTurma().getCodUc()<<"."<<endl;// tipo
                horarios.push_back(slot);
            }

        }
    }
}
void readFiles::genUC() {
    string line;
    ifstream in("C:\Users\USER\Desktop\Universidade\2ano\Algoritmos e estrutura de dados\Fim\csv\classes_per_uc.csv");
    if(in.is_open()) {
        (getline(in, line));
        while (getline(in, line)) {
            char& b = (char& ) ",";
            vector<string> UC =  reducer(line, b);
            for(auto c: UC){
                string l = UC[0];
                string s = UC[1];
                UcTurma ucTurma(l,s);
                cout << ucTurma.getCodTurma() << endl;
                cout << ucTurma.getCodUc() << endl;
                ucturmas.push_back(ucTurma);
            }
        }

    }
}