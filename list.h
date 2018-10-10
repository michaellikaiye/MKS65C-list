struct node{int price; struct node * next;}
  node;
void print_list(struct node *n);
struct node * insert_front(struct node *n, int a);
struct node * remove_first(struct node * n);
struct node * free_list(struct node *n);
