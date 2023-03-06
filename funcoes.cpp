#include <iostream>
using namespace std;

void texto();   // prototipando 'apresentando' a função texto ao programa
void soma(int n1, int n2);
int soma2(int n1, int n2);
void tr(string tra[4]);

int main() {    // função 'main' é a função principal do programa
    int res;        // variável 'res' do tipo int para guarda o resultado
    string transp[4] = {"carro", "moto", "barco", "aviao"};     // vetor 'transp' que será passado para função 'tr'

    soma(56, 44);       // chamando função 'soma' com dois valores que serão somados    
    res =soma2(360, 640);      // armazenando o retorna da função dentro da variável 'res'
    
    cout << "Valor de res: " << res << "\n";    // escrendo o valor de 'res' na tela
    // cout "Valor de res: " << soma2(360, 640) << "\n";

    tr(transp);     // chamando função 'transp'

    texto();            // chamando a função 'texto'
    // texto();
    // texto();

    for(int i = 0; i < 4; i++) {       // chamando a função 'texto' em quantidade espeçificada pelo 'for'
        texto();
    }

    return 0;

}

void texto() {      // 'void' é o tipo de retorno 'valor de saída' da função que não necessita de parâmetro 'texto' é o nome da função
    cout << "Praticando C++\n\n";    // comando desta função
}

void soma(int n1, int n2) {        // 'n1 e n2' são argumentos inteiros 'int'
    cout << "Soma dos valores: " << n1 + n2 << "\n";
}

int soma2(int n1, int n2) {       // função 'soma2' retorna um valor inteiro 'int'
    return n1 + n2;      // ultiliza 'return' quando qualquer valor de saída for diferente de 'void'
}

void tr(string tra[4]) {        // argumento 'tra' do tipo string é um argumento de 4 posições
    for(int i = 0; i < 4; i++) {
        cout << tra[1] << "\n";     // fazendo a impressão do vetor
    }
}