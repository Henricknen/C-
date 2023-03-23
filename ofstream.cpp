#include <iostream>
#include <fstream>      // importação da biblioteca 'ofestram'
using namespace std;

int main() {

    ofstream arquivo;       // definindo o arquivo 'ofsream'

    arquivo.open("Novo.txt", ios :: app);// método 'open' faz a abertura do 'arquivo' e criará o 'Novo.txt' 'ios :: app' na abertura do arquivo posiçiona o cursor no final e insere o conteúdo na sequençia

    arquivo << "Luis Henrique S F\n";     // gravando informações dentro do 'arquivo' criado 
    arquivo << "Praticando C++\n";   // está gravação na sequênçia da gravação anterior '\n' faz a quebra de linha
    arquivo << "Developer\n";

    arquivo.close();        // é necessario sempre fechar o 'arquivo' após ultiliza-lo para liberar a memória

    return 0;

} 