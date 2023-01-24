#include<bits/stdc++.h>
using namespace std;

vector<int> quick_sort(vector<int>a)
{
    if(a.size()<=1)
        return a;

    int pivot= a.size()-1;

    vector<int>left,right;

    for(int i=0;i<a.size();i++)
    {
        if(i==pivot)
            continue;
        else if(a[i]<=a[pivot])
        {
            left.push_back(a[i]);
        }
        else
            right.push_back(a[i]);
    }

    vector<int>left_sorted=quick_sort(left);
    vector<int>right_sorted=quick_sort(right);
    vector<int>sorted_a;

    for(int i=0;i<left_sorted.size();i++)
    {
        sorted_a.push_back(left_sorted[i]);
    }

    sorted_a.push_back(a[pivot]);

    for(int i=0;i<right_sorted.size();i++)
    {
        sorted_a.push_back(right_sorted[i]);
    }
    return sorted_a;
}

int main()
{
    vector<int>a= {5,3,7,1,8,9};
    vector<int>ans= quick_sort(a);
    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";
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
