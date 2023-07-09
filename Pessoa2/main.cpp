#include <iostream>
#include "Pessoa.h"

using namespace std;

int main()
{
    int n, cont = 0;
    cin >> n;
    getchar();
    Pessoa P[n];

    string nome;
    string telefone;
    int idade;
    string str;

    for(int i = 0; i < n; i++){
        getline(cin, nome);
        cin >> idade;
        getchar();
        getline(cin, telefone);

        P[i].setNome(nome);
        P[i].setIdade(idade);
        P[i].setTelefone(telefone);
    }

    getline(cin, str);

    for(int i = 0; i < n; i++){

    bool found = P[i].getNome().find(str) != string::npos;

    if(found){
        cont++;
        cout << P[i].getNome() << ", " << P[i].getIdade() << ", " << P[i].getTelefone() << endl;

    }
    }
    if(cont == 0){
        cout << "Pessoa não encontrada" << endl;
    }

    return 0;
}
