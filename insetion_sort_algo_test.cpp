#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int>a= {13,7,4,1,2,23};

    for(int i=1; i<a.size(); i++)
    {
        int idx=i;
        while(i>=1)
        {
            if(a[i-1]<a[i])
            {
                swap(a[i-1],a[i]);
                i--;
            }
            else
                break;
        }

    }

    for(int j=0; j<a.size(); j++)
        cout<<a[j]<<" ";

    return 0;
}

