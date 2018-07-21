#include <iostream>
using namespace std;

int main()
{
        int num;
        cin >> num;
        for(int i = 0 ; i < num ; ++i)
        {
                int a, b;
                cin >> a >> b;
                if (a > b)
                        cout << ">" << endl;
                else if (a == b)
                        cout << "=" << endl;
                else
                        cout << "<" << endl;
        }
        return 0;
}
