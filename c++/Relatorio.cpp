#include <iostream>
#include <string>

using namespace std;

typedef struct{
    string descricao;
    float peso;
    char tipo;

}Movel;

int main(){

int n, tipoS = 0, terminaReal = 0;
float movelPesado = 0;
char str[] = {"Real"};


cin >> n;
Movel m[n];

for(int i = 0; i < n; i++){
    getchar();
    getline(cin, m[i].descricao);
    cin >> m[i].peso;
    cin >> m[i].tipo;

}


for(int i = 0; i < n; i++){
    if(m[i].tipo == 's' && m[i].peso > 10.0){
        tipoS++;
    }

}

for(int i = 0; i < n; i++){
    if(movelPesado < m[i].peso){
        movelPesado = m[i].peso;
    }
}
for(int i = 0; i < n; i++){

    bool found = m[i].descricao.find(str) != string::npos;
    if(found){
        terminaReal++;
    }

}

cout << "Tipo 's' acima de 10Kg: " << tipoS << endl;
cout << "Termina em  \"Real\": " << terminaReal << endl;

for(int i = 0; i<n; i++){
    if(movelPesado == m[i].peso){
       cout << "Mais pesado: \"" <<m[i].descricao<<"\"" << endl;
    }
}

return 0;
}
