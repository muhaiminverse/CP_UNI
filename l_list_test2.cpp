#include<bits/stdc++.h>
using namespace std;

class node{
    public:

int data;
node * next;
};

class L_list{
public:
    node *head;
    int sz=0;
    L_list()
    {
        head==NULL;
        sz++;
    }

    node *createNode(int value)
    {
        sz++;
        node *newnode =new node;
        newnode->data=value;
        newnode->next=NULL;
        return newnode;
    }
    void printNode()
    {
        node *a=head;

        while(a!=NULL)
        {
            cout<<a->data;
            a=a->next;
        }

    }


};


int main()
{
    L_list a;
    a.createNode(20);
    a.createNode(20);
    printNode();
    return 0;
}
