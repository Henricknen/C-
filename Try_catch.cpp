#include <iostream>
#include <vector>
#include <stdexcept>        // importação da biblioteca 'stdexcept'
using namespace std;

int main() {

    vector<int>num(5);      // criação de 'vector num' de tamanho 5

    try {     // em 'try' é onde é inserido o codigo passivel de erros
        num.at(6) = 10;     // adiçionando elemento ultilizando 'at'
        cout << num[0] << endl;
    } catch(exception& e) {     // se houver erro é gerado uma exeção e passado para o bloco 'catch' 'exception' é um parâmetro que reçebe a exeção
        cout << "Error" << endl;
    }

    return 0;

}