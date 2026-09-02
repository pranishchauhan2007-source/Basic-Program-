#include <stdio.h>
#include <stdlib.h>

struct node
{
    int item;
    struct node *next;
};

void insertAtLast(struct node **s, int data)
{
    struct node *n, *t;

    n = (struct node*)malloc(sizeof(struct node));

    n->item = data;
    n->next = NULL;

    if (*s == NULL)
        *s = n;
    else
    {
        t = *s;

        while (t->next != NULL)
            t = t->next;

        t->next = n;
    }
}

int main()
{
    struct node *start = NULL;

    insertAtLast(&start, 25);
    insertAtLast(&start, 35);

    return 0;
}