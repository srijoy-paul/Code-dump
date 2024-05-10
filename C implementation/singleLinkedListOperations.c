
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

int length()
{
    int count = 0;
    struct node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    // printf("Length of LL: %d\n\n",count);
    return count;
}

void insertAtBegin(int x)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = x;
    ptr->next = NULL;
    if (head == NULL)
    {
        head = ptr;
    }
    else
    {
        ptr->next = head;
        head = ptr;
    }
}

void insertAfter(int x, int loc)
{
    struct node *temp;
    struct node *ptr;
    int i = 1, len;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
    ptr = head;
    len = length();
    if (loc > len)
    {
        printf("Location not present in the LL\n\n");
    }
    else
    {
        while (i < loc)
        {
            ptr = ptr->next;
            i++;
        }
        temp->next = ptr->next;
        ptr->next = temp;
    }
}

void insertAtEnd(int x)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node)); // type casting
    temp->data = x;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        struct node *p;
        p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
    }
}

void deleteFirst()
{
    struct node *temp;
    temp = head;
    head = temp->next;
    temp->next = NULL;
    printf("%d deleted from the LL.\n\n", temp->data);
    free(temp);
}

void deleteLast()
{
    struct node *temp;
    struct node *ptr;
    temp = head;
    while (temp->next != NULL)
    {
        ptr = temp->next;
        if (ptr->next == NULL)
        {
            temp->next = NULL;
            free(ptr);
            break;
        }
        temp = temp->next;
    }
}

void deleteNode(int x)
{
    int i = 1;
    struct node *ptr;
    struct node *ptr2;
    ptr = head;
    while (i < x - 1)
    {
        ptr = ptr->next;
        i++;
    }
    ptr2 = ptr->next;
    ptr->next = ptr2->next;
    ptr2->next = NULL;
    printf("%d deleted.\n\n", ptr2->data);
    free(ptr2);
}

void nodeSwap(int x)
{
    int i = 1;
    struct node *temp;
    struct node *temp1;
    struct node *temp2;
    while (i < x - 1)
    {
        temp = temp->next;
        i++;
    }
    temp1 = temp->next;
    temp2 = temp1->next;
    temp1->next = temp2->next;
    temp2->next = temp1;
    temp->next = temp2;
}

void display()
{
    if (head == NULL)
        printf("Linked List is empty.\n\n");
    else
    {
        printf("Elements in the linked list: ");
        struct node *ptr;
        ptr = head;
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n\n");
}

int main()
{
    int choice, temp, pos, nodeToDelete;
    while (1)
    {
        printf("1.Insert element at end of the LL\n2.Insert element at the begin of the LL\n3.Insert element after a position\n4.Delete first element of the LL\n5.Delete last element of LL\n6.Delete a node\n7.Display elements of the LL\n8.Length of the LL\n9.Node swap\n10.Exit\n\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the number you want to append: ");
            scanf("%d", &temp);
            insertAtEnd(temp);
            break;

        case 2:
            printf("\nEnter the number you want to append: ");
            scanf("%d", &temp);
            insertAtBegin(temp);
            break;

        case 3:
            printf("\nEnter the number you want to append: ");
            scanf("%d", &temp);
            printf("\nEnter the location after which the element to be inserted: ");
            scanf("%d", &pos);
            insertAfter(temp, pos);
            break;

        case 4:
            deleteFirst();
            break;

        case 5:
            deleteLast();
            break;

        case 6:
            printf("Enter the node you want to delete(1 based indexing): ");
            scanf("%d", &nodeToDelete);
            deleteNode(nodeToDelete);
            break;

        case 7:
            display();
            break;

        case 8:
            length();
            break;

        case 9:
            nodeSwap(2);
            display();
            break;

        case 10:
            exit(0);

        default:
            printf("Wrong choice\n\n");
        }
    }

    return 0;
}
