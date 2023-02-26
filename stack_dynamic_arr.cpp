#include<bits/stdc++.h>
using namespace std;
//stack using static array
const int max_sz=500;
class Stack
{
public:
    int *a;
    int stack_sz;
    int array_cap;

    Stack()
    {
        //initially stack size is 0 since there is no element yet
        a=new int [1];
        array_cap=1;
        stack_sz=0;
    }
    //makes the array capacity multiplied by 2
    void increase_size()
    {
        int *tmp;
        tmp = new int[array_cap*2];
        for(int i=0;i<array_cap;i++)
            tmp[i] = a[i];
        swap(a,tmp);
        delete []tmp;
        array_cap = array_cap*2;
    }

    //add an element in the stack O(1)
    void push(int val)
    {
        if(stack_sz+1 > array_cap)
        {
           increase_size();
        }
        stack_sz++;
        a[stack_sz-1]=val;
    }
    //delete the last topmost element from the stack O(1)
    void pop(int val)
    {
        if(stack_sz==0)
        {
            cout<<"stack is empty!"<<endl;
            return ;

        }
        a[stack_sz-1]=0;
        stack_sz--;
    }
    //returns the top element
    int top()
    {
        if(stack_sz==0)
        {
            cout<<"stack top is empty!"<<endl;
            return -1;
        }
        return a[stack_sz-1];
    }

};

int main()
{
    Stack s;
    s.push(4);
    cout<<s.top()<<endl;
    s.push(7);
    cout<<s.top()<<endl;
    s.push(7);
    cout<<s.top()<<endl;
    s.push(12);
    cout<<s.top()<<endl;
    s.top();
    cout<<s.top()<<endl;

    return 0;
}

