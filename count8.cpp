#include<bits/stdc++.h>
using namespace std;

int count8(int n)
{
    if(n==0)
    {
        return 0;
    }
    int c;
    int lastnumber=n%10;
    int updatenumber=n/10;
    if(lastnumber==8)
        c++;
    count8(updatenumber);
    return c;


}

int factorial(int n)
{
if(n == 0 || n == 1) return 1;
return n * factorial(n-1);

}

int sum(int n,int i)
{

if(i<n) return 0;
return sum(sum+i);

}
int main()
{
    int cnt = factorial(5);
    cout<<cnt;
}
