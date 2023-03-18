#include <iostream>
#include <vector>       // inclindo biblioteca 'vector'
using namespace std;

int main() {

    vector<int> num;        // declaração de 'vector'
    int tam, i;     // declaração de variável 'tam' pra armazena o tamanho e 'i' que será o indice do 'for'

    num.push_back(12);      // 'push_back' insere elementos no final de um 'vector'
    num.push_back(9);
    num.push_back(4);
    num.push_back(6);

    tam = num.size();        // método 'size' retorna o tamanho do 'vector' e armazena na variável 'tam'

    cout << "Tamanho do vector: " << tam << endl;

    for(i = 0; i < tam; i++) {      // imprimindo os elementos do 'vector' ultilizando 'for'
        cout << num[i] << " ";
    }

    return 0;

}