#include <iostream>
using namespace std;

int n1, n2;     // 'n1' e 'n2' são variáveis globais porque não está dentro de nenhuma função e podem ser acessadas de qualquer lugar

int main() {

    int n3, n4;     // variáveis 'n3' e 'n4' são locais, pois está dentro da função 'main' e so funcionará dentro desta função
    int res1;
    int res2;       // variáveis 'res' guardará os resultados
    int res3;
    int res4, res5;

    n1 = 18;
    n2 = 7;
    n3 = 9;
    n4 = 3;

    res4 = n1/ n2;
    res5 = n1 %  n2;

    res1 = n1 + n2 + n3 + n4;        // somando todos valores
    res2 = (n1 + n2 + n3 + n4) - 7;
    res3 = n1 + n2 * n4;        // sem parênteses a multiplicação será feita primeiro

    cout << "Soma de todas variaveis: " << res1 << "\n\n";       // imprimindo na tela a soma de todas variáveis
    cout << "Soma de todas variaveis menos 7 e igual a: " << res2 << "\n\n";
    cout << "A multilplicacao das variaveis n2 com n2 somando com a n1 dara: " << res3 << "\n\n";

    cout << "Divisao: " << res4 << "\n";
    cout << "Resto da divisao: " << res5 << "\n";

    return 0;

}