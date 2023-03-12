#include <iostream>
using namespace std;

    struct Carro {      // criação de estrutura 'struct' Carro

        string nome;        // variável(propriedade)
        string cor;
        int pot;
        int velMax;
        int vel;

        void insere(string stnome, string stcor, int stpot, int stvelmax) {     // criação de método para a 'inserção' de valores dentro da variáveis
            nome = stnome;      // adiçionando os valores dos parâmetros as variáveis
            cor = stcor;
            pot = stpot;
            velMax = stvelmax;
            vel = 0;
        }

        void mostra() {     // método para 'mostrar' valores das variáveis
            // cout << "Nome.............: " << car1.nome << "\n";      // não é necessario informar 'car1' pois ja está dentro da 'struct'
            cout << "\nNome.............: " << nome << "\n";
            cout << "Cor..............: " << cor << "\n";      // descrevendo todas propriedades de 'Carro'
            cout << "Potencia.........: "<< pot << "\n";
            cout << "Velocidade atual.: "<< vel << "\n";
            cout << "Velocidade maxima: "<< velMax << "\n\n";

        }

        void alteraVel(int mv) {      // método que reçebe o valor da veloçidade para fazer sua alteração 
            vel = mv;       // tribuindo valor da variável 'mv' a variável 'vel'
            if( vel > velMax) {
                vel = velMax;
            } else if(vel < 0) {
                vel = 0;
            }
        }

    };

int main() {

    Carro car1, car2, car3, car4;     // declarando variáveis
    car1.insere("Ferrari", "Vermelha", 1000, 330);      // inserindo valores de 'car1'

    car2.insere("Lamborghini", "Amarela", 4000, 305);

    car3.insere("Porche", "Preto", 700, 300);

    car4.insere("Eclipse", "Branco", 6000, 195);

    car1.mostra();      // chamando método 'mostra' para visualizar os valores dos carros 'car1, car2, car3, car4'
    car2.mostra();
    car3.mostra();
    car4.mostra();

    car4.alteraVel(180);        // alterando veloçidade de 'car4'
    car4.mostra();

    // car1.nome = "Ferrari";
    // car1.cor = "Vermelha";
    // car1.pot = 1000;
    // car1.velMax = 330;

    // car2.nome = "Lamborghini";
    // car2.cor = "Amarela";
    // car2.pot = 4000;
    // car2.velMax = 305;
    
    return 0;

}