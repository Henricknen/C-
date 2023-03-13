#include <iostream>
using namespace std;

int main() {

    string veiculo = "Carro";
    string *pv;     // criação de 'ponteiro' * 'pv' que armazenará o endereço de outra variável

    pv = &veiculo;      // ponteiro 'pv' recebe o endereço '&' da variável veiculo

    cout << pv << "\n";     // imprimindo o valor do 'ponteiro pv'
    cout << &veiculo;           // imprimindo diretamente o endereço da variável 'veiculo'

    *pv = "Moto";       // manipulando o valor da variável 'veiculo' através do ponteiro 'pv'

    cout << "\n" << veiculo << "\n" << *pv;     // imprimindo o valor da  variável 'veiculo' e valor do ponteiro 'pv'

    return 0;
    
}