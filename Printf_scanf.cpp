#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
                //   '\n' faz uma quebra de linha       '\0' é um delimitaodor
    printf("Developer:\nLuis Henrique Silva Ferreira\n\n");     // 'printf' faz a imprissao na tela

    int ano1, ano2;
    char nome[10];
    char repositorio[5] = "C++";        // iniçialização de 'repositorio' do tipo 'char' de tamanho 5 ja com nome 'C++'
    
    ano1 = 2023;
    // repositorio[0] = 'C';     // adiçionando caracter em posição por posição
    // repositorio[1] = '+';
    // repositorio[2] = '+';
    // repositorio[3] = '\0';

    // padrão do 'printf' para escrever na tela
    printf("Repositorio: %s\nAno: %d\n", repositorio, ano1);     // parâmetro '%d' faz uma referência as variáveis inetira '%s' a string

    printf("\n\nDigite seu nome: ");
    scanf("%s", &nome);
    printf("\nInforme a data de nascimento: ");
    scanf("%d", &ano2);      // 'scanf' faz a leitura do teclado guarda va variável 'ano2' e imprime está leitura na tela
    printf("\nNome: %s - Ano de nascimento: %d\n\n", nome, ano2);

    return 0;

}