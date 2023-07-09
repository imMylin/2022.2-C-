#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

typedef struct{

    string nome;
    int numero;
    int votos;

}tRegistro;

int main (){

int n, votacao, nulos=0, total=0, naoNulo=0;
cin >> n;
float percentual[n], maiorPercentual = 0, totalNulos = 0;
getchar();
tRegistro candidato[n];

for(int i = 0; i < n; i++){
    cin >> candidato[i].numero;
    getchar();
    getline(cin, candidato[i].nome);
    candidato[i].votos = 0;
}
while(1){

    cin >> votacao;
    if(votacao < 0){
        break;
    }
    naoNulo =  0;
    for(int i = 0; i < n; i++){
        if(votacao == candidato[i].numero){
            candidato[i].votos++;
            naoNulo = 1;
        }
}   if (naoNulo == 0){
            nulos++;
    } total++;
}
for(int i = 0; i < n; i++){
    percentual[i] = (candidato[i].votos * 100.0)/ total;
    if(percentual[i] > maiorPercentual){
        maiorPercentual = percentual[i];
    }
}
for(int i = 0; i < n; i++){
   if(percentual[i] < maiorPercentual){
        cout << fixed << setprecision(2);
        cout << percentual[i] <<  " - " << candidato[i].numero << " - " << candidato[i].nome << endl;
   }else{
        cout << fixed << setprecision(2);
        cout << percentual[i] <<  " - " << candidato[i].numero << " - " << candidato[i].nome << " VENCEDOR\n" ;
        }
}
totalNulos = (nulos * 100.0 / total);

cout << fixed << setprecision(2);
cout << totalNulos << " - Nulos\n";

return 0;
}
