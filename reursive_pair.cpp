#include<bits/stdc++.h>
using namespace std;

int countPairs(string b,int i)
{
    if(i<=b.size()-1)
        return 0;

    int cnt=0;

    if(b[i]==b[i+1] || b[i]==b[i+2])
        cnt=1+countPairs(b,i++);

    return cnt+countPairs(b,i++);;
}

int main(){

string a;
int i=0;
cin>>a;

int cnt = countPairs(a,i);
cout<<cnt;

/*
int cnt=0;
for(int i=0;i<a.size()-1;i++)
{
    if(a[i]==a[i+1] || a[i]==a[i+2])
        cnt++;
}

cout<<cnt;*/


return 0;
}
