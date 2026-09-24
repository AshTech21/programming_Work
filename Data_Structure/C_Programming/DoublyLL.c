//////////////////////////////////////////////////////////////////////////////////////////////
// program on Doubly Linear Linked List
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
    struct node * prev;

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : Display()
// Use              : This Function is use to display the Linked list 
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 24/9/2026
//////////////////////////////////////////////////////////////////////////////////////////////
void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("|%d|->",first-> data );
        first = first -> next;
    }

    printf("NULL\n");
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : Count()
// Use              : This Function is use to Count the nodes of Linked List
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 24/9/2026
//////////////////////////////////////////////////////////////////////////////////////////////
int Count(PNODE first)
{
    int iCount = 0;

    while(first != NULL)
    {
        iCount++;
        first = first -> next;
    }
    return iCount;
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : InsertAtFirst()
// Use              : This Function Inserts a node at the first position of Linked List
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 23/9/2026
//////////////////////////////////////////////////////////////////////////////////////////////
void InsertAtFirst(PPNODE first , int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn -> next = *first;
        *first = newn;
        newn -> prev = NULL;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : InsertAtLast()
// Use              : This Function Inserts a node at the Last position of Linked List
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 23/9/2026
//////////////////////////////////////////////////////////////////////////////////////////////
void InsertAtLast(PPNODE first , int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;

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
        newn -> prev = temp;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : InsertAtPos()
// Use              : This Function Inserts a node at Specific given position in Linked List
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 24/9/2026
//////////////////////////////////////////////////////////////////////////////////////////////
void InsertAtPos(PPNODE first , int iNo , int iPos)
{
    int iCount = 0;
    int i = 0;
    PNODE temp = NULL;
    PNODE newn = NULL;

    iCount = Count(*first);

    if(iPos < 1 || iPos > iCount + 1 )
    {
        printf("Given invalid Position..");
        return;
    }

    if(iPos == 1)
    {
        InsertAtFirst(first, iNo );
    }
    else if(iPos == iCount + 1)
    {
        InsertAtLast(first , iNo);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn -> data = iNo;
        newn -> next = NULL;
        newn -> prev = NULL;
        temp = *first;
        for(i = 1 ; i < iPos -1  ; i++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp -> next -> prev = newn;
        temp -> next = newn;
        newn -> prev = temp;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : DeleteAtFirst()
// Use              : This Function Removes a node from first position of Linked List
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 24/9/2026
//////////////////////////////////////////////////////////////////////////////////////////////
void DeleteAtFirst(PPNODE first)
{

    if(*first == NULL)
    {
        printf("The Linked List is empty..");
        return;
    }
    else
    {
        *first = (*first) -> next;
        free((*first) -> prev);
        (*first) -> prev = NULL;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : DeleteAtLast()
// Use              : This Function Removes a node from Last position of Linked List
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 24/9/2026
//////////////////////////////////////////////////////////////////////////////////////////////
void DeleteAtLast(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)
    {
        printf("The Linked List is empty..");
        return;
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
// Date             : 24/9/2026
//////////////////////////////////////////////////////////////////////////////////////////////
void DeleteAtPos(PPNODE first, int iPos)
{
    int iCount = 0;
    int i = 0;
    PNODE temp = NULL;

    iCount = Count(*first);

    if(iPos < 1 || iPos > iCount + 1 )
    {
        printf("Given invalid Position..");
        return;
    }

    if(iPos == 1)
    {
        DeleteAtFirst(first);
    }
    else if(iPos == iCount + 1)
    {
        DeleteAtLast(first);
    }
    else
    {
        
        temp = *first;
        for(i = 1 ; i < iPos - 1; i++)
        {
            temp = temp -> next;
        }

        temp -> next = temp -> next -> next;
        free(temp -> next -> prev);
        temp -> next -> prev = temp;

    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : main()
// Use              : This is the entry point function of the program
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 23/9/2026
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
    printf("The Total number of Nodes are : %d\n", iCount);

    InsertAtLast(&Head, 101);
    InsertAtLast(&Head, 111);

    Display(Head);
    iCount = Count(Head);
    printf("The Total number of Nodes are : %d\n", iCount);

    DeleteAtFirst(&Head);

    Display(Head);
    iCount = Count(Head);
    printf("The Total number of Nodes are : %d\n", iCount);

    DeleteAtLast(&Head);

    Display(Head);
    iCount = Count(Head);
    printf("The Total number of Nodes are : %d\n", iCount);

    InsertAtPos(&Head , 11 , 1);
    
    Display(Head);
    iCount = Count(Head);
    printf("The Total number of Nodes are : %d\n", iCount);

    InsertAtPos(&Head , 111 , 5);
    
    Display(Head);
    iCount = Count(Head);
    printf("The Total number of Nodes are : %d\n", iCount);

    DeleteAtPos(&Head , 3);

    Display(Head);
    iCount = Count(Head);
    printf("The Total number of Nodes are : %d\n", iCount);

    return 0;
}

/*
Output:

|11|->|21|->|51|->NULL
The Total number of Nodes are : 3
|11|->|21|->|51|->|101|->|111|->NULL
The Total number of Nodes are : 5
|21|->|51|->|101|->|111|->NULL
The Total number of Nodes are : 4
|21|->|51|->|101|->NULL
The Total number of Nodes are : 3
|11|->|21|->|51|->|101|->NULL
The Total number of Nodes are : 4
|11|->|21|->|51|->|101|->|111|->NULL
The Total number of Nodes are : 5
|11|->|21|->|101|->|111|->NULL
The Total number of Nodes are : 4


*/
