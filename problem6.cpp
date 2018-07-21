#include <iostream>
using namespace std;

int main()
{
        int num;
        string str;
        cin >> num;
        for(int i = 0 ; i < num ; ++i)
        {
                cin >> str;
                cout << "Case " << i + 1 << ": ";
                char buffer;
                for(int j = 0 ; j < str.size() ; ++j)
                {
                        if (str[j] - 'A' >= 0 && str[j] - 'A' < 26)
                                buffer = str[j];
                        else
                        {
                                for(int k = 0 ; k < str[j] - '0' ; ++k)
                                        cout << buffer;
                        }
                }
                cout << endl;
        }
        return 0;
}
