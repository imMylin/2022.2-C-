#include "Funcionario.h"

Funcionario::Funcionario()
{
    nome = " ";
    snome = " ";
    salario = 0.0;
}


void Funcionario::setNome(std::string N){
    nome = N;
}
void Funcionario::setSnome(std::string SN){
    snome = SN;
}
void Funcionario::setSalario(float S){
    salario = S;
}

std::string Funcionario::getNome(){
    return nome;
}
std::string Funcionario::getSnome(){
    return snome;
}
float Funcionario::getSalario(){
    return salario;
}

float Funcionario::getSalarioAnual(){
    return salario * 12;
}
void Funcionario::aumentaSalario(float percent){
    salario = salario + (salario * percent);
}
void Funcionario::verificaSalario(){
    if (salario < 0){
        salario = 0.0;
    }
}
