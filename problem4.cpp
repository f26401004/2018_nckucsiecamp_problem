#include <iostream>
using namespace std;

int main()
{
        int num;
        cin >> num;
        int error = 0;
        while(num--)
        {
                string str;
                cin >> str;
                if (str[0] == 'o')
                {
                        if (str[1] != 'n')
                                error++;
                        if (str[2] != 'e')
                                error++;
                }
                else if (str[0] == 't' && str.size() == 3)
                {
                        if (str[1] != 'w')
                                error++;
                        if (str[2] != 'o')
                                error++;
                }
                else if (str[0] == 't' && str.size() == 5)
                {
                        if (str[1] != 'h')
                                error++;
                        if (str[2] != 'r')
                                error++;
                        if (str[3] != 'e')
                                error++;
                        if (str[4] != 'e')
                                error++;
                }
                cout << error << endl;
        }
        return 0;
}
