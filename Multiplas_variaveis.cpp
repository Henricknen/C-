#include <iostream>
using namespace std;

#define pi   3.14   // declarando 'constante' de valor fixo de forma 'global'
#define profissional cout << "Luis Henrique S F\n\n";       // criando constante 'profissional' com a diretiva #define e associando a está variável o comando 'cout' com o texto "Luis Henrique S F"

int main() {

    int vidas = 3, tiros = 60, life = 10;     // fazendo declaração de 'multiplas' variáveis já iniçializadas são feitas na mesma linha

    cout << pi << "\n\n";       // chamando a 'constante' pi
    profissional;

    return 0;

}
