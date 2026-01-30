#ifndef HASH_H

#define TAMANHO 10

typedef struct No{
  int chave;
  char numero[10];
  char data[12];
  char bola1[5];
  char bola2[5];
  char bola3[5];
  char bola4[5];
  char bola5[5];
  char bola6[5];
  struct No *proximo;
} No;

typedef struct tabela_hash{
  No *compartimento[TAMANHO];
}tabela_hash;

int funcao_hash(int chave);
No *criar_no(int chave);
void inicializar_tabela(tabela_hash *tabela);
//void inserir(tabela_hash *tabela, int chave); //Original
void inserir(tabela_hash *tabela, No *novo_no); //Alterada
int buscar(tabela_hash *tabela, int chave);
void remover(tabela_hash *tabela, int chave);
void imprimir_tabela(tabela_hash* tabela);






#endif