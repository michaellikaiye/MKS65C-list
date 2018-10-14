#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"list.h"
int main() {
  printf("List made by inserting_front 4 elements:\n");
  struct node *s0 = NULL;
  struct node *s0 = insert_front(s0, 7);
  print_list(s0);
  struct node *s0 = insert_front(s1, 9);
  print_list(s0);
  struct node *s0 = insert_front(s2, 423);
  print_list(s0);
  struct node *s0 = insert_front(s3, 12);
  print_list(s0);
  
  printf("\n\nnow the free_list:\n");
  struct node *frees0 = free_list(s0);
  print_list(frees0);
  printf("\nother (s0)\n");
  print_list(s0);
  printf("\nlocation of free list: %p\n",frees0);
  printf("location of s2: %p\n", s0);
  return 0;
}
