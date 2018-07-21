#include<iostream>
using namespace std;
int main()
{
    cout << "black: ";
    int total = 0;
    for(int i = 0 ; i < 6 ; ++i)
    {
        int buffer;
        cin >> buffer;
        if (buffer > 1000)
            total++;
    }
    cout << "accept: " << total << endl;
    return 0;
}
