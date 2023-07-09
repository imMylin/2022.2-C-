#include <iostream>

using namespace std;
int main(){

int salario, vEmprestimo, qParcelas;
    cin >> salario;
while(salario <= 0){
    cin >> salario;
}
    cin >> vEmprestimo;
while(vEmprestimo <= 0){
    cin >> vEmprestimo;
}
    cin >> qParcelas;

while(qParcelas <= 0){
    cin >> qParcelas;
}

if(vEmprestimo / qParcelas > salario * 0.3){
    cout << "Emprestimo nao pode ser concedido" << endl;
}else{
    cout << "Emprestimo pode ser concedido" << endl;
}

return 0;
}
