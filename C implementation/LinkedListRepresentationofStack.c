#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

void push(int x)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = top;
    top = temp;
}

void pop()
{
    struct node *ptr;
    ptr = top;
    top = ptr->next;
    ptr->next = NULL;
    free(ptr);
}

void display()
{
    struct node *p;
    p = top;
    printf("Elements present in the stack: ");
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n\n");
}

int main()
{
    int choice, temp;
    while (1)
    {
        printf("1.Push on to the LL stack\n2.Pop off the LL stack\n3.display\n\nEnter you choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the number to push: ");
            scanf("%d", &temp);
            push(temp);
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;
        }
    }
}