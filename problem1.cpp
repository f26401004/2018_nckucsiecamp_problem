#include <iostream>
using namespace std;

int main()
{
        int C;
        cin >> C;
        while(C--)
        {
                int num;
                cin >> num;
                int score[num];
                float total;
                for(int i = 0 ; i < num ; ++i)
                {
                        cin >> score[i];
                        total += score[i];
                }
                float average = total / num;
                float count = 0;
                for(int i = 0 ; i < num ; ++i)
                        if (average < score[i])
                                count++;
                cout << count / num * 100 << "%" << endl;
        }
        return 0;
}
