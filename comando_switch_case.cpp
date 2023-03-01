#include <iostream>
using namespace std;

int main() {

    int val;

    cout << "Selecione uma cor:\n";
    cout << "[1, 2, 3] = Verde, [4, 5, 6] = Azul, [7, 8, 9] = Vermelho\n";

    cin >> val;

    switch (val) {     // dentro dos '()' vai a expressão ou seja um valor que será testado

        case 1:      // constantes
        case 2:
        case 3:
            cout << "Cor selecionada: Verde\n";    // comandos
            break;      // quando é encontrado um 'break' a execução sai do switch e continua a execução normal do programa

        case 4:
        case 5:
        case 6:
            cout << "Cor selecionada: Azul\n";
            break;

        case 7:
        case 8:
        case 9:
            cout << "Cor selecionada: Vermelho\n";
            break;

        default:        // 'default' é uma estrutura padrão, se nenhum dos 'case' tiver o valor igual a expressão a execução cai no 'default'
            cout << "Valor seleciondo invalido\n";
    }

    cout << "\nPrograma finalizado\n";      // menssagem para verificação da saida do 'switch'

    return 0;

}