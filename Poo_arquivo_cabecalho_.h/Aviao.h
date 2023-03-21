#ifndef AVIAO_H_INCLUDED        // codigo basico de arquivos '.h'  
#define AVIAO_H_INCLUDED

class Aviao {

public:
        int vel = 0;     // propriedade 'vel' é um elemento publico
        int velMax;
        std :: string tipo;        // propriedade 'tipo' guarda qual é o tipo do avião
        Aviao(int tp);
        void imprimir();
private:

};

Aviao :: Aviao(int tp) {        // implementação do método 'construtor' que será executado automaticamente
    if(tp == 1) {
        tipo = "Jato";
        velMax = 800;
    } else if (tp == 2) {
        tipo = "Monomotor";
        velMax = 350;
    } else if (tp == 3) {
        tipo = "Planador";
        velMax = 180;
    }
}
//	;
//		:

void Aviao :: imprimir() {
    std :: cout << "Tipo: " << tipo << std :: endl;
    std :: cout << "Velocidade maxima: " << velMax << std :: endl;
    std :: cout << "Velocidade atual: " << vel << std :: endl;
    std :: cout << "--------------------------------------------------------" << std :: endl;

}


#endif