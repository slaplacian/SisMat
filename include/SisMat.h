#ifndef SISMAT_H
#define SISMAT_H

#include "./ListEnc.h"

typedef enum {
    NOME, NUMERO, CPF_PROF 
} SEARCH_MODE;

void cadastrarAluno(LEA **endHead);
void cadastrarMateria(LED **endHead);
void cadastrarAlunoEmMateria(LEA **alunoHead, LED **discHead);
void removerAluno(LEA **alunoHead, LED **discHead);
void removerMateria(LED **discHead, LEA **alunoHead);
void removerAlunoDeMateria(LED **endHead);
void procurarPorAluno(LEA **endHead, int searchMode);
void procurarPorMateria(LED **endHead, int searchMode);

#endif /* SISMAT_H */