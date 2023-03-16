#include <iostream>
#include <stdio.h>      // biblioteca para função 'gets'
#include <stdlib.h>     // incluindo biblioteca para função 'malloc'
using namespace std;

int main() {

    char *vnome;     // ponteiro do tipo 'char'
    vnome = (char *) malloc(sizeof(char) + 1);       // 'o typecast (char *)' é usado para converter o retorno da função 'malloc' função 'sizeof' retorna o tamanho do elemento 'char'

    gets(vnome);      // função 'gets' aramazena o valor complento inclusive o 'espaço'

     cout << vnome;

    return 0;

}