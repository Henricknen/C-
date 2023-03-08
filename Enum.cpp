#include <iostream>
using namespace std;

int main() {

    enum armas{fuzil = 100, revolver = 16, rifle = 12, escopeta = 1};       // 'enum' representa numerais inteiros
    armas armaSel;      // variável 'armasSel' do tipo armas

    armaSel = rifle;        // verificando o valor de 'rifle'

    cout << armaSel;        // imprime o valor do indiçe da arma que se encontra na variável 'armasSel' de forma sequencial se não haver espeçificação

    return 0;

}