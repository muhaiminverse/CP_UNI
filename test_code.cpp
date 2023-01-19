#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=4,c=0;
    long long int a[15];
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+2);

    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
            return 0;

}

/*
7 2 1 7

7
5 3 1 4 2 6 1

7
3 5 1 4 2 6 1
*/
/*
7 7 7 7
3
1 7 3 3
1
99953 99953 99953 99953
*/
