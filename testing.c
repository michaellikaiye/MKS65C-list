#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"list.h"
int main() {
  
  struct node *s0 = NULL;
  struct node *s1 = insert_front(s0, 7);
  struct node *s2 = insert_front(s1, 9);
  struct node *s3 = insert_front(s2, 423);
  struct node *s4 = insert_front(s3, 12);

  printf("List from s4 (made by inserting_front 4 elements):\n");
  print_list(s4);
  
  printf("\nwith first node removed: (nos4)\n");
  struct node *nos4 = remove_first(s4);
  print_list(nos4);
  printf("\nother (s4)\n");
  print_list(s4);
  printf("\nlocation of current \"head\" nos4: %p\n",nos4);
  printf("other (s4): %p\n",s4);
  printf("\nfreelist testing\nlocation of current \"head\" s2: %p\nprint of s2:\n",s2);
  print_list(s2);
  printf("\n\nnow the free_list:\n");
  struct node *frees2 = free_list(s2);
  print_list(frees2);
  printf("\nother (s2)\n");
  print_list(s2);
  printf("\nlocation of free list: %p\n",frees2);
  printf("location of s2: %p\n", s2);
  return 0;
}
