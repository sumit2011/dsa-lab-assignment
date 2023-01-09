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
    printf("%d is inserted at beginning.\n", value);
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
    printf("%d is inserted at the end.\n", value);
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
    printf("%d is inserted at the %dth position.\n", value, pos);
}

// deletion at begining
void deleteatBeg()
{
    if (head == NULL)
    {
        printf("The list is empty.\n");
    }
    else
    {
        struct Node *temp;
        temp = head;
        head = head->next;
        printf("%d is deleted from the begining\n", temp->data);
        free(temp);
    }
}

// deletion at end
void deleteatEnd()
{
    if (head == NULL)
    {
        printf("The list is empty.\n");
    }
    else
    {
        struct Node *temp, *prev;
        prev = temp = head;
        while (temp->next != NULL)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        printf("%d is deleted from the end\n", temp->data);
        free(temp);
    }
}

// deletion at any position
void deleteatPos(int pos)
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
    printf("%d is deleted from the %dth position.\n", nextnode->data, pos);
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
    printf("The list is sorted successfully.\n");
}

// to reverse the list
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
    printf("The list is reversed successfully.\n");
}

// printing of linked list
void display()
{
    printf("The list is: ");
    struct Node *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n\n");
}

// length of the linked
int getlength()
{
    int count = 0;
    struct Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    printf("Total nodes present in the list is: %d\n", count);
}

// main function
int main()
{

    insertAtBeg(34);
    insertAtBeg(45);
    insertAtBeg(72);
    insertAtBeg(50);
    insertAtBeg(89);
    insertAtBeg(99);
    insertATend(23);
    insertATend(55);
    insertATend(13);
    insertATend(41);
    insertAtPos(6, 8992);
    display();
    deleteatBeg();
    deleteatEnd();
    deleteatPos(3);
    display();
    sortlist();
    display();
    insertATend(58);
    display();
    reverse();
    display();
    insertAtBeg(99);
    insertATend(23);
    display();
    getlength();
    return 0;
}

// int a;
// printf("how many elements do you want enter= ");
// scanf("%d", &a);
// for (int i = 0; i < a; i++)
// {
//     int data;
//     scanf("%d", &data);
//     insertATend(data);
// }
// display();

// int main()
// {
//     int choice,value,pos;

//     printf("1) Insert at begining\n");
//     printf("2) insert at last\n");
//     printf("3) Insert at any position\n");
//     printf("4) Delete from the begining\n");
//     printf("5) Delete from the end\n");
//     printf("6) Delete from any position\n");
//     printf("7) Sort the list\n");
//     printf("8) Reverse the list\n");
//     printf("9) Fint the length of the list\n");
//     printf("10) Display the list\n");
//     printf("11) Exit\n");

//     do
//     {
//         printf("Enter Choice: ");
//         scanf("%d",&choice);
//         switch (choice)
//         {
//         case 1:
//             printf("Enter value to be inserted: ");
//             scanf("%d",&value);
//             insertAtBeg(value);
//             break;
//         case 2:
//             printf("Enter value to be inserted: ");
//             scanf("%d",&value);
//             insertATend(value);
//             break;
//         case 3:
//             printf("Enter the position and the value to be inserted respectively: ");
//             scanf("%d%d",&pos,&value);
//             insertAtPos(pos,value);
//             break;
//         case 4:
//             deleteatBeg();
//             break;
//         case 5:
//             deleteatEnd();
//             break;
//         case 6:
//             printf("Enter the position of the node to be deleted: ");
//             scanf("%d",&pos);
//             deleteatPos(pos);
//             break;
//         case 7:
//             sortlist();
//             break;
//         case 8:
//             reverse();
//             break;
//         case 9:
//             getlength();
//             break;
//         case 10:
//             display();
//             break;
//         case 11:
//             printf("Exit");
//             break;
//         default:
//             break;
//         }
//     } while (choice!=11);

//     return 0;
// }
