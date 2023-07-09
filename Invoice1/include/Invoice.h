#ifndef INVOICE_H
#define INVOICE_H
#include <string>

class Invoice
{
    public:
        Invoice();

        int numero;
        std::string descri;
        int quant;
        float preco;
        void verificaAtributos();
        float getInvoiceAmount();

    protected:

    private:
};

#endif // INVOICE_H
