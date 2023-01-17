#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;

};
class LinkedList{
public:
    node *head;

    LinkedList(){
        head==NULL;
    }
    node* CreateNewNode(int value)
    {
        node * newNode = new node;
        newNode->data = value;
        newNode->next=NULL;
        return newNode;
    }

    void InsertAtHead(int value)
    {
        node *a= CreateNewNode(value);
        if(head==NULL)
    {
        head=a;
        return;
    }
    a->next=head;
    head=a;
    }

    void Traverse()
    {
        node *a=head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->next;
        }
        cout<<"\n";
        }

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


};
int main()
{
    LinkedList a;
    a.InsertAtHead(20);
    a.InsertAtHead(60);
    a.InsertAtHead(130);
    a.InsertAtHead(510);
    a.InsertAtHead(76);
    a.InsertAtHead(10);
    a.Traverse();
    cout<<"10 is found at "<<a.SearchDistincValue(10)<<"\n";
}

