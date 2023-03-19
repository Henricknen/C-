#include <iostream>
#include <vector>       // incluindo biblioteca 'vector'
using namespace std;

int main() {

    vector<int> num1;        // declaração de 'vector'
    vector<int> num2;
    int tam1, tam2, i;     // declaração de variável 'tam' pra armazena o tamanho e 'i' que será o indice do 'for'

    num1.push_back(1); num1.push_back(2); num1.push_back(3); num1.push_back(4); num1.push_back(5);   // 'push_back' insere elementos no final de um 'vector'
    num2.push_back(6); num2.push_back(7); num2.push_back(8);  num2.push_back(9); num2.push_back(10);

    num1.insert(num1.begin(), 888);        // inserindo elemento no iniçio 'begin' no vector 'num1' ultilizando 'insert'
    num2.insert(num2.end(), 1010);  // 'end' insere elemento na última posição

    

    //num1.swap(num2);        // método 'swap' faz a troca de valores de dois 'vector'

    tam1 = num1.size();        // método 'size' retorna o tamanho do vector 'num1' e armazena na variável 'tam1'
    tam2 = num2.size();

    cout << "Primeiro valor de num1: " << num1.front() << endl; // método 'front' ppegua o primeiro elemento do 'vector'
    cout << "Ultimo valor de num1..: " << num1.back() << endl;         // método 'back' pegua o ultimo elemento
    cout << "Valor do meio.....num1: " << num1.at(tam1 / 2) << endl;      // 'at' pegua o elemento do meio

    

    cout << "Tamanho do vector num1: " << tam1 << endl;

    for(i = 0; i < tam1; i++) {      // imprimindo os elementos do 'vector' ultilizando 'for'
        cout << num1[i] << " ";
    }

    cout << endl;        // 'endl' faz uma quebra de linha
    for(i = 0; i < tam2; i++) {
        cout << num2[i] << " ";
    }

    return 0;

}


//	;
//		: