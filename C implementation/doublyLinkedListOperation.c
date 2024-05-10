#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void display()
{
    if (head == NULL)
    {
        printf("Doublly LL is empty\n\n");
    }
    else
    {
        printf("Printing elements in doubly LL: ");
        struct node *temp;
        temp = head;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n\n");
    }
}
int length()
{
    struct node *temp;
    temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    printf("%d", count);
    return count;
}

void insertAtEnd(int x)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
    temp->prev = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        struct node *ptr;
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
        temp->prev = ptr;
    }
}

void insertAtBegin(int x)
{
    struct node *temp;
    struct node *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->prev = NULL;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
        ptr = head;
        ptr->prev = temp;
        head = temp;
    }
}

void insertAfter(int pos, int x)
{
    if (pos > length())
    {
        printf("Invalid location");
    }
    else
    {
        struct node *ptr;
        struct node *temp;
        ptr = head;
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = x;
        temp->next = temp->prev = NULL;
        for (int i = 1; i < pos; i++)
        {
            ptr = ptr->next;
        }
        temp->next = ptr->next;
        temp->prev = ptr;
        ptr->next = temp;
        if (ptr->next != NULL)
        {
            ptr = ptr->next;
            ptr->prev = temp;
        }
    }
}

void deleteFirst()
{
    struct node *ptr;
    ptr = head;
    head = ptr->next;
    ptr->next->prev = NULL;
}

void deleteNode(int pos)
{
    if (length() == 1)
    {
        head = NULL;
    }
    else
    {
        struct node *ptr;
        ptr = head;
        for (int i = 1; i < pos; i++)
        {
            ptr = ptr->next;
        }
        ptr->prev->next = ptr->next;
        if (ptr->next != NULL)
        {
            ptr->next->prev = ptr->prev;
        }
        ptr->next = ptr->prev = NULL;
    }
}

int main()
{
    int choice, pos, temp;
    while (1)
    {
        printf("1.insert at the end of the Doubly LL\n2.Insert at beginning of the Doubly LL\n3.Insert after\n4.Delete first element\n5.Delete node\n6.Length\n7.Display\n8.Exit\n\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the number you want to insert: ");
            scanf("%d", &temp);
            insertAtEnd(temp);
            break;

        case 2:
            printf("Enter the number you want to insert: ");
            scanf("%d", &temp);
            insertAtBegin(temp);
            break;

        case 3:
            printf("Enter the position and value:");
            scanf("%d %d", &pos, &temp);
            insertAfter(pos, temp);
            break;

        case 4:
            deleteFirst();
            break;

        case 5:
            printf("Enter the pos to delete: ");
            scanf("%d", &temp);
            deleteNode(temp);
            break;

        case 6:
            length();
            break;

        case 7:
            display();
            break;

        case 8:
            exit(0);
        }
    }
}
