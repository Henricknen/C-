#include <iostream>
using namespace std;

int main() {

    int n1, n2, nota;
    string res;

    cout << "Digite a 1º nota: ";
    cin >> n1;  

    cout << "Digite a 2º nota: ";
    cin >> n2;

    nota = n1 + n2;

    // (nota >= 60) ? res = "Aprovado" : res = "Reprovado";      // ultizando operador ternario '? :' pode se atribuir a uma variável, valores diferentes de acordo com determinada condição
    res = (nota >= 60) ? "Aprovado" : "Reprovado";       // "Aprovado" ou "Reprovado" são valores de retorno que será armazenado em 'res'
    cout << "\nSituacao do aluno: " << res <<"\n";

    return 0;

}