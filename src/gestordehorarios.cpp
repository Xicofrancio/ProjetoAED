#include <iostream>
#include "gestordehorarios.h"
#include <iostream>
#include <fstream>
#include <string>
#include "estudante.h"
#include "ucturma.h"

using namespace std;


void GestorDeHorarios::salvarPedido(const Pedido pedido) {
    this->pedidosHold.push(pedido);
}


vector <string> destroy(const string &str, const char &b) {
    string value;
    vector <string> a;

    for (auto n: str) {
        if (n != b) value += n;
        else if (n == b && !value.empty()) {
            a.push_back(value);
            value = "";
        }
    }
    if (!value.empty()) a.push_back(value);

    return a;
}

int GestorDeHorarios::getCodigoTurma(string codUC, const string &codigoTurma) {
    for (int i = 0; i < horario.size(); i++) {
        if (this->horario[i].getCodTurma() == codigoTurma && this->horario[i].getCodUc() == codUC) {
            return i;
        }
    }
    return -1;
}

TurmaH GestorDeHorarios::inputUCTurma() {
    string codUc, codTurma;
    int pos = -1;
    while (true) {
        cin >> codUc;
        cin >> codTurma;
        if ((pos = this->getCodigoTurma(codUc, codTurma)) == -1)
            break;
        else
            cout << "Codigo - ";
    }
    return this->horario.at(pos);
}

bool GestorDeHorarios::pedidoPossivel(const vector <Slot> &newSchedule) {
    for (int i = 0; i < newSchedule.size() - 1; i++)
        for (int j = i + 1; j < newSchedule.size(); j++)
            if (newSchedule.at(i).erro(newSchedule.at(j)))
                return false;
    return true;
}

void GestorDeHorarios::addUC() {
    string line;
    ifstream in("classes_per_uc.csv");

    getline(in, line);
    while (getline(in, line)) {
        vector <string> v{destroy(line, ',')};
        TurmaH ucTurma(v[2], v[3]);
        this->horario.push_back(ucTurma);
    }
}

//TODO addHora
void GestorDeHorarios::addHora() {

}

list <Slot> GestorDeHorarios::getHorariosTurma(UcTurma turma) {
    return this->horario.at(this->getCodigoTurma(turma.getCodUc(), turma.getCodTurma())).getHorarioUcTurma();
}


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
void genEstudantes() {
    string line;
    ifstream in("students_classes.csv\"");
    if(in.is_open()) {
        (getline(in, line));
        while (getline(in, line)) {
            char& b = (char& ) ",";
            vector<string> Students =  reducer(line, b);
            for(auto c: Students){
                cout << "1: "<< Students[0] <<endl;// numero
                cout << "2: "<< Students[1] <<endl;// nome
                cout << "3: "<< Students[2] <<endl;// uc
                cout << "4: "<< Students[3] <<endl;// turma
            }

        }
    }
}

TurmaH GestorDeHorarios::getTurmaH(const UcTurma& ucTurma) const{
    for(auto turma : this->horario)
        if(turma.getCodUc() == ucTurma.getCodUc() && turma.getCodTurma() == ucTurma.getCodTurma())
            return turma;
}

//TODO concluirPedido
bool GestorDeHorarios::concluirPedido() {

}


vector <Slot> GestorDeHorarios::newSchedule(const list <UcTurma> &turmas, const vector <UcTurma> &newTurmas) {
    vector <Slot> novoHorario;
    for (auto turma: turmas) {

    }

}
