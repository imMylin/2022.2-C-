#include "Invoice.h"

Invoice::Invoice()
{
    //ctor
}

void Invoice::verificaAtributos(){

 if(quant < 0){
    quant = 0;
 }else if(preco < 0){
    preco = 0.0;
 }
}

float Invoice::getInvoiceAmount(){

    return quant * preco;

}
