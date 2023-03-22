#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Veiculo {     // classe 'base'
    public:     // propriedades 'publicas'
        int vel;
        int tipo;
        Veiculo(int tp);      // método 'construtor' com paeâmetro de entrada 'int' tp'
        int getVelMax();        // prototipando método 'get' para obter a Veloçidade maxíma
        bool getLigado();
        void setLigado(int l);
    
        
    private:        // propriedades 'privadas' que só podem ser manipuladas pela própria classe
        void setVelMax(int vm);     // prototipo 'set' como 'private' que só poderar ser acessado pela classe com parâmentro para alterar a propriedade privada
        std :: string nome;
        int velMax;
        bool ligado;
};

bool Veiculo :: getLigado() {      // implementando 'getLigado'
    return ligado;
}

void Veiculo :: setLigado(int l) {
    if(l == 1) {
        ligado = true;
    } else if(l == 0) {
        ligado = false;
    }
}

int Veiculo :: getVelMax() {        // criação do método que retornará a veloçidade máxima
    return velMax;
}

void Veiculo :: setVelMax(int vm) {     // método altera a propriedade privada 'velMax'
    velMax = vm;
}

Veiculo :: Veiculo(int tp) {        // declarando o método 'contrutor'
    tipo = tp;
    if(tipo == 1) {
        nome = "Carro";
        velMax = 200;
     } else if(tipo == 2) {
        nome = "Aviao";
        velMax = 800;
    } else if(tipo == 3) {
        nome = "Navio";
        velMax = 120;
    }
}


#endif


//	;
//		: