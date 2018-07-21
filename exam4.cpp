#include<iostream>
using namespace std;
float compute(int x, int y, int z) 
{
    return 0.5 * x + 0.25 * y + 0.25 * z;
}
int main()
{
    int x1, y1, z1;
    int x2, y2, z2;
    cin >> x1 >> y1 >> z1;
    cin >> x2 >> y2 >> z2;
    float tea = compute(x1, y1, z1);
    float mermaid = compute(x2, y2, z2);
    if (tea > mermaid)
            cout << "winner: Tea Bag Fish " << tea << endl;
    else if (tea < mermaid)
        cout << "winner: Mermaid " << mermaid << endl;
    else
        cout <<　"tie" << endl;
    return 0;
}
