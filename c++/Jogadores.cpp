#include <iostream>
#include <string>

using namespace std;

typedef struct{
    string nome;
    int idade;
    int chutes;
    int gols;
}tJogador;

int main(){
tJogador j1, j2;

getline(cin, j1.nome);

cin >> j1.idade >> j1.chutes >> j1.gols;
getchar();

getline(cin, j2.nome);

cin >> j2.idade >> j2.chutes >> j2.gols;

if(j1.gols > j2.gols){
    cout << j1.nome << " " << "(" << j1.idade << ")" << endl;
}else if(j2.gols > j1.gols){
    cout << j2.nome << " " << "(" << j2.idade << ")" << endl;
}
return 0;
}
