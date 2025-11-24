

#include <stdio.h>
#include <stdlib.h>


typedef struct no{
    int valor;
    struct no * prox;
}linked_list;

void insert(linked_list * cabeca, int valor);



int main(){

    linked_list * l1 = NULL;

    l1 = (linked_list *)malloc(sizeof(linked_list));

    if(l1 == NULL){
        return 1;
    }

    l1->valor = 1;
    l1->prox = NULL;

    insert(l1, 6);
    insert(l1, 56);
    insert(l1, 345);


    insert_ini(&l1, 22);

    
    return 0;
}


//Adicionando ao fim da lista
void insert(linked_list * cabeca, int valor){

    linked_list * atual = cabeca;

    while(atual->prox != NULL){
        atual = atual->prox;
    }

    atual->prox = (linked_list *) malloc(sizeof(linked_list));
    atual->prox->valor = valor;
    atual->prox->prox = NULL;

}

//Adicionando no início da lista
                            // head -> l1
void insert_ini(linked_list ** head, int valor){ // Recebe um ponteiro que aponta para l1;

    linked_list * novo_no = (linked_list * )malloc(sizeof(linked_list));

    novo_no->valor = valor;
    novo_no->prox = *head; // l1
    *head = novo_no;

}