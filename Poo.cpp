#include <iostream>
using namespace std;

class Aviao {       // criando classe 'Avião'

    public:
        int vel = 0;     // propriedade 'vel' é um elemento publico
        int velMax;
        string tipo;        // propriedade 'tipo' guarda qual é o tipo do avião

        void ini(int tp);// prototipando método 'ini' que configura a 'velMax' de acordo com o 'tipo' do avião

    private:
};

void Aviao :: ini (int tp) {        // construindo o método 'ini'
    if(tp == 1) {
        this -> velMax = 800;       // 'this ->' para está classe
        this -> tipo = "Jato";
    } else if (tp == 2) {
        this -> velMax = 350;
        this -> tipo = "Monomotor"; 
    } else if (tp == 3) {
        this -> velMax = 180;
        this -> tipo = "Planador";
    } 
}

int main() {

    Aviao *av1 = new Aviao();        // instançiando um novo objeto do tipo 'avião'
    av1 -> ini(1);      // 'ini' iniçializando o método 'av1' do 'tipo' 1

    cout << av1 -> velMax;     // imprimindo a veloçidade do objeto 'av1'

    return 0;

}