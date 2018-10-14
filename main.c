#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"list.h"
int main() {
  printf("List made by inserting_front 4 elements:\n");
  struct node *s0 = NULL;
  s0 = insert_front(s0, 7);
  print_list(s0);
  s0 = insert_front(s0, 9);
  print_list(s0);
  s0 = insert_front(s0, 423);
  print_list(s0);
  s0 = insert_front(s0, 12);
  print_list(s0);
  
  printf("\nnow the free_list:\n");
  s0 = free_list(s0);
  print_list(s0);
  printf("location of free list: %p\n", s0);
  return 0;
}
