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

    Carro *carros = new Carro[5];      // criação do 'array' Carro de tamanho 5
    Carro car1, car2, car3, car4, car5;     // declarando 5 carros

    carros[0] = car1; carros[1] = car2; carros[2] = car3; carros[3] = car4; carros[4] = car5;       // adiçionando os carros 'car1,2,3,4,5' ao vetor 'carros'

    carros[0].insere("Jetta", "Prata", 80, 100);      // 'inserindo' os valores nos carros
    carros[1].insere("mclaren", "Preta", 350, 260);
    carros[2].insere("Golf", "Azul", 80, 180);
    carros[3].insere("Mustang", "Laranja", 250, 280);
    carros[4].insere("Mitsubishi", "Branca", 260, 300);

    for(int i = 0; i < 5; i++) {     // imprimindo informações de todos os carros
        carros[i].mostra();     // chamando o método 'mostra' em carros posição 'i'
    }

    return 0;

}