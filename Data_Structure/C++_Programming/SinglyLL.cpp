////////////////////////////////////////////////////////////////////////////
//
// Q. program on Singly Linked List by using c++ programming langauge
//
////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

#pragma pack(1)

struct node 
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;

#pragma pack(1)
class SinglyLL
{
    private:
        struct node *first;
        int iCount;

    public :
    // Constructor
    SinglyLL();

    // Display and count function
    void Display();
    int Count();

    // Insert Functions
    void InsertFirst(int iNo);
    void InsertLast(int iNo);
    void InsertAtPos(int iNo , int iPos);

    // Delete functions
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);

};
// Constructor
SinglyLL :: SinglyLL()
{
    this -> first = NULL;
    this -> iCount = 0;
}

// Display and count function

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : Display()
// Use              : This Function is use to display the Linked list 
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 6/10/2026
//////////////////////////////////////////////////////////////////////////////////////////////
void SinglyLL :: Display()
{
    PNODE temp = NULL;
    temp = this ->first;

    while(temp != NULL)
    {
        cout<<"|"<<temp -> data<<"| -> ";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : Count()
// Use              : This Function is use to Count the nodes of Linked List
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 6/10/2026
//////////////////////////////////////////////////////////////////////////////////////////////
int SinglyLL :: Count()
{
    return this -> iCount;
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : InsertAtFirst()
// Use              : This Function Inserts a node at the first position of Linked List
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 6/10/2026
//////////////////////////////////////////////////////////////////////////////////////////////
void SinglyLL :: InsertFirst(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn -> data = iNo;
    newn -> next = NULL;

    if(this -> first == NULL)
    {
        this -> first = newn;
    }
    else
    {
        newn -> next = this -> first;
        this -> first = newn;
    }
    this -> iCount++;
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : InsertAtLast()
// Use              : This Function Inserts a node at the Last position of Linked List
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 6/10/2026
//////////////////////////////////////////////////////////////////////////////////////////////
void SinglyLL :: InsertLast(int iNo)
{

    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = new NODE;

    newn -> data = iNo;
    newn -> next = NULL;

    if(this -> first == NULL)
    {
        this -> first = newn;
    }
    else
    {
        temp = this -> first;
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
    this -> iCount++;
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : InsertAtPos()
// Use              : This Function Inserts a node at Specific given position in Linked List
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 7/10/2026
//////////////////////////////////////////////////////////////////////////////////////////////
void SinglyLL :: InsertAtPos(int iNo , int iPos)
{
    int iCount = Count();
    int i = 0;

    PNODE newn = NULL;
    newn = new NODE;
    PNODE temp = NULL;


    if(iPos < 1 || iPos > iCount + 1)
    {
        cout<<"Invalid position...";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(iNo);
    }
    else
    {
        temp = this -> first;

        for( i = 1 ; i < iPos -1 ; i++)
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
// Date             : 7/10/2026
//////////////////////////////////////////////////////////////////////////////////////////////
void SinglyLL :: DeleteFirst()
{
    PNODE temp = NULL;

    if(this -> first == NULL)
    {
        cout<<"Linked list is empty..";
        return;
    }
    else if(this -> first -> next == NULL)
    {
        delete(this -> first);
        this -> first = NULL;
    }
    else
    {
        temp = this -> first;
        this -> first = temp -> next;
        delete(temp);

    }
    this -> iCount--;
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : DeleteAtLast()
// Use              : This Function Removes a node from Last position of Linked List
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 7/10/2026
//////////////////////////////////////////////////////////////////////////////////////////////
void SinglyLL ::  DeleteLast()
{
    PNODE temp = NULL;

    if(this -> first == NULL)
    {
        cout<<"Linked list is empty..";
        return;
    }
    else if(this -> first -> next == NULL)
    {
        delete(this -> first);
        this -> first = NULL;
    }
    else
    {
        temp = this -> first;

        while(temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }
        delete(temp -> next);
        temp -> next = NULL;
    }
    this -> iCount--;
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : DeleteAtPos()
// Use              : This Function Removes a node from Specific given position in Linked List
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 7/10/2026
//////////////////////////////////////////////////////////////////////////////////////////////
void SinglyLL ::  DeleteAtPos(int iPos)
{

    int iCount = Count();
    int i = 0;

    PNODE temp = NULL;
    PNODE target = NULL;

    if(iPos < 1 || iPos > iCount + 1)
    {
        cout<<"Invalid position...";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount + 1)
    {
        DeleteLast();
    }
    else
    {
        temp = this -> first;

        for(i = 1 ; i< iPos -1 ; i++)
        {
            temp = temp -> next;
        }

        target = temp -> next;
        temp -> next = temp -> next -> next;
        delete(target);
        
        this -> iCount--;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Function Name    : main()
// Use              : This is the entry point function of the program
// Author Name      : AshwinKumar Suhas Kulkarni
// Date             : 7/10/2026
//////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    SinglyLL sobj;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.Display();
    cout<<"The Number of Nodes in Linked list is :"<<sobj.Count()<<endl;

    sobj.InsertLast(101);
    sobj.Display();
    cout<<"The Number of Nodes in Linked list is :"<<sobj.Count()<<endl;

    sobj.DeleteFirst();
    sobj.Display();
    cout<<"The Number of Nodes in Linked list is :"<<sobj.Count()<<endl;

    sobj.DeleteLast();
    sobj.Display();
    cout<<"The Number of Nodes in Linked list is :"<<sobj.Count()<<endl;

    sobj.InsertAtPos(11 , 1);
    sobj.InsertAtPos(101 , 4);
    sobj.Display();
    cout<<"The Number of Nodes in Linked list is :"<<sobj.Count()<<endl;

    sobj.DeleteAtPos(3);
    sobj.Display();
    cout<<"The Number of Nodes in Linked list is :"<<sobj.Count()<<endl;

    return 0;
}


/*
output:

|11| -> |21| -> |51| -> NULL
The Number of Nodes in Linked list is :3
|11| -> |21| -> |51| -> |101| -> NULL
The Number of Nodes in Linked list is :4
|21| -> |51| -> |101| -> NULL
The Number of Nodes in Linked list is :3
|21| -> |51| -> NULL
The Number of Nodes in Linked list is :2
|11| -> |21| -> |51| -> |101| -> NULL
The Number of Nodes in Linked list is :4
|11| -> |21| -> |101| -> NULL
The Number of Nodes in Linked list is :3


*/