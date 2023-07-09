#include <iostream>
#include "Invoice.h"

using namespace std;

int main()
{
    Invoice invoices[2];
    int num[2];
    string descri[2];
    int quantidade[2];
    float preco[2];

    for(int i = 0; i<2; i++){

        cin >> num[i];
        getchar();
        getline(cin, descri[i]);
        cin >> quantidade[i];
        cin >> preco[i];

        invoices[i].setNumero(num[i]);
        invoices[i].setDescri(descri[i]);
        invoices[i].setQt(quantidade[i]);
        invoices[i].setPreco(preco[i]);

        invoices[i].verificaAtributos();

    }

    for(int i = 0; i < 2; i++){
        invoices[i].Print();
    }
    return 0;
}
