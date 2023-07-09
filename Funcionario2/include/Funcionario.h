#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

class Funcionario
{
    public:
        Funcionario();
        float getSalarioAnual();
        void aumentaSalario(float percent);
        void verificaSalario();

        //setters
        void setNome(std::string N);
        void setSnome(std::string SN);
        void setSalario(float S);

        //getters
        std::string getNome();
        std::string getSnome();
        float getSalario();

    protected:

    private:
        std::string nome;
        std::string snome;
        float salario;
};

#endif // FUNCIONARIO_H
