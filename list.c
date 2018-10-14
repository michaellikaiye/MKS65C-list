#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"list.h"

/* Should take a pointer to a node struct and print out all of the data in the list */
void print_list(struct node *n) {
  while(n) {
    printf("%d, ",n->price);
    n = n->next;
  }
  printf("\n");
}

/* Should take a pointer to the existing list and the data to be added, create a new node and put it at the beginning of the list. */
/* The second argument should match whatever data you contain in your nodes. */
/* Returns a pointer to the beginning of the list. */
struct node * insert_front(struct node *n, int a) {
  struct node *p;
  p = malloc(sizeof(struct node));
  p->price = a;
  p->next = n;
  return p;
}

/* Helper for free_list... maybe */
/* struct node * remove_first(struct node * n) { */
/*     if (n == NULL) */
/*         return n; */
/*     struct node * next; */
/*     next = n->next; */
/*     free(n); */
/*     return next; */
/* } */

/* Should take a pointer to a list as a parameter and then go through the entire list freeing each node and return a pointer to the beginning of the list (which should be NULL by then).   */
struct node * free_list(struct node *n) {
  struct node *temp;
  while(n) {
    temp = n;
    n = n->next;
    free(temp);
  }
  return n;
  //WORKS AS WELL???
  /* struct node * tr = n; */
  /* while (n) { */
  /*   struct node *ot; */
  /*   ot = remove_first(n); */
  /*   n = ot; */
  /* } */
  /* return tr; */
  
  /* struct node * next = n; */

  /* while(n->next){ */
  /*   struct node * current = n; */
  /*   while (current->next->next != NULL) { */
  /*     current = current->next; */
  /*   } */
  /*   free(current->next); */
  /*   current->next = NULL; */
  /* } */
  /* return remove_first(n); */
}
