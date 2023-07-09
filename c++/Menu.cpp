#include <iostream>

using namespace std;

int main(){
int opcao;

while(1){
    cout << "1 - Item 1" << endl;
    cout << "2 - Item 2" << endl;
    cout << "3 - Item 3" << endl;
    cout << "4 - Sair" << endl;

    cin >> opcao;

        if(opcao == 1){
            cout << "Item 1" << endl;
        }else if(opcao == 2){
            cout << "Item 2" << endl;
        }else if(opcao == 3){
            cout << "Item 3" << endl;
        }else if(opcao == 4){
            cout << "Sair" << endl;
            return 0;
        }else if(opcao < 1 || opcao > 4){
            cout << "Opcao " << opcao << " " << "Invalida" << endl ;
        }
}

}
