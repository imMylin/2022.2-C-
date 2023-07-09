#ifndef PESSOA_H
#define PESSOA_H
#include <string>

class Pessoa
{
    public:
        Pessoa();
        Pessoa(std::string nome);
        Pessoa(std::string nome, int idade, std::string telefone);

        //setters
        void setNome(std::string N);
        void setIdade(int I);
        void setTelefone(std::string T);

        //getters
        std::string getNome();
        int getIdade();
        std::string getTelefone();

    protected:

    private:
        std::string nome;
        int idade;
        std::string telefone;
};

#endif // PESSOA_H
