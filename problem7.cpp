#include <iostream>
using namespace std;

int main()
{
        int num;
        cin >> num;
        while(num--)
        {
                int f, a;
                cin >> a >> f;
                for(int j = 0 ; j < f ; ++j)
                {
                        for(int i = 0 ; i <  a ; ++i)
                        {
                                for(int j = 0 ; j < i + 1 ; ++j)
                                        cout << i + 1;
                                cout << endl;
                        }
                        for(int i = a - 1 ; i > 0 ; --i)
                        {
                                for(int j = i - 1 ; j > -1 ; --j)
                                        cout << i;
                                cout << endl;
                        }
                        cout << endl;
                }
        }
        return 0;
}
