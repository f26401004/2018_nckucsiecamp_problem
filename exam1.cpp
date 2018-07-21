#include <iostream>
using namespace std;
int main() 
{
    float height;
    float weight;
    float bmi;

    cout << "height: ";
    cin >> height;
    cout << "weight: ";
    cin >> weight;

    bmi = ((weight*weight) / ((height/100.0) * (height/100.0)));
    cout << "BMI: " << bmi << endl;

    return 0;
}
