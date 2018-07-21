#include <iostream>
using namespace std;

int main() {
        int num;
        cout << "num: ";
        cin >> num;
        for(int i = 0 ; i < 5 ; ++i)
        {
                for(int j = 0 ; j < 5 - i - 1 ; ++j)
                        cout << " ";
                for(int j = 0 ; j < num ; ++j)
                {
                        if (j > 0 && j < num)
                        {
                                for(int k = 5 - i - 1 ; k > 0 ; --k)
                                        cout << "  ";
                        }
                        for(int k = 0 ; k < i + 1 ; ++k)
                                cout << "* ";
                }
                cout << endl;
        }
        return 0;
}
