#include <iostream>
#include <fstream>      // importação da biblioteca 'ofestram'
using namespace std;

int main() {

    ofstream arquivoS;       // arquivoS 'S' indica que este a é um arquivo de saída

    arquivoS.open("Novo.txt");// método 'open' faz a abertura do 'arquivo' e criará o 'Novo.txt'

    arquivoS << "Luis Henrique S F\n";     // gravando informações dentro do 'arquivo' criado 
    arquivoS << "Praticando C++\n";   // está gravação na sequênçia da gravação anterior '\n' faz a quebra de linha
    arquivoS << "Developer\n";

    arquivoS.close();        // é necessario sempre fechar o 'arquivoS' após ultiliza-lo para liberar a memória 

    ifstream ArquivoE;          // 'ArquivoE'aquivo de entrada
    string linha;       // variável chamada 'linha' que armazenará as  linhas do arquivo
    ArquivoE.open("Novo.txt");
    if(ArquivoE.is_open()) {        // método 'is_open' verifica se arquivo está aberto
        while(getline(ArquivoE, linha)) {       // método 'getline' obtem as linhas do arquivo 'arquivoE' e armazena essas linhas na variável 'linha'
            cout << linha << endl;      // impressão da variável 'linha'
        }
        ArquivoE.close();
    } else {
        cout << "Nao foi possivel abrir o arquivo" << endl;
    }

    return 0;

} 