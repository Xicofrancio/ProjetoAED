/*
#include <iostream>
#include "gestordehorarios.h"
#include <iostream>
#include <fstream>
#include <string>
#include "Estudante.h"
#include "UCTurma.h"

using namespace std;


void GestorDeHorarios::salvarPedido(const Pedido &pedido) {
    this->pedidosHold.push(pedido);
}



int GestorDeHorarios::getNumeroEstudante(const std::string codigoEstudante, const std::string nomeEstudante) {
    for (auto f: estudante) {
        if (to_string(f.getNumero()) == codigoEstudante &&  f.getNome() == nomeEstudante) {
            return f.getNumero();
        }
    }
}

int GestorDeHorarios::getCodigoTurma(const string codUC, const string codigoTurma) {
    for(auto f : horario){
        if(f.getCodTurma() == codigoTurma && f.getCodUc() == codUC){
            return f;
        }
    }
    return -1;
}

UCTurma Gestor::inputUCTurma() {
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

bool Gestor::pedidoPossivel(const vector <Slot> &newSchedule) {
    for (int i = 0; i < newSchedule.size() - 1; i++)
        for (int j = i + 1; j < newSchedule.size(); j++)
            if (newSchedule.at(i).erro(newSchedule.at(j)))
                return false;
    return true;
}

void Gestor::addUC() {
    string line;
    ifstream in("classes_per_uc.csv");

    getline(in, line);
    while (getline(in, line)) {
        vector <string> v{destroy(line, ',')};
        TurmaH ucTurma(v[2], v[3]);
        this->horario.push_back(ucTurma);
    }
}

void Gestor::addHorario() {
    string line;
    ifstream in("classes.csv");

    getline(in, line);
    while (getline(in, line)) {
        vector <string> v{destroy(line, ',')};
        int a = getCodigoTurma(v[0], v[1]);
        DiaSemana dia = Slot::stringToDiaSemana(v[2]);
        TipoAula tipo = Slot::stringToTipo(v[5]);
        float hora = stof(v[3]);
        float duracao = stof(v[4]);
        Slot slot(dia, hora, duracao, tipo);
        this->horario[a].addSlot(slot);
    }
}

list <Slot> Gestor::getHorariosTurma(UCTurma turma) {
    return this->horario.at(this->getCodigoTurma(turma.getCodUC(), turma.getCodTurma())).getHorarioUcTurma();
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

void Gestor::addEstudante() {
    string line;
    ifstream in("students_classes.csv");

    getline(in, line);
    while (getline(in, line)) {
        vector <string> v{destroy(line, ',')};
        Estudante estudante(v[0], v[1]);
        auto i = this->estudantes.find(estudante);
        if (i != this->estudantes.end()) {
            UCTurma ucTurma(v[2], v[3]);
            i->addUCTurma(ucTurma);
        } else
            this->estudantes.insert(estudante);
    }
}

void GestorDeHorarios::processarPedido() {
    vector <Slot> novoHorario;
    Pedido novoPedido = this->pedidosHold.front();
    switch (novoPedido.getTipoPedido()) {
        case REMOVER:
            novoPedido.getEstudante().rmUCTurma(novoPedido.getUCDesejadas().at(0));
            break;
        case ADICIONAR:
            size_t pos = this->getCodigoTurma(
                    novoPedido.getUCDesejadas().at(0).getCodUC(),
                    novoPedido.getUCDesejadas().at(0).getCodTurma());

            for (auto i: this->horario.at(pos).getHorarioUcTurma())
                if (i.gettipo() == TP || i.gettipo() == PL)
                    novoHorario.push_back(i);
            for (auto i: novoPedido.getEstudante().getTurmas())
                for (auto j: this->horario.at(this->getCodigoTurma(i.getCodUC(), i.getCodTurma())).getHorarioUcTurma())
                    if (j.gettipo() == TP || j.gettipo() == PL)
                        novoHorario.push_back(j);


            break;
        case ALTERAR:

            break;
        case ALTERARCONJ:
            break;
    }
}


vector <Slot> Gestor::newSchedule(const list <UCTurma> &turmas, const vector <UCTurma> &newTurmas) {
    vector <Slot> novoHorario;
    for (auto turma: turmas) {

    }

}
*/