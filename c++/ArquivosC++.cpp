#include <iostream>
#include <fstream>
#include <string>

using namespace std;

typedef struct{

    string cpf;
    string nome;
    string sobrenome;
    string endereco;
    string telefone;

}Dados;

int main(){

    int n;
    cin >> n;
    getchar();
    Dados Info[n];

    ofstream arq;
    arq.open("Dados.csv");

    for(int i = 0; i<n; i++){

        getline(cin, Info[i].cpf);
        getline(cin, Info[i].nome);
        getline(cin, Info[i].sobrenome);
        getline(cin, Info[i].endereco);
        getline(cin, Info[i].telefone);

    }

    arq << "CPF,nome,snome,endereço,telefone" << "\n";

    for(int i = 0; i < n; i++){

        arq << Info[i].cpf << ",";
        arq << Info[i].nome;
        arq << "," << Info[i].sobrenome;
        arq << "," << Info[i].endereco;
        arq << "," << Info[i].telefone << "\n";
    }
    arq.close();

    ifstream arqEntrada;
    string linha;

    arqEntrada.open("Dados.csv");

    if(arqEntrada.is_open()){
        while(getline(arqEntrada, linha)){

            cout << linha << endl;
        }
    }else{
            cout << "Não foi possivel abrir o aquivo" << endl;
        }

return 0;
}
