#include "Data.h"
#include <iostream>
Data::Data()
{
    dia = 1;
    mes = 1;
    ano = 1;

}

void Data::setDia(int d){
    dia = d;
}
void Data::setMes(int m){
    mes = m;
}
void Data::setAno(int a){
    ano = a;
}

int Data::getDia(){
    return dia;
}
int Data::getMes(){
    return mes;
}
int Data::getAno(){
    return ano;
}

void Data::avancarDia(){
    dia++;

}
int Data::getDaysMonth(int mes){

if (mes == 1){return 31;}
else if(mes == 2){return 28;}
else if(mes == 3){return 31;}
else if(mes == 4){return 30;}
else if(mes == 5){return 31;}
else if(mes == 6){return 30;}
else if(mes == 7){return 31;}
else if(mes == 8){return 31;}
else if(mes == 9){return 30;}
else if(mes == 10){return 31;}
else if(mes == 11){return 30;}
else if(mes == 12){return 31;}

}

void Data::verificaAtributos(){

if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        if(dia > 31 || dia < 1){
        std::cout << "Atributo dia Inválido" << std::endl;
        dia = 1;
        }
        else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
        if(dia > 30 || dia < 1){
        std::cout << "Atributo dia Inválido" << std::endl;
        dia = 1;
        }
        }
    }else if(mes > 12 || mes < 1){
        std::cout << "Atributo mês Inválido" << std::endl;
        mes = 01;
    }else if(ano < 0){
        std::cout << "Atributo ano Inválido" << std::endl;
        ano = 01;
    }
    else if(mes == 2){
          if(dia > 28 || dia < 1)  {
        std::cout << "Atributo dia Inválido" << std::endl;
        dia = 01;
          }
        }
}
