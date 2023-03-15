#include <iostream>
using namespace std;

void somar(float *var, float valor);      // 'prototipando' a função
void iniVetor(float *v);

int main() {

    float num = 0;      // variável 'num'
    float vetor[5];       // array 'vetor' de 5 posições

    somar(&num, 15);     // chamando função 'somar' com endereço '&num' de 'num' que adiçionará 15 a variável 'num'
    iniVetor(vetor);

    cout << num << "\n\n";
    for(int i = 0; i < 5; i++) {     // for que imprimirá o 'array'
        cout << vetor[i] << "\n";
    }

    return 0;

}

void somar(float *var, float valor) {        // função que somará valores com a variável 'num'
    *var += valor;      // ponteiro '*var'
}

void iniVetor(float *v) {       // ponteiro '*v' recebe o vetor
    v[0] = 5;
    v[1] = 4;
    v[2] = 7;
    v[3] = 9;
    v[4] = 2;
}