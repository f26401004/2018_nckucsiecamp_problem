#include<iostream>
using namespace std;
int main()
{
    int total = 0;
    string str;
    cin >> str;
    for(int i = 0 ; i < 10 ; ++i)
    {
        if(str[i]=='s')
        	total++;
    }
    cout << total << endl;
    return 0;
}
