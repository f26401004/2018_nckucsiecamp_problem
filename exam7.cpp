#include<iostream>
using namespace std;
int main()
{
    int year;
    cout << "The year: ";
    cin >> year;
    cout << "Is it a leap year: ";
    if(year % 9 == 0 && year % 99 != 0 || year % 999 == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
