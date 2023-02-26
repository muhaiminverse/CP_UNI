#include<bits/stdc++.h>
using namespace std;
void print(list<int>l)
{

    //list<int>::iterator a=l.begin();
    auto a = l.begin();
    while(a!=l.end())
    {
        cout<<*a<<" ";
        a++;
    }
    cout<<endl;

}

void Insert(list<int>&l,int i,int val)
{
    auto it = l.begin();
    advance(it,i);
    l.insert(it,val);
}

void Delete(list<int>&l,int i)
{
    auto it = l.begin();
    advance(it,i);
    l.erase(it);
}
int main()
{
    list<int>l;
    //O(1)
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);
    print(l);

    l.push_back(40);
    l.push_back(50);
    print(l);
    l.pop_back();
    l.pop_front();
    print(l);

    //insert at any position
    Insert(l,2,100);
    print(l);
    Delete (l,2);
    print(l);

    cout<<l.size()<<endl;
    return 0;
}
