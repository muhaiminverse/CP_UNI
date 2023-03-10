#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data; //node
    node * next; //pointer variable
};

class LinkedList{
public:
    node * head; //pointer variable
    int sz;
    LinkedList()
    {
        head= NULL;
        sz=0;
    }

    ///Creates a new nod with data=value & next=NULL
    node* CreateNewNode(int value)
    {
        sz++;
       node *newnode= new node;
       newnode->data = value;
       newnode->next = NULL;
       return newnode;
    }

    ///Insert new value at head
    void InserAtHead(int value)
    {
        sz++;
        node *a= CreateNewNode(value);
    if(head==NULL)
    {
        head=a;
        return;
    }
    ///if head is not NULL
    a->next = head;
    head = a;
    }

    ///getsize
    void getsize()
    {
        cout<<"size "<<sz;
    }
    ///Prints the linked list
    void Traverse()
    {
        node* a = head;
        while(a!=NULL)
        {
            cout<<a->data<<",";
            a= a->next;
        }
        cout<<"\n";
    }

    ///Search for a single value
    int SearchDistincValue(int value)
    {
        int index=0;
        node* a = head;
        while(a!=NULL)
        {
            if(a->data==value)
                {
                    return index;
                }
            a= a->next;
            index++;
        }
        return -1;
    }

    ///search all possible occurrence
    int SearchAllValue(int value)
    {
int index=0;
        node* a = head;
        while(a!=NULL)
        {
            if(a->data==value)
                {
                    cout<<value<<" is found at index "<<index<<"\n";
                }
            a= a->next;
            index++;
        }
        return -1;
    }


    ///insert at any index
    void insert_any_index(int i,int value)
    {
        if(i<0||i>sz)
        {
            return;
        }
        if(i==0)
        {
            InserAtHead(value);
            return;
        }
        sz++;
        node *a=head;
        int current_i=0;
        while(current_i!=i-1)
        {
            a=a->next;
            current_i++;
        }
        node* newnode= CreateNewNode(value);
        newnode->next=a->next;
        a->next=newnode;
    }

    ///delete at heat
    void DeleteAtHead()
    {
        if(head==NULL)
            return;
            sz--;
        node*a=head;
        head=a->next;
        delete a;
    }
    ///delete at any index
    void DeleteAnyIndex(int i)
    {
        if(i<0||i>sz-1)
        {
            return;
        }
        if(i==0)
        {
            DeleteAtHead();
            return;
        }
        sz--;
        node*a=head;
        int curret_i=0;
        while(curret_i!=i-1)
        {
            a=a->next;
            curret_i++;
        }
        node *b=a->next;
        a->next=b->next;
        delete b;
    }
    ///insert  after a value
    void InsertAftherValue(int value, int data)
    {

        node *a=head;
        while(a!=NULL)
        {
           if(a->data==value)
           {
               break;//this means we found the value we were looking for
           }
           a=a->next;
        }
        if(a==NULL)
        {
            cout<<value<<" does not exist";
            return;
        }
        node *newnode = CreateNewNode(data);
        newnode->next=a->next;
        a->next=newnode;
        sz++;
    }
    void ReversePrint2(node*a)
    {
        if(a==NULL)
            return;
        ReversePrint2(a->next);
        cout<<a->data<<" ";

    }
void ReversePrint()
        {
            ReversePrint2(head);

        }
};

int main()
{

    LinkedList l;

    l.InserAtHead(10);
    l.InserAtHead(30);
    l.InserAtHead(20);
    l.InserAtHead(30);

    l.Traverse();

    cout<<"10 is found at "<<l.SearchDistincValue(10)<<"\n";

    cout<<"5 is found at "<<l.SearchDistincValue(5)<<"\n";
    cout<<"30 is found at "<<l.SearchDistincValue(30)<<"\n";

    l.SearchAllValue(30);
    l.insert_any_index(2,100);
    l.Traverse();

    l.DeleteAnyIndex(3);
    l.Traverse();
    cout<<"insert after a value"<<"\n";
    l.InsertAftherValue(30,101);
    l.Traverse();
    l.ReversePrint();

    return 0;
}
