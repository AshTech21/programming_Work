//////////////////////////////////////////////////////////////////////////////////////////////
// Program on Doubly Circuler linked list
//////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////
// Including Header files
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

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
// Date             : 28/9/2026
//////////////////////////////////////////////////////////////////////////////////////////////
void Display(PNODE first , PNODE last)
{
    if(first == NULL && last == NULL)
    {
        return;
    }

    printf(" <=> ");
    do
    {
        printf("| %d | <=> ", first -> data);
        first = first -> next;

    }while(first != last -> next);

    printf("\n");
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : Count()
// Use              : This Function is use to Count the nodes of Linked List
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 28/9/2026
//////////////////////////////////////////////////////////////////////////////////////////////
int Count(PNODE first , PNODE last)
{
    int iCount = 0;
      if(first == NULL && last == NULL)
    {
        return 0;
    }
    do
    {
        iCount++;
        first = first -> next;

    }while(first != last -> next);
    return iCount;
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : InsertAtFirst()
// Use              : This Function Inserts a node at the first position of Linked List
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 28/9/2026
//////////////////////////////////////////////////////////////////////////////////////////////
void InsertFirst(PPNODE first, PPNODE last , int iNo)
{
    PNODE temp = NULL;
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(*first == NULL &&  *last == NULL)
    {
        *first = newn;
        *last = newn;
    }
    else
    {
        newn -> next = *first;
        (*first)-> prev = newn;
        *first = newn;
    }

    (*last) -> next = *first;
    (*first) -> prev = *last;
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : InsertAtLast()
// Use              : This Function Inserts a node at the Last position of Linked List
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 29/9/2026
//////////////////////////////////////////////////////////////////////////////////////////////
void InsertLast(PPNODE first, PPNODE last , int iNo)
{
    PNODE temp = NULL;
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(*first == NULL &&  *last == NULL)
    {
        *first = newn;
        *last = newn;
    }
    else
    {
        (*last) -> next = newn;
        newn -> prev = *last;
        *last = newn;
    }

    (*last) -> next = *first;
    (*first) -> prev = *last;
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : InsertAtPos()
// Use              : This Function Inserts a node at Specific given position in Linked List
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 29/9/2026
//////////////////////////////////////////////////////////////////////////////////////////////
void InsertAtPos(PPNODE first, PPNODE last , int iNo , int iPos)
{
    PNODE temp = NULL;
    PNODE newn = NULL;
    int i = 0;
    int iCount = Count(*first , *last);
    
    if((iCount< 1) || (iPos > iCount + 1 ))
    {
        return ;
    }

    if(iPos == 1)
    {
        InsertFirst(first , last , iNo);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(first, last ,iNo);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn -> data = iNo;
        newn -> next = NULL;
        newn -> prev = NULL;

        temp = *first;
        for(i = 1 ; i < iPos -1 ; i++)
        {
            temp = temp -> next ;

        }
        // node right connection
        newn -> next = temp -> next ;
        temp -> next -> prev = newn;

        temp -> next = newn;
        newn -> prev = temp;

    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : DeleteAtFirst()
// Use              : This Function Removes a node from first position of Linked List
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 29/9/2026
//////////////////////////////////////////////////////////////////////////////////////////////
void DeleteFirst(PPNODE first, PPNODE last)
{
    if(*first == NULL && *last== NULL)
    {
        return ;
    }
    else if(*first == *last)
    {
        free(*first);
        *first = NULL;
        *last = NULL;
    }
    else
    {
        *first = (*first) -> next;
        free((*first) -> prev);

        *last = (*first) -> prev;
        (*last) -> next = *first;
        (*first) -> prev = *last;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : DeleteAtLast()
// Use              : This Function Removes a node from Last position of Linked List
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 29/9/2026
//////////////////////////////////////////////////////////////////////////////////////////////
void DeleteLast(PPNODE first, PPNODE last)
{
    if(*first == NULL && *last== NULL)
    {
        return ;
    }
    else if(*first == *last)
    {
        free(*first);
        *first = NULL;
        *last = NULL;
    }
    else
    {
        *last = (*last)-> prev;
        free((*last) -> next);

        (*last) -> next = *first;
        (*first) -> prev = *last;
    }

}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : DeleteAtPos()
// Use              : This Function Removes a node from Specific given position in Linked List
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 29/9/2026
//////////////////////////////////////////////////////////////////////////////////////////////
void DeleteAtPos(PPNODE first, PPNODE last , int iPos)
{

    PNODE temp = NULL;
    int i = 0;
    int iCount = Count(*first , *last);
    
    if((iCount< 1) || (iPos > iCount + 1 ))
    {
        return ;
    }

    if(iPos == 1)
    {
        DeleteFirst(first , last);
    }
    else if(iPos == iCount + 1)
    {
        DeleteLast(first, last);
    }
    else
    {
        temp = *first;
        for(i = 1 ; i < iPos -1 ; i++)
        {
            temp = temp -> next ;
        }
        
        temp -> next = temp -> next -> next;
        free(temp -> next-> prev);
        temp -> next -> prev = temp;
    
    }
}

int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;
    int iRet = 0;

    printf("Doubbly circular linked list :\n\n");

    
    InsertFirst(&head, &tail , 51);
    InsertFirst(&head, &tail , 21);
    InsertFirst(&head, &tail , 11);

    
    InsertLast(&head,&tail,101);
    InsertLast(&head,&tail,111);
    InsertLast(&head,&tail,121);

    Display(head , tail);
    iRet = Count(head, tail);
    printf("Number of Elements are : %d\n",iRet);

    DeleteFirst(&head, &tail);
    Display(head , tail);
    iRet = Count(head, tail);
    printf("Number of Elements are : %d\n",iRet);

    DeleteLast(&head ,&tail);
    Display(head , tail);
    iRet = Count(head, tail);
    printf("Number of Elements are : %d\n",iRet);

    InsertAtPos(&head, & tail , 105, 4);
    Display(head , tail);
    iRet = Count(head, tail);
    printf("Number of Elements are : %d\n",iRet);

    DeleteAtPos(&head , & tail , 4);
    Display(head , tail);
    iRet = Count(head, tail);
    printf("Number of Elements are : %d\n",iRet);

    return 0;
}

/*
output:

Doubbly circular linked list :

 <=> | 11 | <=> | 21 | <=> | 51 | <=> | 101 | <=> | 111 | <=> | 121 | <=> 
Number of Elements are : 6
 <=> | 11 | <=> | 21 | <=> | 51 | <=> | 101 | <=> | 111 | <=> 
Number of Elements are : 5
 <=> | 11 | <=> | 21 | <=> | 51 | <=> | 105 | <=> | 101 | <=> | 111 | <=> 
Number of Elements are : 6
 <=> | 11 | <=> | 21 | <=> | 51 | <=> | 101 | <=> | 111 | <=> 
Number of Elements are : 5

*/