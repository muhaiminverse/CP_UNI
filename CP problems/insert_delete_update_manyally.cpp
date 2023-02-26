#include<bits/stdc++.h>
using namespace std;

int delete_a(int a,int n){}
int insert_a(int a,int n){
for(i=0;i<n-1;i++)
}
int update_a(int a,int n){}

void print_a(int a, int n)
{
    for(i=0;i<n;i++)
        cout<<a[i];
}
int main()
{
    int n;
    cin>>n;
    int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

    int after_insertion[n]=insert_a(a,n);
    print_a(after_insertion,n);
    int after_delete[n]=delete_a(a,n);
    int after_update[n]=update_a(a,n);
}
