#include <iostream>
#include <math.h>

using namespace std;

typedef struct{

    int x;
    int y;

}Ponto;

float retornaDistancia(int x1, int y1, int x2, int y2){
    float dist = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return pow(dist, 2);
}

int main(){
Ponto A, B;
cin >> A.x >> A.y;
cin >> B.x >> B.y;

float resultado = retornaDistancia(A.x, A.y, B.x, B.y);

cout << resultado;


return 0;
}
