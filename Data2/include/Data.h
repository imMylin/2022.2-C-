#ifndef DATA_H
#define DATA_H

#include <iostream>
class Data
{
    public:
        Data();

        //metodos setters
        void setDia(int D);
        void setMes(int M);
        void setAno(int A);

        //metodos getters
        int getDia();
        int getMes();
        int getAno();

        //metodo print
        void printData();

    protected:

    private:
        //atributos
        int dia;
        int mes;
        int ano;
};

#endif // DATA_H
