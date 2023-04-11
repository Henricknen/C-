#include <iostream>

class  Carro{       // classe 'Carro'
private:
    int velMax;     // propriedades privadas
    const char* nome;

public:
    int potencia;
    int getVelMax() {       // método para obter a veloçidade máxima
        return velMax;
    }

    const char* getNome() {
        return nome;
    }
        // Sobrecarga de métodos
    Carro() {       // método construtor 'Carro'
        velMax = 120;
        potencia = 90;
        nome = "Popular";
    }

    Carro(int pt, const char* no): potencia(pt), nome(no) {       // construtor com dois parâmetros e ultilizando lista de iniçialização ': potencia(pt), nome(no)'
        if(pt < 100) {      // testando a 'potençia'
            velMax = 120;
        } else if(pt < 200) {
            velMax = 240;
        } else {
            velMax = 360;
        }
    }
                    // Fim da Sobrecarga
};

using namespace std;
int main() {

    Carro c1;       // criação do carro 'c1' sem parâmetros
    cout << c1.getNome() << " - " << c1.potencia << " - " << c1.getVelMax() << endl;        // imprimindo as propriedades do carro

    Carro c2{180, "esport"};      // criação de 'c2' que passa parâmetros ultilizando 'lista de iniçialização'
    cout << c2.getNome() << " - " << c2.potencia << " - " << c2.getVelMax() << endl;

    return 0;
}





