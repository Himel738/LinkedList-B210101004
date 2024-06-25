
#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node * link;
};
void traverse(struct node * head)
{
    struct node *ptr = head;
    while(ptr != NULL)
    {
        printf("%d\n",ptr->data);
        ptr = ptr -> link;
    }
}
void insert(struct node * head,int position)
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr-> data = 75;
    ptr-> link = NULL;

    struct node *ptr2 = head;
    int count = 0;
    while(ptr2 != NULL)
    {
        count++;
        ptr2=ptr2->link;

        if(count==1)
        {
            ptr->link = ptr2->link;
            ptr2->link = ptr;
            break;
        }
    }
    traverse(head);

}
int main ()
{
    struct node *head = (struct node *) malloc(sizeof(struct node));

    head-> data = 45;
    head ->link = NULL;

    struct node *current = (struct node *) malloc(sizeof(struct node));
    current -> data = 50;
    head -> link = current;
    current -> link = NULL;

    current = (struct node *) malloc (sizeof(struct node));
    current -> data = 60;
    head -> link -> link = current;
    current -> link = NULL;

    insert(head,3);
}
