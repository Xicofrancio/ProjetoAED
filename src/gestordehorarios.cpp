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

int GestorDeHorarios::getNumeroEstudante(string codigoEstudante,string nomeEstudante) {
    for (int i = 0; i < this->estudante.size(); i++) {
        if (this->estudante[i].getCodTurma() == codigoEstudante && this->estudante[i].getCodUc() == nomeEstudante) {
            return i;
        }
    }
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

UcTurma GestorDeHorarios::inputUCTurma() {
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

//void GestorDeHorarios::addHora() {
//    string line;
//    ifstream in("classes.csv");
//
//    getline(in, line);
//    while (getline(in, line)) {
//        vector <string> v{destroy(line, ',')};
//        int a = getCodigoTurma(v[0], v[1]);
//        DiaSemana dia = Slot::stringToDiaSemana(v[2]);
//        TipoAula tipo = Slot::stringToTipo(v[5]);
//        float hora = stof(v[3]);
//        float duracao = stof(v[4]);
//        Slot slot(dia, hora, duracao, tipo);
//        this->horario[a].addHorarioUcTurma(slot);
//    }
//}

list <Slot> GestorDeHorarios::getHorariosTurma(UcTurma turma) {
    return this->horario.at(this->getCodigoTurma(turma.getCodUc(), turma.getCodTurma())).getHorarioUcTurma();
}

void GestorDeHorarios::addEstudante() {
    string line;
    ifstream in("students_classes.csv");

    getline(in, line);
    while (getline(in, line)) {
        vector <string> v{destroy(line, ',')};
        Estudante estudante(v[0], v[1]);
        auto i = this->estudante.find(estudante);
        if (i != this->estudante.end()) {
            UcTurma ucTurma(v[2], v[3]);
            i->addUcTurma(ucTurma);
        } else
            this->estudante.insert(estudante);
    }
}

//void GestorDeHorarios::concluirPedido() {
//    vector <Slot> novoHorario;
//    Pedido novoPedido = this->pedidosHold.front();
//    switch (novoPedido.getTipoPedido()) {
//        case REMOVER:
//            novoPedido.getEstudante().rmUCTurma(novoPedido.getUCDesejadas().at(0));
//            break;
//        case ADICIONAR:
//            size_t pos = this->getCodigoTurma(
//                    novoPedido.getUCDesejadas().at(0).getCodUc(),
//                    novoPedido.getUCDesejadas().at(0).getCodTurma());
//
//            for (auto i: this->horario.at(pos).getHorarioUcTurma())
//                if (i.gettipo() == TP || i.gettipo() == PL)
//                    novoHorario.push_back(i);
//            for (auto i: novoPedido.getEstudante().getTurmas())
//                for (auto j: this->horario.at(this->getCodigoTurma(i.getCodUc(), i.getCodTurma())).getHorarioUcTurma())
//                    if (j.gettipo() == TP || j.gettipo() == PL)
//                        novoHorario.push_back(j);
//
//
//            break;
//        case ALTERAR:
//
//            break;
//        case ALTERARCONJ:
//            break;
//    }
//}


//vector <Slot> GestorDeHorarios::newSchedule(const list <UcTurma> &turmas, const vector <UcTurma> &newTurmas) {
//    vector <Slot> novoHorario;
//    for (auto turma: turmas) {
//
//    }

}
