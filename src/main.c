#include <stdio.h>
#include <stdlib.h>
#include "hash.h"
#include "menu.h"
#include "leitor_TSV.h"

/*void inserir(tabela_hash *tabela, int chave)
{
  int indice = funcao_hash(chave);
  No* novo_no = criar_no(chave);

  if(tabela->tabela[indice] == NULL){
    tabela->tabela[indice] = novo_no;
  }else{
    novo_no->proximo = tabela->tabela[indice];
    tabela->tabela[indice] = novo_no;
  }
}*/

int main(void)
{

	//Menu();
	No *novo_no = (No *)malloc(sizeof(No));
	novo_no->chave = 2323;
	novo_no->proximo = NULL;

	lerTSV(novo_no);

	tabela_hash tabela;
	inicializar_tabela(&tabela);

	inserir(&tabela, novo_no);
	printf("Tabela hash após inserção:\n");
	imprimir_tabela(&tabela);
	
	
	

/*	
	inserir(&tabela, 2925);
	inserir(&tabela, 1964);
	inserir(&tabela, 2966);
	inserir(&tabela, 3144);
	inserir(&tabela, 5120);



	printf("\nBusca pela chave 2925: %s\n", buscar(&tabela, 2925) ? "Encontrado" : "NC#o encontrado");
	printf("Busca pela chave 3143: %s\n", buscar(&tabela, 3143) ? "Encontrado" : "NC#o encontrado");

	remover(&tabela, 2925);
	printf("\nTabela hash apC3s remoC'C#o da chave 2925:\n");
	imprimir_tabela(&tabela);

	remover(&tabela, 3143);
	
*/
	return 0;
}