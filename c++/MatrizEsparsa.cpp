#include <iostream>
#include <string>

using namespace std;

int ehEsparsa(int X[10][10], int largura, int altura){
int cont = 0;

for(int i = 0; i<largura; i++){
    for(int j = 0; j < altura; j++){
        if(X[i][j] == 0){
            cont++;
        }
    }
}
if(cont > (largura * altura) * 0.7){
    return 1;
}else{
    return 0;
}

}

int main(){

int X[10][10];
int largura, altura;

cin >> altura >> largura;

for(int i = 0; i < largura; i++){
    for(int j = 0; j<altura; j++){
        cin >> X[i][j];
    }
}

int resultado = ehEsparsa(X, largura, altura);

if(resultado == 1){
    cout << "A matriz é esparsa";
}else{
    cout << "A matriz não é esparsa";
}

return 0;
    }
