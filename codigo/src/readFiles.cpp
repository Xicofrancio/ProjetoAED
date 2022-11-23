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
#include <iostream>
#include <iomanip>
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
    ifstream in("C:\\Users\\USER\\Desktop\\Universidade\\2ano\\Algoritmos e estrutura de dados\\Fim\\csv\\classes.csv");
    if(in.is_open()) {
        (getline(in, line));
        while (getline(in, line)) {
            char& b = (char& ) ",";
            vector<string> Horarios =  reducer(line, b);

            string day = Horarios[2];
            string type = Horarios[5];
            float initial = stof(Horarios[3]);
            float duracao = stof(Horarios[4]);
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

void readFiles::genUC(){
    string line;
    ifstream in("C:\\Users\\USER\\Desktop\\Universidade\\2ano\\Algoritmos e estrutura de dados\\Fim\\csv\\classes_per_uc.csv");
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
    ifstream in("C:\\Users\\USER\\Desktop\\Universidade\\2ano\\Algoritmos e estrutura de dados\\Fim\\csv\\students_classes.csv");
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
                        }
                    }

                    if (!exists) {
                        Estudante estudante1(l, s);
                        estudante1.addUcTurma(ucTURMA);
                        estudantes.push_back(estudante1);
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
    string s;
    set<string> horespecifico;

    /*for(auto c : horarios){
        cout << c.getUCTurma().getCodTurma() << " " <<  c.getUCTurma().getCodUc() << " " <<  c.getDia() << " " << c.getHoraInicio()  << " " <<  c.getHoraFim() << " " <<  c.getDuracao() << endl;
    }*/
    /*
    for(auto c: estudantes){
        for(auto f: c.getTurmas()){
            cout << c.getNome() << c.getNumero() << f.getCodUc() << f.getCodTurma();
        }
    }*/



    for(auto c: estudantes){
        if (c.getNumero() == numero){
            for(auto i: horarios){
                if(i.getDia() == dia){
                    UcTurma g = i.getUCTurma();
                    for(auto f : c.getTurmas()){
                        if((g.getCodTurma() == f.getCodTurma()) && (g.getCodUc() == f.getCodUc())){
                            s = "Nome: " + c.getNome() + " Numero: " + to_string(c.getNumero()) + " Dia: " + i.getDia() + " Tipo de aula: " + i.getTipo() + " Hora inicio-Hora fim: " +to_string(i.getHoraInicio()) + "-" +to_string(i.getHoraFim()) + " Duracao: " + to_string(i.getDuracao());
                            horespecifico.insert(s);
                        }
                    }
                }
            }
        }

    }

    for(auto o : horespecifico){
        cout << o << endl;
    }

    horespecifico = {};


}

void readFiles::visualizarEstudantes() {
    for(auto i: estudantes){
        cout << "Nome: " << i.getNome() << "  " << "Numero: " << i.getNumero() << endl;
    }
}



