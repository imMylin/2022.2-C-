#ifndef DATA_H
#define DATA_H



class Data
{
    public:
        Data();

        void setDia(int d);
        void setMes(int m);
        void setAno(int a);

        int getDia();
        int getMes();
        int getAno();

        void avancarDia();
        int getDaysMonth(int mes);
        void verificaAtributos();

    protected:

    private:
        int dia;
        int mes;
        int ano;
};

#endif // DATA_H
