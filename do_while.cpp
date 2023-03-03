#include <iostream>
using namespace std;

int main() {

    int cont;

    cont = 20;
    do {
        cout << "\nLuis Henrique S F - " << cont << "\n";
        cont++;     
    } while(cont < 20);     // mesmo que etá condição não for satisfeita 'do while' executa  o bloco de comando pelo menos uma vez

    cout << "\nRotina finalizada...\n";

    return 0;

}