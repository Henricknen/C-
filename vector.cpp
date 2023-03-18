#include <iostream>
#include <vector>       // inclindo biblioteca 'vector'
using namespace std;

int main() {

    vector<int> num1;        // declaração de 'vector'
    vector<int> num2;
    int tam, i;     // declaração de variável 'tam' pra armazena o tamanho e 'i' que será o indice do 'for'

    num1.push_back(1);      // 'push_back' insere elementos no final de um 'vector'
    num1.push_back(2);
    num1.push_back(3);
    num1.push_back(4);

    num2.push_back(5);
    num2.push_back(6);
    num2.push_back(7);
    num2.push_back(8);

    num1.swap(num2);        // método 'swap' faz a troca de valores de dois 'vector'

    tam = num1.size();        // método 'size' retorna o tamanho do vector 'num1' e armazena na variável 'tam'

    cout << "Tamanho do vector: " << tam << endl;

    for(i = 0; i < tam; i++) {      // imprimindo os elementos do 'vector' ultilizando 'for'
        cout << num1[i] << " ";
    }

    cout << endl;        // 'endl' faz uma quebra de linha
    for(i = 0; i < tam; i++) {
        cout << num2[i] << " ";
    }

    return 0;

}