// Singly Linked List
// | 11 | -> | 21 | -> | 51 | -> | 101 | -> NULL


#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void InsertFirst(struct node ** first, int No)
{
    struct node *newn = NULL;

    newn = (struct node *)malloc(sizeof(struct node));

    newn -> data = No;
    newn -> next = NULL;

    if(*first == NULL)
    {
        *first = NULL;
    }
    else
    {
        newn -> next = *first;
        *first = newn;
    }
}

void InsertLast(struct node ** first, int No)
{
    struct node * temp = NULL;
    struct node * newn = NULL;

    newn = (struct node *)malloc(sizeof(struct node));

    newn -> data = No;
    newn -> next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = (struct node *)malloc(sizeof(struct node));
        
        temp = *first;

        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }        
        temp -> next = newn;
    }
}


void InsertAtPos(struct node ** first, int iNo , int iPos)
{
    int iCount = 0;
    struct node * newn = NULL;
    struct node * temp = NULL;

    newn = (struct node *)malloc(sizeof(struct node));

    newn -> data = iNo;
    newn -> next = NULL;

    iCount = Count(*first);

    if(iPos == 1)
    {
        InsertFirst(*first, iNo);
    }
    else if(iPos == (iCount + 1))
    {
        InsertLast(*first, iNo);
    }
    else
    {
        temp = (struct node *)malloc(sizeof(struct node));

        temp = *first;

        while((temp -> next) != (iPos - 1))
        {
            temp = temp -> next;

            temp = newn;
            newn -> next = temp -> next
        }
    }



}


void DeleteFirst(struct node ** first)
{
    struct node * temp = NULL;

    if(*first == NULL)
    {
        return;
    }
    else if((*first) -> next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;

        (*first) = (*first) -> next;

        free(temp);
    }
}


void DeleteLast(struct node ** first)
{
    struct node * temp = NULL;

    if(*first == NULL)
    {
        return;
    }
    else if((*first) -> next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;

        while((temp -> next -> next) != NULL)
        {
            temp = temp -> next;    
        }

        free(temp -> next);
        temp -> next = NULL;
    }
}


void Display(struct node * first)
{
    while(first != NULL)
    {
        printf("| %d | -> ",first -> data);
        first = first -> next;
    }
    printf("NULL\n");
}

int Count(struct node * first)
{
    int iCount = 0;
    
    while(first != NULL)
    {
        first = first -> next;
        iCount++;
    }
    return iCount;
}


int main()
{
    int iRet = 0;

    struct node *head = NULL;

    struct node *newn1 = NULL;
    struct node *newn2 = NULL;
    struct node *newn3 = NULL;

    newn1 = (struct node *)malloc(sizeof(struct node));
    newn2 = (struct node *)malloc(sizeof(struct node));
    newn3 = (struct node *)malloc(sizeof(struct node));

    newn1 -> data = 11;
    newn2 -> data = 21;
    newn3 -> data = 51;
    
    newn1 -> next = newn2;
    newn2 -> next = newn3;
    newn3 -> next = NULL;

    head = newn1;

    InsertFirst(&head, 1);
    InsertLast(&head, 101);

    Display(head);
    iRet = Count(head);

    printf("Count of Elements in the Linked List : %d\n", iRet);

    DeleteFirst(&head);
    DeleteLast(&head);

    Display(head);
    iRet = Count(head);

    printf("Count of Elements in the Linked List : %d\n", iRet);

    return 0;
}


