#include "Invoice.h"
#include <iostream>

Invoice::Invoice()
{
    //ctor
}

float Invoice::getInvoiceAmount(){

return quantidade * preco;

}

void Invoice::verificaAtributos(){

if(quantidade < 0){
    quantidade = 0;
 }else if(preco < 0){
    preco = 0.0;
 }

}

void Invoice::Print(){

    std::cout << numero << " - " << descri << " - " << quantidade << " - " << preco << " - " << getInvoiceAmount() << std::endl;


}

void Invoice::setNumero(int N){
numero = N;
}
void Invoice::setDescri(std::string D){
descri = D;
}
void Invoice::setQt(int Qt){
quantidade = Qt;
}
void Invoice::setPreco(float P){
preco = P;
}
int Invoice::getNumero(){
return numero;
}
std::string Invoice::getDescri(){
return descri;
}
int Invoice::getQuantidade(){
return quantidade;
}
float Invoice::getPreco(){
return preco;
}
