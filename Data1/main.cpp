#include <iostream>
#include <Data.h>

using namespace std;

int main()
{
    Data D;
    cin >> D.dia;
    cin >> D.mes;
    cin >> D.ano;

    cout << D.dia << "/" << D.mes << "/" << D.ano << endl;
    return 0;
}
