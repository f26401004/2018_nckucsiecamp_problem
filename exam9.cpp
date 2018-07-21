#include <iostream>
using namespace std;

int main() 
{
        int f1, g1;
        cout << "f(1):";
        cin >> f1;
        cout << "g(1):";
        cin >> g1;
        for(int i = 0 ; i < 4 ; ++i) 
        {
                f1 = f1 + i + 2;
                g1 = f1 + g1;
        }
        cout << "f(5) = " << f1 << endl;
        cout << "g(5) = " << g1 << endl;
        return 0;
}
