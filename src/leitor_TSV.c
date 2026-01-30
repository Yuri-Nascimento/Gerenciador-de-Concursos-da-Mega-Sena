#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash.h"


void lerTSV( No *lista) {
    FILE *file = fopen("resultados_megasena.tsv", "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        //return 1;
    }

    char linha[256];
    //No lista[5]; // Array para armazenar várias linhas (ex: até 100)
    int contador = 0;

    // Ignorar a linha de cabeçalho, se houver
    if (fgets(linha, sizeof(linha), file) == NULL) {
        // Arquivo vazio ou erro
        fclose(file);
        //return 0;
    }
    
    // fgets(linha, sizeof(linha), file);

    // Ler cada linha do arquivo
    while (fgets(linha, sizeof(linha), file) != NULL && contador < 1) {
        // Remover quebra de linha do final
        //linha[strcspn(linha, "\n")] = 0;

        // Separar a primeira coluna (No)
        char *token = strtok(linha, "\t");
        if (token != NULL) {
            strcpy(lista->numero, token);
        }

        // Separar a segunda coluna (Data)
        token = strtok(NULL, "\t");
        if (token != NULL) {
            strcpy(lista->data, token);
        }

        // Separar a terceira coluna (Bolas)
        token = strtok(NULL, "\t");
        if (token != NULL) {
            strcpy(lista->bola1, token);
        }
        
        // Separar a terceira coluna (Bolas)
        token = strtok(NULL, "\t");
        if (token != NULL) {
            strcpy(lista->bola2, token);
        }
        // Separar a terceira coluna (Bolas)
        token = strtok(NULL, "\t");
        if (token != NULL) {
            strcpy(lista->bola3, token);
        }
        // Separar a terceira coluna (Bolas)
        token = strtok(NULL, "\t");
        if (token != NULL) {
            strcpy(lista->bola4, token);
        }
        // Separar a terceira coluna (Bolas)
        token = strtok(NULL, "\t");
        if (token != NULL) {
            strcpy(lista->bola5, token);
        }
        // Separar a terceira coluna (Bolas)
        token = strtok(NULL, "\n");
        if (token != NULL) {
            strcpy(lista->bola6, token);
        }

        contador++;
    }

    fclose(file);

    // Exibir os dados lidos para confirmar
    for (int i = 0; i < contador; i++) {
        printf("Lido do arquivo:\n"); 
        printf("Concurso: %s | Data: %s | Bolas: %s %s %s %s %s %s\n", 
               lista->numero, lista->data, lista->bola1, lista->bola2, lista->bola3, lista->bola4, lista->bola5, lista->bola6);
    }

    //return 0;
}
