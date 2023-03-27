#include <iostream>
using namespace std;

void somador() {
    static auto i = 0;      // com 'static' armazena a variável em uma posição da memória
    i++;
    cout << i << endl;
}


int main() {

    somador();      // a primeira chamada da função 'i' por ser int e está sendo incremetado valerá 1
    somador();          // nesta nova chamada chama o 'i' ao ser incrementado já estará valendo 1 da chamada anterior que é 'estatic' e ficando gravado na posição da memória e valerá 2
    somador();
    somador();
    somador();

    return 0;

}
