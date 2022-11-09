// singly linked list

#include <stdio.h>
#include <stdlib.h>

// creation of node
struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

// insertion at begining
void insertAtBeg(int value)
{
    struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = value;
    if (head == NULL)
    {
        newnode->next = NULL;
        head = newnode;
    }
    else
    {
        newnode->next = head;
        head = newnode;
    }
    printf("\n\n*Inserted successfully at beginning*\n");
}

// insertation at end
void insertATend(int value)
{
    struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = value;
    if (head == NULL)
    {
        newnode->next = NULL;
        head = newnode;
    }
    else
    {
        struct Node *temp;
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->next = NULL;
    }
    printf("\n\n*Inserted Successfully in END *\n");
}

// insertion at any position
void insertAtPos(int pos, int value)
{
    struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = value;

    struct Node *temp = NULL;
    int i = 1;
    temp = head;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

// deletion at begining
void deletatBeg()
{
    struct Node *temp;
    temp = head;
    head = head->next;
    free(temp);
}

// deletion at end
void deletatEnd()
{
    struct Node *temp, *prev;
    prev = temp = head;
    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    free(temp);
}

// deletion at any position
void deletatPos(int pos)
{
    struct Node *nextnode, *temp;
    int i = 1;
    nextnode = temp = head;
    while (i < pos)
    {
        temp = nextnode;
        nextnode = nextnode->next;
        i++;
    }
    temp->next = nextnode->next;
    free(nextnode);
}

// sorting of linked list
void sortlist()
{
    struct Node *ptr, *cpt;
    ptr = head;
    int temp;
    while (ptr->next != NULL)
    {
        cpt = ptr->next;
        while (cpt != NULL)
        {
            if (ptr->data > cpt->data)
            {
                temp = ptr->data;
                ptr->data = cpt->data;
                cpt->data = temp;
            }
            cpt = cpt->next;
        }
        ptr = ptr->next;
    }
}

void reverse()
{
    struct Node *current = head;
    struct Node *prev = NULL, *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

// printing of linked list
void print()
{
    struct Node *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d-->", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

// length of the linked
int getlength()
{
    int len = 0;
    struct Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    printf("%d", len);
}

// main function
int main()
{
    // int a;
    // printf("how many elements do you want enter= ");
    // scanf("%d", &a);
    // for (int i = 0; i < a; i++)
    // {
    //     int data;
    //     scanf("%d", &data);
    //     insertATend(data);
    // }
    // print();
    insertAtBeg(34);
    insertAtBeg(45);
    insertAtBeg(72);
    insertAtBeg(5);
    insertAtBeg(89);
    insertAtBeg(99);
    insertATend(23);
    insertATend(55);
    insertATend(13);
    insertATend(41);
    insertAtPos(6, 8992);
    print();
    printf("\n");
    deletatBeg();
    deletatEnd();
    deletatPos(3);
    print();
    printf("\n");
    sortlist();
    print();
    insertATend(58);
    print();
    printf("\n");
    reverse();
    print();
    printf("\n\n");
    printf("length: ");
    getlength();
    return 0;
}
