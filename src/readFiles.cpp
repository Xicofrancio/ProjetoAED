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
                }else{

                }

            }

        }
    }
}

void readFiles::genHorarios(){
    string line;
    ifstream in("C:\\Users\\USER\\Desktop\\Universidade\\2ano\\Algoritmos e estrutura de dados\\Fim\\csv\\classes.csv");
    if(in.is_open()) {
        (getline(in, line));
        while (getline(in, line)) {
            char& b = (char& ) ",";
            vector<string> Horarios =  reducer(line, b);
            for(auto c: Horarios){
                cout << "1: "<< Horarios[0] <<endl;// turma
                cout << "2: "<< Horarios[1] <<endl;// numero
                cout << "3: "<< Horarios[2] <<endl;// dia
                cout << "4: "<< Horarios[3] <<endl;// hora incial
                cout << "5: " << Horarios[4]<< endl;// duraÃ§ao
                cout << "6: "<< Horarios[5]<<endl;// tipo
            }

        }
    }
}

void readFiles::genUC() {
    string line;
    ifstream in("C:\\Users\\USER\\Desktop\\Universidade\\2ano\\Algoritmos e estrutura de dados\\Fim\\csv\\classes_per_uc.csv");
    if(in.is_open()) {
        (getline(in, line));
        while (getline(in, line)) {
            char& b = (char& ) ",";
            vector<string> Turmas =  reducer(line, b);
            for(auto c: Turmas){
                cout << "1: "<< Turmas[0] <<endl;// uc
                cout << "2: "<< Turmas[1] <<endl;// Turma
            }

        }
    }
}