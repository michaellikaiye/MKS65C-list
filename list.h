struct node {
  int price;
  struct node * next;
};
void print_list(struct node *n);
struct node * insert_front(struct node *n, int a);
struct node * free_list(struct node *n);
