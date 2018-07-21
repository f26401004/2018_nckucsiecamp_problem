#include<iostream>
using namespace std;
int main()
{
    int n, h, a, t;
    cin >> h >> a >> t;
    if(t>=1)
        n = h*a/t;
    else
        n = h*a;
    if(n > 50)
        cout << "Go fishing : Yes";
    else
        cout << "Go fishing : No";
}
