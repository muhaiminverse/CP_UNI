#include<bits/stdc++.h>
using namespace std;


class node{
public:
    int data;
    node * next;
    node * prv;

};

class DoublyL_List{
public:
    node *head;
    int sz;
    //initialize head and size
    DoublyL_List()
    {
        head=NULL;
        sz=0;
    }
///create a new node with the given data and returns it
    node * CreateNewNode(int data)
    {
        node*newnode=new node;
        newnode->data = data;
        newnode->next= NULL;
        newnode->prv= NULL;
        return newnode;

    }
    void insertAtHead(int data)
    {
        node *newnode = CreateNewNode(data);
        if(head==NULL)
        {
            //this means there was not anything in this doubly list
            head = newnode;
            return;
        }
        node * a=head;
        newnode->next= a;
        newnode->head;
    }
};



int main()
{

    return 0;
}
