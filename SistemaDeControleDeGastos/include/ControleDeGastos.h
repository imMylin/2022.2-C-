#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include "Despesa.h"
#include <string>

class ControleDeGastos
{
    public:
        ControleDeGastos();
        void setDespesa(Despesa D, int pos);
        Despesa getDespesa(int pos);
        float calculaTotalDeDespesas(std::string tipo);
        float calculaTotalDeDespesas();
        bool existeDespesaDoTipo(std::string tipo);

    protected:

    private:
        Despesa despesas[100];
};

#endif // CONTROLEDEGASTOS_H
