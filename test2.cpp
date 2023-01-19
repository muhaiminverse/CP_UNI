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
    int getsize()
    {
        sz;
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
};

int main()
{

    LinkedList l;

    l.InserAtHead(10);
    l.InserAtHead(30);
    l.InserAtHead(20);
    l.InserAtHead(30);

    l.Traverse();


    l.insert_any_index(2,100);
    l.Traverse();

    l.DeleteAnyIndex(3);
    l.Traverse();

    return 0;
}

