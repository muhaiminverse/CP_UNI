#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0,n=4;
    long long int a[4];
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0; i<n; i++)
        if(a[i]==a[i+1])
            c++;

    cout<<c<<endl;
    return 0;

}
