#include<string.h>
#include<stdio.h>
#include "ListaSequencial.h"

struct lista{
    int qtd;
    Aluno dados[MAX];

};

void inicializa_lista(Lista* li){
    li->qtd = 0;
}

int insere_lista_inicio(Lista* li, Aluno al){
    if(li->qtd >= MAX)
       return 0;

    for(int i = li->qtd; i >= 0; i--)
        li->dados[i] = li->dados[i-1];

    li->dados[0] = al;
    li->qtd++;
    return 1;

}

int insere_lista_fim(Lista* li, Aluno al){
    if(li->qtd >= MAX)
       return 0;
    li->dados[li->qtd] = al;
    li->qtd++;
    return 1;

}

int remove_lista_fim(Lista* li){
    if(li->qtd == 0)
      return 0;
    li->qtd--;
    return 1;
}

int remove_lista_inicio(Lista* li){
    if(li-> qtd == 0)
      return 0;
    for(int i = 0; i<li->qtd-1; i++)
        li->dados[i] = li->dados[i+1];
    li->qtd--;
    return 1; 
}

void imprime_lista(Lista* li){
    printf("\n====LISTA DE ALUNOS====\n");
    for(int i = 0; i<li->qtd; i++){
        printf("Nome: %s\n", li->dados[i].nome);
        printf("Matricula: %d\n", li->dados[i].matricula);
        printf("Notas: %.2f, %.2f, %.2f\n", li->dados[i].notas[0],li->dados[i].notas[1], li->dados[i].notas[2]);
        printf("\n");
    }

}

void tamanho_lista(Lista* li){
    printf("\nTamanho da lista: %d\n\n", li->qtd);

}

Aluno busca_lista_pos(Lista* li, int pos){
    if(li->qtd == 0)
      printf("Lista vazia!");
    if(pos >= 0 && pos < li->qtd){
        printf("\n==ALUNO ENCONTRADO==\n\n");
        printf("Nome: %s\n",li->dados[pos].nome);
        printf("Matricula: %d\n",li->dados[pos].matricula);
        printf("Notas: %.2f, %.2f, %.2f\n", li->dados[pos].notas[0],li->dados[pos].notas[1], li->dados[pos].notas[2]);
        printf("\n");
    }else{
        printf("Aluno com posicao %d nao encontrado na lista!",pos);
    }
}

void busca_lista_mat(Lista* li, int mat){
    if(li->qtd == 0)
       return 0;
    for(int i = 0; i<li->qtd; i++){
        if(mat == li->dados[i].matricula){
            printf("\n===ALUNO ENCONTRADO===\n");
            printf("Nome: %s\n", li->dados[i].nome);
            printf("Matricula: %d\n", li->dados[i].matricula);
            printf("Notas: %.2f, %.2f, %.2f\n", li->dados[i].notas[0],li->dados[i].notas[1], li->dados[i].notas[2]);
            printf("\n");
            break;

        }else{
            printf("Aluno com matricula %d nao encontrado!\n",mat);
            break;
        }
    }

}


int main(){
    /*code*/
}
