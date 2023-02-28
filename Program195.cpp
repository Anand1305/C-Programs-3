#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node *next;
};


template<class T>
class SinglyLL
{
    public:
        struct node<T> * First;

        SinglyLL();
        void InsertFirst(T no);
        void Display();
        int Count();
};

template<class T>
SinglyLL <T>:: SinglyLL()
{
   First = NULL;
}

template<class T>
void SinglyLL <T>:: InsertFirst(T no)
{
    struct node<T> * newn = new node<T>;  

    newn -> data = no;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
}

template<class T>
void SinglyLL <T>:: Display()
{
    struct node<T> * temp = First;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<"\n";
}

template<class T>
int SinglyLL <T>:: Count()
{
    struct node<T> * temp = First;
    int iCnt = 0;

    while(temp != NULL)
    {
        iCnt++;
        temp = temp -> next;
    }
    return iCnt;
}

int main()
{
    SinglyLL <int>iobj;
    
    iobj.InsertFirst(101);
    iobj.InsertFirst(51);
    iobj.InsertFirst(21);
    iobj.InsertFirst(11);
    iobj.Display();
    int iRet = iobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

     
    SinglyLL <double>dobj;
    
    dobj.InsertFirst(101.1);
    dobj.InsertFirst(51.2);
    dobj.InsertFirst(21.3);
    dobj.InsertFirst(11.4);
    dobj.Display();
    int dRet = dobj.Count();
    cout<<"Number of nodes are : "<<dRet<<"\n";

    SinglyLL <char>cobj;
    
    cobj.InsertFirst('a');
    cobj.InsertFirst('b');
    cobj.InsertFirst('c');
    cobj.InsertFirst('d');
    cobj.Display();
    int cRet = cobj.Count();
    cout<<"Number of nodes are : "<<cRet<<"\n";

    SinglyLL <float>fobj;
    
    fobj.InsertFirst(10.1);
    fobj.InsertFirst(5.1);
    fobj.InsertFirst(2.1);
    fobj.InsertFirst(1.1);
    fobj.Display();
    int fRet = fobj.Count();
    cout<<"Number of nodes are : "<<fRet<<"\n";

    return 0;
}