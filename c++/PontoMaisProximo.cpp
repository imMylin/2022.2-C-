#include <iostream>
#include <math.h>

using namespace std;

typedef struct{

int x;
int y;

}Ponto;

float retornaDistancia(int x1, int y1, int x2, int y2){
    float dist = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return dist;
}

int main(){

int px, py, n, menorX, menorY;
float menorDistancia = 100, distancia;

    cin >> px >> py >> n;

Ponto P[n];

for(int i = 0; i < n; i++){
    cin >> P[i].x;
    cin >> P[i].y;

}
for(int i = 0; i < n; i++){

    distancia = retornaDistancia(px, py, P[i].x, P[i].y);

    if(menorDistancia > distancia){
        menorDistancia = distancia;
        menorX = P[i].x;
        menorY = P[i].y;
    }
}
cout << "Ponto mais perto é (" << menorX << ", " << menorY << ")";
return 0;
}
