#include "Data.h"
#include <string>
Data::Data()
{
    dia = 1;
    mes = 1;
    ano = 1;
}


void Data::setDia(int D){

    dia = D;

}
void Data::setMes(int M){

    mes = M;

}
void Data::setAno(int A){

    ano = A;

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

void Data::printData(){

std::string nomeMes;

if(mes == 1){nomeMes = "Janeiro";}
else if(mes == 2){nomeMes = "Fevereiro";}
else if(mes == 3){nomeMes = "Mar�o";}
else if(mes == 4){nomeMes = "Abril";}
else if(mes == 5){nomeMes = "Maio";}
else if(mes == 6){nomeMes = "Junho";}
else if(mes == 7){nomeMes = "Julho";}
else if(mes == 8){nomeMes = "Agosto";}
else if(mes == 9){nomeMes = "Setembro";}
else if(mes == 10){nomeMes = "Outubro";}
else if(mes == 11){nomeMes = "Novembro";}
else if(mes == 12){nomeMes = "Dezembro";}
else if (mes > 12){nomeMes = "Indefinido";}


std::cout << dia << " de " << nomeMes << " de " << ano << std::endl;

}
