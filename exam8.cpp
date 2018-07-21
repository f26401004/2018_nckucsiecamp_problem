#include<iostream>
using namespace std;
int main()
{
    for(int i = 0 ; i < 4 ; ++i)
    {
        char buffer;
        cin >> buffer;
        switch(buffer) 
        {
            case 'Q':
                cout << "C8763" << " ";
                break;
            case 'W':
                cout << "Explosion!!!" << " ";
                break;
            case 'E':
                cout << "Elephant" << " ";
                break;
            case 'R':
                cout << "Infinity Gaunlet" << " ";
                break;
        }
    }
    return 0;
}
