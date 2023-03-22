#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Base1 {       // 'Base1' é uma classe simples tem somente o método 'public'
    public:
        void impBase1();        // prototipo
};

void Base1 :: impBase1() {      // método sem parâmetro de entrada para classe 'Base1'
    std::cout << "Imp classe Base1" << std::endl;
}

class Base2 {
    public:
        void impBase2();
};

void Base2 :: impBase2() {
    std::cout << "Imp classe Base2" << std::endl;
}

class HERd: public Base1, public Base2 {       // está classe 'HERd' herda as duas classes anteriores

};

#endif