#include <stdio.h>
#include <stdlib.h>
#include "hash.h"

int funcao_hash(int chave)
{
  return chave % TAMANHO;
}

No *criar_no(int chave)
{
  No *novo_no = (No *)malloc(sizeof(No));
  if(novo_no){
    novo_no->chave = chave;
    novo_no->proximo = NULL;
  }
  return novo_no;
}

void inicializar_tabela(tabela_hash *tabela)
{
    for(int i = 0; i < TAMANHO; i++){
        tabela->compartimento[i] = NULL;
    }
}

void inserir(tabela_hash *tabela, No *novo_no)
{
  int indice = funcao_hash(novo_no->chave);
  
  if(tabela->compartimento[indice] == NULL){
    tabela->compartimento[indice] = novo_no;
  }else{
    novo_no->proximo = tabela->compartimento[indice];
    tabela->compartimento[indice] = novo_no;
  }
}

/*
 //FUNCAO INSERIR ORIGINAL
void inserir(tabela_hash *tabela, int chave)
{
  int indice = funcao_hash(chave);
  No* novo_no = criar_no(chave);

  if(tabela->compartimento[indice] == NULL){
    tabela->compartimento[indice] = novo_no;
  }else{
    novo_no->proximo = tabela->compartimento[indice];
    tabela->compartimento[indice] = novo_no;
  }
}
*/

int buscar(tabela_hash *tabela, int chave)
{
  int indice = funcao_hash(chave);
  No *atual = tabela->compartimento[indice];

  while(atual != NULL){
    if(atual->chave == chave){
      return 1;
    }
      atual = atual->proximo;
  }
  
  return 0;
}

void remover(tabela_hash *tabela, int chave)
{
  int indice = funcao_hash(chave);
  No *atual = tabela->compartimento[indice];
  No *anterior = NULL;

  while(atual != NULL)
  {
    if(atual->chave == chave){
      if (anterior == NULL) {
        tabela->compartimento[indice] = atual->proximo;
      }else{
        anterior->proximo = atual->proximo;
      }
      free(atual);
      return;
    }
    anterior = atual;
    atual = atual->proximo;
  }
  printf("Chave %d não encontrada para remoção.\n", chave);
}

void imprimir_tabela(tabela_hash* tabela)
{
  for(int i = 0; i < TAMANHO; i++){
    printf("Índice %d: ", i);
    No* atual = tabela->compartimento[i];
    while(atual != NULL){
      printf("%d -> ", atual->chave);
      atual = atual->proximo;
    }
    printf("NULL\n");
  }
}