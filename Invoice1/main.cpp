#include <iostream>
#include "Invoice.h"

using namespace std;

int main()
{
    Invoice invoice1, invoice2;

    cin >> invoice1.numero;
    getchar();
    getline(cin, invoice1.descri);
    cin >> invoice1.quant;
    cin >> invoice1.preco;

    cin >> invoice2.numero;
    getchar();
    getline(cin, invoice2.descri);
    cin >> invoice2.quant;
    cin >> invoice2.preco;

    invoice1.verificaAtributos();
    invoice2.verificaAtributos();

    cout << invoice1.numero << " - " << invoice1.descri << " - " << invoice1.quant << " - " << invoice1.preco << " - " << invoice1.getInvoiceAmount() << endl;
    cout << invoice2.numero << " - " << invoice2.descri << " - " << invoice2.quant << " - " << invoice2.preco << " - " << invoice2.getInvoiceAmount() << endl;

    return 0;
}
