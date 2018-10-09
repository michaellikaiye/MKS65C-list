/* Your list functions should be in a .c/.h library, with a separate .c file used for testing.               */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node {int price; struct node *next;};

/* Should take a pointer to a node struct and print out all of the data in the list */
void print_list(struct node *n) {
  if(!n)
    printf("null");
  while(n) {
    printf("%d, ",n->price);
    n = n->next;
  }
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
  //struct node *p = n;
  //while(n) {
    //struct node *c = n->next;
    //free(n);
    //n = c;
    //printf("%d, ",c->price);
  //}
  while(n) {
    free(n);
  }
  return n;
}
void freeList(struct node* n)
{
   struct node *p;

   while (n != NULL)
    {
       p = n;
       n = n->next;
       free(p);
    }

}
int main() {
  struct node a;
  struct node b;
  struct node c;
  struct node *s1 = &a;
  struct node *s2 = &b;
  struct node *s3 = &c;
  a.price = 91;
  a.next = s2;
  b.price = 19;
  b.next = s3;
  c.price = 44;
  c.next = NULL;

  printf("List starting from s1:\n");
  print_list(s1);
  printf("\n\nAdding 5 to beginning\n");
  struct node *s0 = insert_front(s1, 5);
  struct node *sa = insert_front(s0, 7);
  struct node *sb = insert_front(sa, 9);
  print_list(sb);
  printf("\nfree\n");
  freeList(sb);
  //struct node *sx = free_list(sb);
  //print_list(sb);
  return 0;
}
