#include <iostream>

using namespace std;

class Veiculo {     // classe 'Veiculo' é uma classe BASE para as outras classes
private:        // membros privados
    const char* nome;
    const char* cor;

public:        // membros publicos
    int velMax;
    int rodas;
    void setNome(const char* no) {          // get e set para manipular os membro nome 'private'
        nome = no;
    }
    const char* getNome() {
        return nome;
    }

    void setCor(const char* co) {          // get e set para manipular os membro cor 'private'
        cor = co;
    }
    const char* getCor() {
        return cor;
    }

    virtual void imp() {        // método 'imp' fará a impressão dos elementos e é definido como 'virtual' indicando que esté método pode ser sobrescrito por alguma classe que herdar a classe 'Veiculo'
    cout << "Nome....: " << nome << endl;
    cout << "Cor.....: " << cor << endl;
    cout << "Rodas...: " << rodas << endl;
    cout << "Vel. Max: " << velMax << endl << endl;
    }
};

class  Carro: public Veiculo {      // classe 'Carro' herda ':' a classe 'Veiculo'
public:     // determinando que é 'public'
    Carro() {       // construtor 'Carro'
        velMax = 160;       // iniçialização das variáveis
        rodas = 4;
        setNome("Carro");       // nome por ser 'private' é necessario usar 'set'
        setCor("Brancos");
    }
};

class Moto: public Veiculo {        // classe 'Moto' herda ':' classe 'Veiculo'
public:
    Moto() {
        velMax = 200;
        rodas = 2;
        setNome("Moto");
        setCor("Vermelhas");
    }
};

class Militar: public Veiculo {
public:
    int monicao;
    bool armamento;
    Militar(bool arma, int mo): armamento(arma), monicao(mo) {      // construtor 'Militar'
        velMax = 140;
        rodas = 6;
        setNome("Tanque");
        setCor("Verde");
        if(arma) {
            monicao = mo;
        } else {
            monicao = 0;
        }
    }

    void imp() override {       // 'override' indica que este método está sobreecrevendo o método 'imp' da classe 'BASE'
        cout << "Nome.....: " << getNome() << endl;
        cout << "Cor......: " << getCor() << endl;        // por ser 'private' ultilizo 'get' para obter a cor
        cout << "Rodas....: " << rodas << endl;
        cout << "Vel. Max.: " << velMax << endl;
        cout << "Monicao..: " << monicao << endl;
        cout << "Armamento: " << armamento << endl << endl;
    }
};


int main() {

    Carro v1;       // criação dos objetos 'veiculos'
    v1.imp();

    Moto v2;
    v2.imp();

    Militar v3 {false, 200};        // passando parâmetros 'false' para armamento e '200' para monição
    v3.imp();

    Militar v4 {true, 160};
    v4.imp();

    return 0;
}
