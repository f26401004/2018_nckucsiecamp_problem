#include <iostream>
using namespace std;

int main()
{
        int a, b;
        int num;
        cin >> num;
        for(int i = 0 ; i < num ; ++i)
        {
                int total = 0;
                cin >> a >> b;
                for(int j = a ; j <= b ; ++j)
                        if (j % 2 == 1)
                                total += j;
                cout << total << endl;
        }
        return 0;
}
