#include <iostream>
#include <fstream>

int main() {
  
  std::ofstream arquivoE;
  arquivoE.open("exemplo.txt");

  
  if (!arquivoE) {       // Verifica se o arquivo foi aberto com sucesso
    std::cerr << "Erro ao abrir arquivo de saída." << std::endl;
    return 1;
  }

  arquivoE << "L.H. S. F." << std::endl;        // Escreve uma string no arquivo

  arquivoE.close();     // Fecha o arquivo

  
  std::ifstream infile;     // Cria um objeto ifstream para ler o arquivo
  infile.open("exemplo.txt");

  if (!infile) {        // Verifica se o arquivo foi aberto com sucesso
    std::cerr << "Erro ao abrir arquivo de entrada." << std::endl;
    return 1;
  }

  std::string linha;        // Lê a string do arquivo e imprime na tela
  std::getline(infile, linha);
  std::cout << linha << std::endl;

  infile.close();       // Fecha o arquivo

  return 0;
}
