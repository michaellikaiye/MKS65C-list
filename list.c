/* Your list functions should be in a .c/.h library, with a separate .c file used for testing.               */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node {int price; struct node *next;};

/* Should take a pointer to a node struct and print out all of the data in the list */
void print_list(struct node *n) {
  printf("%d, ",n->price);
  if(n->next)
    print_list(n->next);
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

/* Should take a pointer to a list as a parameter and then go through the entire list freeing each node and return a pointer to the beginning of the list (which should be NULL by then).   */
struct node * free_list(struct node *n) {

}

int main() {
  struct node *s1;
  struct node *s2;
  struct node *s3;
  s1->price = 91;
  s1->next = s2;
  s2->price = 19;
  s2->next = s3;
  s3->price = 44;
  s3->next = NULL;

  printf("List starting from s1:\n");
  print_list(s1);
  printf("\n\nAdding 5 to beginning\n");
  struct node *s0 = insert_front(s1, 5);
  print_list(s0);
  return 0;
}
