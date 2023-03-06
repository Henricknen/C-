#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

// fazendo passagem de parâmetros
int main(int argc, char *argv[]) {      // as variáveis que servem de propriedades 'argc' guarda a quantidade de parâmetros informado e 'argv' é um ponteiro para uma matriz de ponteiro de caracteres

    if(argc > 1) {      // quando o valor de 'argc' for maior que 1 significa que foi enviado parâmetro
        if(!strcmp(argv[1], "sol")) {       // comparando a string passada em 'argv' com a string 'sol' 'strcmp' faz comparação entre duas strings
            cout << "Vou a praia.\n\n";
        } else if(!strcmp(argv[1], "nublado")) {
            cout << "Ir ao cinema.\n\n";
        } else {
            cout << "Ficar em casa.\n\n";
        }
    }

    system("pause");        // fazendo uma pausa no final da execuçãoj
    // cout << argv[0] << "\n\n";      // mesmo sem passar um parâmetro '[0]' por padrão já é passado um, que tem o 'nome' do programa
    // cout << argv[1] << "\n";          // imprimido o parâmetro 'passado' como argumento com o indiçe '[1]'
    // cout << argc << "\n";                // 'argc' mostra a quantidade de parâmetro informado

    return 0; 

}