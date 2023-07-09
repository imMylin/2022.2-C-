#include "Pessoa.h"

Pessoa::Pessoa()
{
    //ctor
}

Pessoa::Pessoa(std::string nome){


}
Pessoa::Pessoa(std::string nome, int idade, std::string telefone){


}


void Pessoa::setNome(std::string N){
    nome = N;
}
void Pessoa::setIdade(int I){
    idade = I;
}
void Pessoa::setTelefone(std::string T){
    telefone = T;
}
std::string Pessoa::getNome(){
    return nome;
}
int Pessoa::getIdade(){
    return idade;
}
std::string Pessoa::getTelefone(){
    return telefone;
}
