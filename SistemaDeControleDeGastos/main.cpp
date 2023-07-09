#include <iostream>
#include "Despesa.h"
#include "ControleDeGastos.h"
#include <string>

using namespace std;

int main()
{
    int n;
    cin>>n;
    getchar();

    ControleDeGastos Controle[n];
    Despesa despesas[n];

    string nome;
    string tipo, tipo2;
    float valor;


    for(int i = 0; i<n; i++){

        getline(cin, nome);
        cin >> valor;
        getchar();
        getline(cin, tipo);

        despesas[i].setNome(nome);
        despesas[i].setTipo(tipo);
        despesas[i].setValor(valor);

        Controle[i].setDespesa(despesas[i], i);

    }

    getline(cin, tipo2);

    int cont = 0;

    for(int i = 0; i < n; i++){

        if(Controle[i].getDespesa(i).getTipo() == tipo2){

           cout << Controle[i].getDespesa(i).getNome() << ", R$ " << Controle[i].getDespesa(i).getValor() << endl;
           cont = 1;

        }

    }
if(cont == 0){
    cout << "Nenhuma despesa do tipo especificado" << endl;
}

//valores

    float valoresTipo[n], valores[n], totalTipo = 0, total = 0;

    for(int i = 0; i<n; i++){
          if(Controle[i].existeDespesaDoTipo(tipo2)!= std::string::npos ){
            valoresTipo[i] = Controle[i].calculaTotalDeDespesas(tipo2);
          }

            valores[i] = Controle[i].calculaTotalDeDespesas();

            totalTipo = totalTipo + valoresTipo[i];
            total = total + valores[i];
    }


    cout << "Total: " << totalTipo << "/" << total << endl;

    return 0;
}
