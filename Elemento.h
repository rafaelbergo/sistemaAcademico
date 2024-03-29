#pragma once
#include <cstring>

template <class TIPO>
class Elemento{
    private:
        Elemento<TIPO>* pProximo;
        Elemento<TIPO>* pAnterior;
        TIPO* pInfo;

    public:
        Elemento();
        ~Elemento();

        void setProximo(Elemento<TIPO>* pProx);
        Elemento<TIPO> *getProximo();

        void setAnterior(Elemento<TIPO>* pAnt);
        Elemento<TIPO> *getAnterior();

        void setInfo(TIPO* pInf);
        TIPO *getInfo();       
};

template <class TIPO>
Elemento<TIPO>::Elemento(){
    pProximo = nullptr;
    pAnterior = nullptr;
    pInfo = nullptr;
}

template <class TIPO>
Elemento<TIPO>::~Elemento(){
    pProximo = nullptr;
    pAnterior = nullptr;
    pInfo = nullptr;
}

template <class TIPO>
void Elemento<TIPO>::setProximo(Elemento<TIPO>* pProx){
    pProximo = pProx;
}

template <class TIPO>
Elemento<TIPO>* Elemento<TIPO>::getProximo(){
    return pProximo;
}

template <class TIPO>
void Elemento<TIPO>::setAnterior(Elemento<TIPO>* pAnt){
    pAnterior = pAnt;
}

template <class TIPO>
Elemento<TIPO>* Elemento<TIPO>::getAnterior(){
    return pAnterior;
}

template <class TIPO>
void Elemento<TIPO>::setInfo(TIPO* pInf){
    pInfo = pInf;
}

template <class TIPO>
TIPO* Elemento<TIPO>::getInfo(){
    return pInfo;
}