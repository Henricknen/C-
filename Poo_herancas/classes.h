#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class  Veiculo {
public:     // métodos publicos
    int vel;
    int blind;
    int rodas;

    void setTipo(int tp);   // criação dos métodos 'get' e 'set' publicos
    void setVelMax(int vm);     // 'void' não retorna nada
    void setArma(bool ar);          // reçebe uma propriedade 'bool' chamada 'ar'
    void imp();

private:        // métodos publicos
    int tipo;       // 1 - Moto, 2 - arro, 3 - Caminhão, 4 - Tanque de guerra
    int velMax;
    bool arma;
};

    void Veiculo :: imp() {     // método imprime todas as propriedades
        std :: cout << "Tipo veiculo....: " << tipo << std :: endl;
        std :: cout << "Veloçiade maxima: " << velMax << std :: endl;
        std :: cout << "Qtd rodas.......: " << rodas << std :: endl;
        std :: cout << "Blindagem.......: " << blind << std :: endl;
        std :: cout << "Armamento.......: " << arma << std :: endl;
        std :: cout << "--------------------------------- " << std :: endl;
    }

    void Veiculo :: setTipo(int tp) {      // declaração de método 'set' para clasee 'Veiculo'
        tipo = tp;      // altera o o valor da propriedade 'tipo' com o valor do parametro 'tp'
    }

    void Veiculo :: setVelMax(int vm) {
        velMax = vm;
    }

    void Veiculo :: setArma(bool ar) {
        arma = ar;
    }

class Moto: public Veiculo {     // classe 'Moto' herda classe 'Veiculo'
    public:     // construtor da classe 'Moto'
        Moto();     // prototipo do método
};

Moto :: Moto() {        // 'método construtor' tem que ter o mesmo nome da classe e classe 'Moto' herdando ':' a classe 'Veiculo' herda todas suas propriedades e métodos
    vel = 0;        // iniçiando 'propriedades'
    blind = 0;
    rodas = 2;
//  tipo = 1;       // propriedade 'tipo' é 'private' e só pode ser manipulada dentro da classe
    setTipo(1);
    setVelMax(120);     // chamando 'métodos'
    setArma(false);
}

class  Carro : public Veiculo {     // classe 'Carro' herda clase 'Veiculo'
    public:
        Carro();
};

 Carro:: Carro() {
        vel = 0;
    blind = 0;
    rodas = 4;
    setTipo(2);
    setVelMax(180);
    setArma(false);
}

class  Tanque : public Veiculo {     // classe 'Carro' herda clase 'Veiculo'
    public:
        Tanque();
};

 Tanque:: Tanque() {
        vel = 0;
    blind = 1;
    rodas = 8;
    setTipo(4);
    setVelMax(200);
    setArma(true);
}

#endif;