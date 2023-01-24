#include<bits/stdc++.h>
using namespace std;

vector<int> merge_sort(vector<int>a)
{
    if(a.size()<=1)
        return a;

    //divide
    int mid = a.size()/2;
    vector<int>left;
    vector<int>right;

    for(int i=0;i<mid;i++)
    {
        left.push_back(a[i]);
    }

    for(int i=mid;i<a.size();i++)
    {
        right.push_back(a[i]);
    }

    //

    vector<int>left_sorted=merge_sort(left);
    vector<int>right_sorted=merge_sort(right);

    vector<int>a_sorted;
    int p1=0,p2=0;

    for(int i=0;i<a.size();i++)
    {
        if(p1==left_sorted.size())
        {
            a_sorted.push_back(right_sorted[p2]);
            p2++;
        }
        else if(p2==right_sorted.size())
        {
            a_sorted.push_back(left_sorted[p1]);
            p1++;
        }
        else if(left_sorted[p1]<right_sorted[p2])
        {
            a_sorted.push_back(left_sorted[p1]);
            p1++;
        }
        else
        {
            a_sorted.push_back(right_sorted[p2]);
            p2++;
        }
    }
    return a_sorted;

}

int main()
{
    vector<int>a= {5,3,7,1,8,9};
    vector<int>ans= merge_sort(a);
    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";
    return 0;
}
