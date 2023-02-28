#include <iostream>
using namespace std;

int main() {

    int n1, n2, res;        // variáveis
    char opc;

    inicio:     // ':' indica que é um label

    system("cls");      // limpando a tela

    cout << "Digite o valor da 1º nota: ";
    cin >> n1;      // 'cin' faz a leitura do que for digitado

    cout << "Digite o valor da 2º nota: ";
    cin >> n2;

    res = n1 + n2;

    if(res >= 60) {
        cout << "\nAprovado\n";
    } else if(res >= 40) {
        cout << "\nRecuperação\n";
    } else {
        cout << "\nReprovado\n";
    }

    cout << "\nDigitar outras notas?[s/n]: ";
    cin >> opc;

    if(opc == 's' or opc == 'S') {
        goto inicio;        // 'goto' direçiona para 'label' inicio
    }

    return 0;

}