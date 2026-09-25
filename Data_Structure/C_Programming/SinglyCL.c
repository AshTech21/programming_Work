//////////////////////////////////////////////////////////////////////////////////////////////
// program on Singly Circulat Linked List
//////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////
// Including Header files
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : Display()
// Use              : This Function is use to display the Linked list 
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 25/9/2026
//////////////////////////////////////////////////////////////////////////////////////////////
void Display(PNODE first , PNODE last) 
{
    do
    {
        printf("|%d|->", first -> data);
        first = first -> next;
    }while(first != last -> next);
    printf("\n");
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : Count()
// Use              : This Function is use to Count the nodes of Linked List
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 25/9/2026
//////////////////////////////////////////////////////////////////////////////////////////////
int Count(PNODE first , PNODE last)
{
    int iCnt = 0;
    
    do
    {
        iCnt++;
        first = first -> next;
    }while(first != last -> next);

    return iCnt;
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : InsertAtFirst()
// Use              : This Function Inserts a node at the first position of Linked List
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 25/9/2026
//////////////////////////////////////////////////////////////////////////////////////////////
void InsertAtFirst(PPNODE first ,PPNODE last , int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNo;
    newn -> next = NULL;

    if(*first == NULL &&  *last == NULL)
    {
        *first = newn;
        *last = newn;
    }
    else
    {
        newn -> next = *first;
        *first = newn;   
    }
    (*last) -> next = *first;
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : InsertAtLast()
// Use              : This Function Inserts a node at the Last position of Linked List
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 25/9/2026
//////////////////////////////////////////////////////////////////////////////////////////////
void InsertAtLast(PPNODE first ,PPNODE last , int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNo;
    newn -> next = NULL;

    if(*first == NULL &&  *last == NULL)
    {
        *first = newn;
        *last = newn;
    }
    else
    {
        (*last) -> next = newn;
        (*last) = (*last) -> next;
    }
    (*last) -> next = *first;
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : InsertAtPos()
// Use              : This Function Inserts a node at Specific given position in Linked List
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 25/9/2026
//////////////////////////////////////////////////////////////////////////////////////////////
void InsertAtPos(PPNODE first , PPNODE last , int iNo , int iPos)
{
    int iCount = Count(*first , *last);
    int i = 0;
    PNODE temp = NULL;
    PNODE newn = NULL;


    if(iPos < 1 || iPos > iCount + 1)
    {
        printf("Invalid Position...");
        return;
    }

    if(iPos == 1)
    {
        InsertAtFirst(first , last , iNo);
    }
    else if(iPos == iCount + 1)
    {   
        InsertAtLast(first , last , iNo);
    }
    else
    {
        temp = *first;
        for(i = 1 ; i < iPos -1 ; i++)
        {
            temp = temp -> next;
        }
        newn = (PNODE)malloc(sizeof(NODE));
        newn -> data = iNo;
        newn -> next = NULL;

        newn -> next = temp -> next;
        temp -> next = newn;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : DeleteAtFirst()
// Use              : This Function Removes a node from first position of Linked List
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 25/9/2026
//////////////////////////////////////////////////////////////////////////////////////////////
void DeleteAtFirst(PPNODE first, PPNODE last)
{
    if(*first == NULL && *last == NULL)
    {
        printf("Linked List is empty");
        return;
    }
    else if(*first == *last)
    {
        free(*first);
        
        *first = NULL;
        *last = NULL;

        return;
    }
    else
    {
        *first = (*first) -> next;
        free((*last)-> next);
        (*last) -> next = *first;
    }

}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : DeleteAtLast()
// Use              : This Function Removes a node from Last position of Linked List
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 25/9/2026
//////////////////////////////////////////////////////////////////////////////////////////////
void DeleteAtLast(PPNODE first , PPNODE last)
{
    PNODE temp = NULL;
    
    if(*first == NULL && *last == NULL)
    {
        printf("Linked List is empty");
        return;
    }
    else if(*first == *last)
    {
        free(*first);
        
        *first = NULL;
        *last = NULL;

        return;
    }
    else
    {
        temp = *first;
        while(temp -> next != *last)
        {
            temp = temp -> next;
        }
        free(*last);
        *last = temp;

        (*last) -> next = *first;

    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : DeleteAtPos()
// Use              : This Function Removes a node from Specific given position in Linked List
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 25/9/2026
//////////////////////////////////////////////////////////////////////////////////////////////
void DeleteAtPos(PPNODE first , PPNODE last , int iPos)
{
    int iCount = Count(*first , *last);
    int i = 0;
    PNODE temp = NULL;
    PNODE newn = NULL;
    PNODE target = NULL;

    if(iPos < 1 || iPos > iCount + 1)
    {
        printf("Invalid Position...");
        return;
    }

    if(iPos == 1)
    {
        DeleteAtFirst(first , last);
    }
    else if(iPos == iCount + 1)
    {   
        DeleteAtLast(first , last);
    }
    else
    {
        temp = *first;
        for(i = 1 ; i < iPos -1 ; i++)
        {
            temp = temp -> next;
        }
        target = temp -> next;
        temp -> next = temp -> next -> next;
        free(target);
   
    } 
}

int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;
    int iCount = 0;

    InsertAtFirst(&Head , &Tail , 51);
    InsertAtFirst(&Head , &Tail , 21);
    InsertAtFirst(&Head , &Tail , 11);

    Display(Head , Tail);
    iCount = Count(Head , Tail);
    printf("The Number of Nodes in Linked List is : %d\n" , iCount);

    InsertAtLast(&Head , &Tail , 101);
    InsertAtLast(&Head , &Tail , 111);
    Display(Head , Tail);
    iCount = Count(Head , Tail);
    printf("The Number of Nodes in Linked List is : %d\n" , iCount);

    DeleteAtFirst(&Head ,&Tail);
    Display(Head , Tail);
    iCount = Count(Head , Tail);
    printf("The Number of Nodes in Linked List is : %d\n" , iCount);

    DeleteAtLast(&Head ,&Tail);
    Display(Head , Tail);
    iCount = Count(Head , Tail);
    printf("The Number of Nodes in Linked List is : %d\n" , iCount);

    InsertAtPos(&Head, &Tail, 11 , 1);
    Display(Head , Tail);
    iCount = Count(Head , Tail);
    printf("The Number of Nodes in Linked List is : %d\n" , iCount);

    DeleteAtPos(&Head , &Tail , 2);
    Display(Head , Tail);
    iCount = Count(Head , Tail);
    printf("The Number of Nodes in Linked List is : %d\n" , iCount);

}

/*
output:

|11|->|21|->|51|->
The Number of Nodes in Linked List is : 3
|11|->|21|->|51|->|101|->|111|->
The Number of Nodes in Linked List is : 5
|21|->|51|->|101|->|111|->
The Number of Nodes in Linked List is : 4
|21|->|51|->|101|->
The Number of Nodes in Linked List is : 3
|11|->|21|->|51|->|101|->
The Number of Nodes in Linked List is : 4
|11|->|51|->|101|->
The Number of Nodes in Linked List is : 3


*/