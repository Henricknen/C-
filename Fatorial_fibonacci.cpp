#include <iostream>
using namespace std;

int fatorial(int n);
int fibonacci(int n);

int main() {

    int val, res;       // 'res' que armazenará o resultado

    val = 8;        // variável 'val' irá conter o valor que será feito o fatorial
    res = fatorial(val);
    cout << "Fatorial de " << val << ": " << res;

    cout << "\nFibonacci com " << val << " valores: ";
    for(int i = 0; i < val; i++) {      // 'loop' serve para chamar a fução 'fibonacci'
        cout << fibonacci(i + 1) << " ";
    }

    cout << "\n\n";

    return 0;

}

int fatorial(int n) {       // função fatorial retorna um 'int' e recebe um 'int'
    if(n == 0) {
        return 1;
    }
    return n * fatorial(n - 1);     // se valor passado for diferente de 0 chama a função novamente menos 1 e multiplica-a pelo valor 'atual' passado
}

int fibonacci(int n) {      // função fibonacci
    if(n == 1 || n == 2) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);     // substituição do 'loop' somando o 'atual' com o 'anterior'
    }
}