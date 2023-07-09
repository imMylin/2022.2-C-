#include <iostream>
#include "Data.h"

using namespace std;

int main()
{
    Data date;
    int dia, mes, ano;
    cin >> dia >> mes >> ano;

    date.setDia(dia);
    date.setMes(mes);
    date.setAno(ano);

    date.printData();
    return 0;
}
