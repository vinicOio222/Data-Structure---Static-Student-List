#ifndef LISTASEQUENCIAL_H
#define LISTASEQUENCIAL_H
#define MAX 100

typedef struct aluno{
    char nome[30];
    int matricula;
    float notas[3];

}Aluno; 

typedef struct lista Lista;

void inicializa_lista(Lista* li);
int insere_lista_inicio(Lista* li, Aluno al);
int insere_lista_fim(Lista* li, Aluno al);
int remove_lista_inicio(Lista* li);
int remove_lista_fim(Lista* li);
void ordena_lista(Lista* li);
Aluno busca_lista_pos(Lista* li, int pos);
void busca_lista_mat(Lista* li, int matricula);
void imprime_lista(Lista* li);

#endif