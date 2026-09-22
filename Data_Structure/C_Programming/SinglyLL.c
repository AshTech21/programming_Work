//////////////////////////////////////////////////////////////////////////////////////////////
// Program to make a Linked List By using C.
//////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////
// Including Header files
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};


typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : Display()
// Use              : This Function is use to display the Linked list 
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 22/9/2026
//////////////////////////////////////////////////////////////////////////////////////////////
void Display(PNODE first)
{
    PNODE temp = first;
    while(temp != NULL)
    {
        printf("|%d|->",temp -> data);
        temp = temp -> next;
    }
    printf("NULL\n");
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : Count()
// Use              : This Function is use to Count the nodes of Linked List
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 22/9/2026
//////////////////////////////////////////////////////////////////////////////////////////////
int Count(PNODE first)
{
    int iCnt = 0;

    while(first != NULL)
    {
        iCnt++;    
        first = first -> next;
    }
    return iCnt;
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : InsertAtFirst()
// Use              : This Function Inserts a node at the first position of Linked List
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 22/9/2026
//////////////////////////////////////////////////////////////////////////////////////////////

void InsertAtFirst(PPNODE first , int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNo;
    newn -> next = NULL; 


    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn -> next = *first;
        *first = newn;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : InsertAtLast()
// Use              : This Function Inserts a node at the Last position of Linked List
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 22/9/2026
//////////////////////////////////////////////////////////////////////////////////////////////

void InsertAtLast(PPNODE first , int iNo)
{   
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNo;
    newn -> next = NULL; 


    if(*first == NULL)
    {
        *first = newn;    
    }
    else
    {
        temp = *first;

        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;   
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : InsertAtPos()
// Use              : This Function Inserts a node at Specific given position in Linked List
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 22/9/2026
//////////////////////////////////////////////////////////////////////////////////////////////

void InsertAtPos(PPNODE first , int iNo , int iPos)
{
    int iCount = Count(*first);
    PNODE newn = NULL;
    PNODE temp = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));
    newn -> data = iNo;
    newn -> next = NULL;
    int i = 0;

    if(iPos < 1 || iPos > iCount + 1)
    {
        printf("Invalid Position.");
        return;
    }

    if(iPos == 1)
    {
        InsertAtFirst(first , iNo);
    }
    else if(iPos == iCount+1)
    {
        InsertAtLast(first , iNo);
    }
    else
    {
        temp = *first;
        for(i = 1 ; i < iPos - 1  ; i++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp -> next = newn;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : DeleteAtFirst()
// Use              : This Function Removes a node from first position of Linked List
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 22/9/2026
//////////////////////////////////////////////////////////////////////////////////////////////

void DeleteAtFirst(PPNODE first)
{
    PNODE temp = NULL;

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
        *first = (*first) -> next;
        free(temp);
    }

}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : DeleteAtLast()
// Use              : This Function Removes a node from Last position of Linked List
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 22/9/2026
//////////////////////////////////////////////////////////////////////////////////////////////

void DeleteAtLast(PPNODE first)
{
    PNODE temp = NULL;

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

        while(temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }

            free(temp -> next);
            temp -> next = NULL;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : DeleteAtPos()
// Use              : This Function Removes a node from Specific given position in Linked List
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 22/9/2026
//////////////////////////////////////////////////////////////////////////////////////////////

void DeleteAtPos(PPNODE first , int iPos)
{
    int iCount = Count(*first);
    PNODE target = NULL;
    PNODE temp = NULL;

    int i = 0;

    if(iPos < 1 || iPos > iCount + 1)
    {
        printf("Invalid Position.");
        return;
    }

    if(iPos == 1)
    {
        DeleteAtFirst(first);
    }
    else if(iPos == iCount+1)
    {
        DeleteAtLast(first);
    }
    else
    {
        temp = *first;
        for(i = 1 ; i < iPos - 1  ; i++)
        {
            temp = temp -> next;
        }

        target = temp -> next;

        temp -> next = target -> next;
        free(target);

    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : main()
// Use              : This is the entry point function of the program
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 22/9/2026
//////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    PNODE Head = NULL;
    int iCount = 0;

    InsertAtFirst(&Head , 51);
    InsertAtFirst(&Head , 21);
    InsertAtFirst(&Head , 11);

    Display(Head);  
    iCount = Count(Head);
    printf("Total Nodes in Linked list are : %d\n", iCount);
    
    InsertAtLast(&Head,101);
    InsertAtLast(&Head,111);

    Display(Head);
    iCount = Count(Head);
    printf("Total Nodes in Linked list are : %d\n", iCount);

    DeleteAtLast(&Head);
    Display(Head);
    iCount = Count(Head);
    printf("Total Nodes in Linked list are : %d\n", iCount);

    InsertAtPos(&Head , 111 , 2);
    Display(Head);
    iCount = Count(Head);
    printf("Total Nodes in Linked list are : %d\n", iCount);

    DeleteAtPos(&Head , 4);
    Display(Head);
    iCount = Count(Head);
    printf("Total Nodes in Linked list are : %d\n", iCount);

    return 0;
}

/*
output:

|11|->|21|->|51|->NULL
Total Nodes in Linked list are : 3
|11|->|21|->|51|->|101|->|111|->NULL
Total Nodes in Linked list are : 5
|11|->|21|->|51|->|101|->NULL
Total Nodes in Linked list are : 4
|11|->|111|->|21|->|51|->|101|->NULL
Total Nodes in Linked list are : 5
|11|->|111|->|21|->|101|->NULL
Total Nodes in Linked list are : 4



*/