#ifndef GESTOR_H
#define GESTOR_H

#include <vector>
#include <set>
#include <queue>
#include "estudante.h"
#include "turmah.h"
#include "pedido.h"

using namespace std;


class GestorDeHorarios {
private:
    set<Estudante> estudante;
    vector<Pedido> pedidosRejeitados;
    vector<TurmaH> horario;
    queue<Pedido> pedidosHold;
public:
    TurmaH inputUCTurma();

    /*!
     * Dá-nos o número de estudante
     * @param codigoEstudante
     * @param nomeEstudante
     * @return o número de estudante
     */
    int getNumeroEstudante(string codigoEstudante, string nomeEstudante);

    /*!
     * Verifica se o pedido foi concluido com sucesso
     * @return se o pedido foi concluido
     */
    bool concluirPedido();

    /*!
     * salva o pedido para ser usado depois
     * @param pedido
     */
    void salvarPedido(const Pedido pedido);

    /*!
     * adiciona uc a um estudante
     */
    void addUC();

    /*!
     * adiciona uma hora
     */
    void addHora();

    /*!
     * adiciona um estudante já existente a uma determinada uc/turma
     */
    void addEstudante();

    /*!
     * criva um novo estudante
     */
    void novoEstudante();

    /*!
     * devolve uma determinada turma
     * @param ucTurma
     * @return turma
     */
    TurmaH getTurmaH(const UcTurma &ucTurma) const;

    /*!
     * devolve os horarios de uma determinada turma
     * @param turma
     * @return horarios
     */
    list<Slot> getHorariosTurma(UcTurma turma);

    /*!
     * devolve o codigo da turma
     * @param codUC
     * @param codigoTurma
     * @return codigo turma
     */
    int getCodigoTurma(string codUC, const string &codigoTurma);

    /*!
     * verifica se o pedido não infringe nenhuma lei
     * @param newSchedule
     * @return pedido possivel ou não
     */
    bool pedidoPossivel(const vector<Slot> &newSchedule);

    /*!
     * permite criar um horario novo para uma certa turma
     * @param turmas
     * @param newTurmas
     * @return horario novo
     */
    vector<Slot> newSchedule(const list<UcTurma> &turmas, const vector<UcTurma> &newTurmas);
};


#endif //GESTOR_H
