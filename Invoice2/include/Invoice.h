#ifndef INVOICE_H
#define INVOICE_H
#include <string>

class Invoice
{
    public:
        Invoice();
        float getInvoiceAmount();
        void verificaAtributos();
        void Print();

        //setters
        void setNumero(int N);
        void setDescri(std::string D);
        void setQt(int Qt);
        void setPreco(float P);

        //getters
        int getNumero();
        std::string getDescri();
        int getQuantidade();
        float getPreco();

    protected:

    private:
        int numero;
        std::string descri;
        int quantidade;
        float preco;
};

#endif // INVOICE_H
