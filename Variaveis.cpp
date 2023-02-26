#include <iostream>
using namespace std;
int main() {

// tipo/ nome/ inicialização
    int vidas = 0;      // declaração de variável do tipo inteira 'int' de nome 'vidas' inicializada com valor 0
    char letra = 'A';         // tipo 'char' recebe um caracter (letra)
    double decimal = 10.5;         // 'double' recebe um com casas decimais
    float decimal2 = 10.5;             // 'float' é idêntico ao tipo 'double mas tem uma precisão menor
    bool vivo = true;      // 'bool' tipo booleano recebe 'true' verdadeiro ou 'false' falso
    string nome = "Luis Henrique S F";        // 'string' é uma variável que recebe um texto

    cout << "Digite o nummero de vidas: ";
    cin >> vidas;       // 'cin' atribui valor do teclado a variável 'vidas'

    cout << "Digite uma letra: ";
    cin >> letra;

    cout << "Dinheiro: ";
    cin >> decimal;

    cout << "Digite seu nome: ";
    cin >> nome;

    cout << "\nVidas " << vidas << "\nLetra " << letra << "\nDecimal " << decimal << "\nVivo " << vivo << "\nNome " << nome << "\n";

    return 0;

}

