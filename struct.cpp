#include <iostream>
using namespace std;

    struct Carro {      // criação de estrutura 'struct' Carro

        string nome;        // variável(propriedade)
        string cor;
        int pot;
        int velMax;
    };

int main() {

    Carro car1;     // declarando variável 'car1' do tipo 'Carro'
    Carro car2;

    car1.nome = "Ferrari";
    car1.cor = "Vermelha";
    car1.pot = 1000;
    car1.velMax = 330;

    car2.nome = "Lamborghini";
    car2.cor = "Amarela";
    car2.pot = 4000;
    car2.velMax = 305;

    cout << "Nome.............: " << car1.nome << "\n";      // descrevendo todas propriedades de 'Carro'
    cout << "Cor..............: " << car1.cor << "\n";
    cout << "Potencia.........: "<< car1.pot << "\n";
    cout << "Velocidade maxima: "<< car1.velMax << "\n\n";

    cout << "Nome.............: " << car2.nome << "\n";
    cout << "Cor..............: " << car2.cor << "\n";
    cout << "Potencia.........: "<< car2.pot << "\n";
    cout << "Velocidade maxima: "<< car2.velMax << "\n";

    return 0;

}