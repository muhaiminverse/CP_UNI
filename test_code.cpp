#include <iostream>
using namespace std;
template <typename T>
T Sum(T p, T q)
{
    return p+q;
}
int main ()
{
    int x = 55, y = 60, result;

    result = Sum<int>(x, y);

    cout << result << endl;
    return 0;
}
