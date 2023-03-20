#pragma once
#include "Aluno.h"
#include "Departamento.h"

class Disciplina{
    private:
        int id;
        char nome[100];
        char area_conhecimento[100];
        int numero_alunos;
        int cont_alunos;
        Departamento* pDptoAssociado;

        Aluno* pAlunoPrim;
        Aluno* pAlunoAtual;
        
    public:
        Disciplina(int na=45, const char* ac="");
        ~Disciplina();

        Disciplina* pProx;
        Disciplina* pAnt;

        void setId(int i);
        int getId();

        void setNome(const char* n);
        char* getNome();

        void setDepartamento(Departamento* pdpto);
        Departamento* getDepartamento();

        void incluiAluno(Aluno* pa);
        void listaAlunos();
        void listaAlunos2();
};