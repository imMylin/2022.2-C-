#include <iostream>
#include "Funcionario.h"
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    getchar();

    //objeto
    Funcionario funcionarios[n];
    //variaveis
    string nome[n];
    string sobrenome[n];
    float salario[n];

    for(int i = 0; i<n; i++){

        getline(cin, nome[i]);
        getline(cin, sobrenome[i]);
        cin >> salario[i];
        getchar();

        funcionarios[i].setNome(nome[i]);
        funcionarios[i].setSnome(sobrenome[i]);
        funcionarios[i].setSalario(salario[i]);

    }

    for(int i = 0; i < n; i++){
        funcionarios[i].verificaSalario();
        cout << funcionarios[i].getNome() << " " << funcionarios[i].getSnome() << " - " << funcionarios[i].getSalario() << " - " << funcionarios[i].getSalarioAnual() << endl;
        funcionarios[i].aumentaSalario(0.1);
        cout << funcionarios[i].getSalarioAnual() << endl;
    }
    return 0;
}
