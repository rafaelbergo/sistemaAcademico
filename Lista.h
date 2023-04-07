#pragma once
#include "Elemento.h"
#include <iostream>

template <class TIPO>
class Lista{
    private:
        Elemento<TIPO> *pPrimeiro;
        Elemento<TIPO> *pAtual;

     public:
        Lista();
        ~Lista();
        void inicializa();
        bool incluiElemento(Elemento<TIPO>* pElemento);
        bool incluiInfo(TIPO* pInfo, const char* nome="");
        void listaInfos();
        TIPO* localizar(char *n);
        Elemento<TIPO>* getPrimeiro();	
	    Elemento<TIPO>* getAtual();
};

template <class TIPO>
Lista<TIPO>::Lista(){
    inicializa();
}

template <class TIPO>
Lista<TIPO>::~Lista(){
}

template <class TIPO>
void Lista<TIPO>::inicializa(){
    pPrimeiro = NULL;
    pAtual = NULL;
}

template <class TIPO>
bool Lista<TIPO>::incluiElemento(Elemento<TIPO> *pElemento){
    if(pElemento != nullptr){
        if(pPrimeiro == nullptr){
            pPrimeiro = pElemento;
            pAtual = pPrimeiro;
        }
        else{
            pElemento->setAnterior(pAtual);
            pAtual->setProximo(pElemento);
            pAtual = pAtual->getProximo();
        }
        return true;
    }
    else{
        std::cout << "Erro ao incluir elemento na lista" << std::endl;
        return false;
    }
}

template <class TIPO>
bool Lista<TIPO>::incluiInfo(TIPO* pInfo, const char* nome){
    if(pInfo != nullptr){
        Elemento<TIPO> *pElemento;
        pElemento = new Elemento<TIPO>();
        pElemento->setNome(nome);
        pElemento->setInfo(pInfo);
        incluiElemento(pElemento);
        return true;
    }
    else{
        std::cout << "Erro elemento nulo na lista" << std::endl;
        return false;
    }
}

template <class TIPO>
void Lista<TIPO>::listaInfos(){
    Elemento<TIPO> *pAux;
    pAux = pPrimeiro;

    if(pPrimeiro != nullptr){
        while(pAux != nullptr){
            std::cout << "Elemento na lista "<< pAux->getNome() << std::endl;
            pAux = pAux->getProximo();
        }
    }
}

template <class TIPO>
TIPO* Lista<TIPO>::localizar(char *n){
    Elemento<TIPO> *pAux = nullptr;
    pAux = pPrimeiro;
    while(pAux != nullptr){
        if(strcmp(pAux->getNome(), n) == 0){
            return pAux->getInfo();
        }
        pAux = pAux->getProximo();
    }
    return nullptr;
}

template <class TIPO>
Elemento<TIPO>* Lista<TIPO>::getPrimeiro(){
    return pPrimeiro;
}

template <class TIPO>
Elemento<TIPO>* Lista<TIPO>::getAtual(){
    return pAtual;
}