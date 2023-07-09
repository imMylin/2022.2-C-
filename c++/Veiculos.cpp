#include <iostream>
#include <string>

using namespace std;

typedef struct{
    string modelo;
    string marca;
    int ano;
    int preco;
}tVeiculo;

int main(){

tVeiculo carro1, carro2;

getline(cin, carro1.modelo);
getline(cin, carro1.marca);

cin >> carro1.ano;
getchar();
cin >> carro1.preco;
getchar();

getline(cin, carro2.modelo);

getline(cin, carro2.marca);;

cin >> carro2.ano;
getchar();
cin >> carro2.preco;
getchar();

if(carro1.ano == carro2.ano){
    if(carro1.preco < carro2.preco){
        cout << carro1.marca << " " << carro1.modelo;
    }else{
        cout << carro2.marca << " " << carro2.modelo;
    }
}
else if(carro1.ano < carro2.ano){
        cout << carro1.marca << " " << carro1.modelo;
}else if(carro2.ano < carro1.ano){
        cout << carro2.marca << " " << carro2.modelo;
    }


return 0;
}
