#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>

// elemento da lista
typedef struct estr {
  int chave;
  struct estr *prox;
} NO;

// funcao principal
void removerCompartilhados(NO **p1, NO **p2);

//------------------------------------------
// O EP consiste em implementar esta funcao
// e outras funcoes auxiliares que esta
// necessitar
//------------------------------------------

void tornaCircular(NO **p, NO **ultl) { (*ultl)->prox = (*p); }

void removerCompartilhados(NO **p1, NO **p2) {

  // seu codigo AQUI

  NO *l1Ant = NULL;
  NO *l1 = (*p1);
  NO *l2Ant = NULL;
  NO *l2 = (*p2);

  if (*p1 == *p2) {

    *p1 = NULL;
    *p2 = NULL;

  }

  else {

    while (l1 && l1 != l2) {
      l2 = (*p2);
      while (l2 && l1 != l2) {
        l2Ant = l2;
        l2 = l2->prox;
      }
      if (l1 != l2) {
        l1Ant = l1;
        l1 = l1->prox;
      }
    }

    if (l1 == NULL || l2 == NULL) {

      // tornar as listas circulares

      // chegar no Ant sendo a ultima pras duas

      if (l1 != NULL) {
        while (l1) {
          l1Ant = l1;
          l1 = l1->prox;
        }
      }

      if (l2 != NULL) {
        while (l2) {
          l2Ant = l2;
          l2 = l2->prox;
        }
      }

      if (l1Ant) {
        tornaCircular(p1, &l1Ant);
      }
      if (l2Ant) {
        tornaCircular(p2, &l2Ant);
      }

    } else {
      if (!l1Ant) {
        *p1 = NULL;
      } else {
        tornaCircular(p1, &l1Ant);
      }

      if (!l2Ant) {
        *p2 = NULL;
      } else {
        tornaCircular(p2, &l2Ant);
      }
    }
  }

  return;
}

// por favor nao inclua nenhum codigo a ser entregue abaixo deste ponto

//----------------------------------------------------------------
// use main() apenas para fazer chamadas de teste ao seu programa
//----------------------------------------------------------------
int main() {

  NO *p1 = NULL;
  NO *p2 = NULL;

  // aqui vc pode incluir codigo para inserir elementos
  // de teste nas listas p1 e p2

  NO l1e1, l1e2, l1e3, l1e4, l2e1, l2e2, l2e3;

  l1e1.chave = 0;
  l1e1.prox = &l1e2;
  l1e2.chave = 15;
  l1e2.prox = &l1e3;
  l1e3.chave = 2;
  l1e3.prox = &l1e4;
  l1e4.chave = 4;
  l1e4.prox = NULL;

  l2e1.chave = 5;
  l2e1.prox = &l2e2;
  l2e2.chave = 14;
  l2e2.prox = &l2e3;
  l2e3.chave = 8;
  l2e3.prox = &l1e4;

  p1 = &l1e1;
  p2 = &l2e3;

  // o EP sera testado com chamadas deste tipo
  removerCompartilhados(&p1, &p2);

  NO *p = p1;

  while (p) {
    printf("p: %d\n", p->chave);
    p = p->prox;
  }
}
