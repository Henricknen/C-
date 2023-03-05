#include <iostream>
using namespace std;

int main() {
 
    char palavra[30], letra[1], secreta[30];       // criação de arrays unidimensional 'palavra, letra e secreta'
    int tam, i, chances, acertos;
    bool acerto;

    chances = 6;
    tam = 0;
    i = 0;      // indiçe 'i' iniçializado com 0
    acerto = false;     // iniçialização da variável boleana 'acerto' que faz a verificao se a pessoa digitou a letra certa ou errada
    acertos = 0;

    cout << "Digite a palavra secreta: ";
    cin >> palavra;     // 'cin' armazena a palavra digitada no array 'palavra'
    system("cls");

    while(palavra[i] != '\0') {     // percorrendo o array 'palavra' e '\0' é o caracter do enter e indica que ali terminou a string e ja se tem o tamanho da string
        i++;
        tam++;
    }

    for(i = 0; i < 30; i++) {       // for preenche todo vetor 'secreta' com traçinhos '-'
        secreta[i] = '-';
    }

    while ((chances > 0) && (acertos < tam)) {      // 'loop' principal do jogo
        cout << "Chances restantes: "<< chances << "\n\n";
        cout << "Palavra secreta: ";
        for(i = 0; i < tam; i++) {      // 'for' revelará a 'palavra secreta'
            cout << secreta[i];
        }
        cout << "\n\nDigite uma letra: ";
        cin >> letra[0];        // armazenando a letra digitada no array 'letra' na posição 0
        for(i =0 ; i < tam; i++) {
            if(palavra[i] == letra[0]) {
                acerto = true;      // indicação que houve acerto
                secreta[i] = palavra[i];
                acertos++;
            }
        }
        if(!acerto) {       // se não haver acerto
            chances--;  // 'chances' será diminuida
        }
        acerto = false;
        system("cls");
    }

    if(acertos == tam) {
        cout << "Voce venceu...\n ";
    } else {
        cout << "Tente novamente...\n";
    }
    
    system("pause");

    return 0;

}