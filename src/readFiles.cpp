//
// Created by David Castro on 04/11/2022.
//
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include "readFiles.h"
#include "estudante.h"
#include "slot.h"
using namespace std;


std::vector<std::string> readFiles::reducer(std::string Line, char &division) {
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

void readFiles::genHorarios(){
    string line;
    ifstream in("/Users/davidcastro/CLionProjects/untitled11/classes.csv");
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
                //cout <<  slot.getDia() <<endl;// turma
                //cout << slot.getHoraInicio() <<endl;// numero
                //cout << slot.getDuracao()<<endl;// dia
                //cout << slot.getHoraFim() <<endl;// hora incial
                //cout << slot.getTipo()<< endl;// duraÃ§ao
                //cout<<"turma: " << slot.getUCTurma().getCodTurma()<<". uc:" <<slot.getUCTurma().getCodUc()<<"."<<endl;// tipo
                horarios.push_back(slot);
            }

        }
    }
}

void readFiles::genUC(){
    string line;
    ifstream in("/Users/davidcastro/CLionProjects/untitled11/classes_per_uc.csv");
    if(in.is_open()) {
        (getline(in, line));
        while (getline(in, line)) {
            char& b = (char& ) ",";
            vector<string> UC =  reducer(line, b);
            for(auto c: UC){
                string l = UC[0];
                string s = UC[1];
                UcTurma ucTurma(l,s);
                ucturmas.push_back(ucTurma);
            }
        }
    }
}







void readFiles::genEtudantes() {
    string ant;
    string line;
    ifstream in("/Users/davidcastro/CLionProjects/untitled11/students_classes.csv");
    if (in.is_open()) {
        (getline(in, line));
        while (getline(in, line)) {
            char &b = (char &) ",";
            vector<string> Students = reducer(line, b);

            for (auto c: Students)
                if (c == Students[0] && ant != Students[0]) {
                    ant = c;
                    int l = stoi(Students[0]);
                    string s = Students[1];
                    UcTurma ucTURMA(Students[2], Students[3]);
                    bool exists = false;
                    for (auto c: estudantes) {
                        if (s == c.getNome()) {
                            c.addUcTurma(ucTURMA);
                            exists = true;
                            break;
                        }
                    }

                    if (!exists) {
                        Estudante estudante1(l, s);
                        estudante1.addUcTurma(ucTURMA);
                        estudantes.insert(estudante1);
                    }
                }

        }
    }
}

void readFiles::getHorarioEstudante(int numero_estudante) {
    getHorarioEstudanteDia(numero_estudante, "Monday");
    getHorarioEstudanteDia(numero_estudante, "Tuesday");
    getHorarioEstudanteDia(numero_estudante, "Wednesday");
    getHorarioEstudanteDia(numero_estudante, "Thursday");
    getHorarioEstudanteDia(numero_estudante, "Friday");
}

void readFiles::getHorarioEstudanteDia(int numero, string dia){
    set<string> array;
    for(auto c : estudantes){
        if(c.getNumero()==numero){
            for(auto &d: c.getTurmas()){
                for(auto &j: horarios){
                    if(d.getCodTurma()==j.getUCTurma().getCodTurma() && d.getCodUc() == j.getUCTurma().getCodUc()) {
                        if (dia == j.getDia()) {
                            ostringstream ss1,ss2,ss3;
                            ss1.precision(2);
                            ss2.precision(2);
                            ss3.precision(2);
                            ss1<<fixed<<j.getHoraInicio();
                            ss2<<fixed<<j.getHoraFim();
                            ss3<<fixed<<j.getDuracao();
                            string d_str1 = ss1.str();
                            string d_str2 = ss2.str();
                            string d_str3 = ss3.str();
                            string result =  "Uc: " + j.getUCTurma().getCodUc()+". Turma: " + j.getUCTurma().getCodTurma()+ ". Day: " + j.getDia() + ". Hora inicial: " + d_str1+ ". Hora final: " + d_str2 + ". Duraçao: "+d_str3 + ". Tipo: " + j.getTipo() + ".";
                            array.insert(result);
                        }
                    }
                }
            }
        }
    }
    for(auto a : array){
        cout<<a<<endl;
    }
}