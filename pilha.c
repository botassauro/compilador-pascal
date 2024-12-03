/***********************************************************************
*
* Autor: Isadora Botassari
* GRR: 20206872
*
* Autor: Victor Ribeiro Garcia
* GRR: 20203954
*
* Instituição: Universidade Federal do Paraná
* Curso: Ciência da Computação
* Motivo: Trabalho de Compiladores (CI1211)
*
***********************************************************************/

#include "compilador.h"

void inicializa_pil(pilha_t *p) {

    p->topo = -1;
}

int pil_vazia(pilha_t *p) {

    return p->topo == -1;
}

int tamanho_pil(pilha_t *p) {

    return p->topo + 1;
}

void empilha(pilha_t *p, int i) {
    
    if(tamanho_pil(p) >= TAM_MAX_PILHA)
        return;

    p->pilha[++p->topo] = i;
}

void desempilha(pilha_t *p, int n) {
    
    if(pil_vazia(p) || n < 0 || n > tamanho_pil(p))
        return;

    p->topo -= n;
}

int topo_pil(pilha_t *p) {

    if(pil_vazia(p))
        return -1;
    return p->pilha[p->topo];
}
