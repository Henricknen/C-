#include <iostream>
//#include <vector>
//#include <stdexcept>        // importação da biblioteca 'stdexcept'
using namespace std;

double divide(double, double);     // prototipo de função 'divide'

int main() {

    //vector<int>num(5);      // criação de 'vector num' de tamanho 5
    double n1, n2;      // criação de variáveis do tipo 'double'

    cin >> n1 >> n2;        // colhendo unformações e armazenando em 'n1' e 'n2'

    try {     // em 'try' é onde é inserido o codigo passivel de erros
        //num.at(4) = 10;     // adiçionando elemento ultilizando 'at' na posição '4'
        cout << divide(n1, n2);     // 'n1' e 'n2' se refere ao 'n1 e n2 lido
    } catch(const char* e) {     // se houver erro é gerado uma exeção e passado para o bloco 'catch' 'exception' é um parâmetro que reçebe a exeção
        cout << "Error " << e << endl;        // 'what' emite a messagem de erro
    }

    return 0;

}

double divide(double n10, double n20) {       // função que fará adivisão entre dois números
    if(n20 == 0) {
        throw "Erro de divisao por ZERO";       // 'throw' gera uma exeção que será passada para o 'catch'
    }
    if(n10 >= 10) {     // novs verificação que açionará o 'throw' abaixo
        throw "N1 precisa ser menor que 10";
    }
    return n10/ n20;       // este 'n10' e 'n20' se 12refere ao parâmetro

}