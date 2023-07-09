#include <iostream>
#include "Data.h"

using namespace std;

int main()
{
    Data date;
    int dia, mes, ano;
    int qdias, x;

    cin >> dia >> mes >> ano;
    cin >> qdias;

    date.setDia(dia);
    date.setMes(mes);
    date.setAno(ano);

    x = date.getDaysMonth(mes);

    date.verificaAtributos();

    for(int i = 0; i < qdias; i++){
        date.avancarDia();
        if(date.getDia() > x){
            date.setDia(1);
            date.setMes(mes + 1);
            if(date.getMes() > 12){
                date.setMes(1);
                date.setAno(ano + 1);
            }/*if(date.getMes() == 2 && date.getDia() > 28){
                date.setMes(mes + 1);
                date.setDia(1);
                }*/
        }
    }



    if(date.getDia() < 10 && date.getMes() < 10){
        cout << "0" << date.getDia() << "/" << "0" << date.getMes() << "/" << date.getAno();
    }else if(date.getMes() < 10){
        cout << date.getDia() << "/" << "0" << date.getMes() << "/" << date.getAno();
    }else if(date.getDia() < 10){
        cout << "0" << date.getDia() << "/" << date.getMes() << "/" << date.getAno();
    }else{
        cout << date.getDia() << "/" << date.getMes() << "/" << date.getAno();}

    return 0;
}
