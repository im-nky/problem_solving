#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * next;
};

struct node * insert_at_beginning(struct node * head, int data);
void print_ll(struct node * head);

struct node * insert_at_beginning(struct node * head, int data) {
    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = head;
    head = new_node;
    return head;
}

void print_ll(struct node * head){
    struct node * curr = head;
    while(curr!=NULL) {
        printf("%d->",curr->data);
        curr = curr->next;
    }
}

int main()
{
    struct node * head;
    head = insert_at_beginning(head,2);
    head = insert_at_beginning(head,3);
    head = insert_at_beginning(head,4);
    print_ll(head);
    return 0;
}
