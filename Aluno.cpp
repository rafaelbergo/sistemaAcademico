#include "Aluno.h"
#include <cstring>

Aluno::Aluno(int diaNA, int mesNA, int anoNA, const char* nome): Pessoa(diaNA, mesNA, anoNA, nome){
    RA = -1;
    pProx = nullptr;
    pAnt = nullptr;
    std::strcpy(nomeP, nome);
}

Aluno::Aluno(): Pessoa(){
    RA = -1;
    pProx = nullptr;
    pAnt = nullptr;
}

Aluno::~Aluno(){
    RA = -1;
    pProx = nullptr;
    pAnt = nullptr;
}

void Aluno::setRA(int ra){
    RA = ra;
}

int Aluno::getRA(){
    return RA;
}