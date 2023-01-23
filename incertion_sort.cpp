#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int>a= {13,7,4,1,2,23};

    for(int j=1; j<a.size(); j++)
    {
        int i=j;
        while(i>=1)
            if(a[i-1]>a[i])
            {
                swap(a[i-1],a[i]);
                i--;
            }
            else
                break;
    }

    for(int j=0; j<a.size(); j++)
        cout<<a[j]<<" ";

    return 0;
}
