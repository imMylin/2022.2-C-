#ifndef DESPESA_H
#define DESPESA_H
#include <string>

class Despesa
{
    public:
        Despesa();

        void setNome(std::string n);
        void setTipo(std::string tipo);
        void setValor(float val);

        std::string getNome();
        std::string getTipo();
        float getValor();


    protected:

    private:
        std::string nome;
        std::string tipoDeGasto;
        float valor;
};

#endif // DESPESA_H
