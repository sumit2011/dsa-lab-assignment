#include <iostream>
using namespace std;

int main()
{
    cout << "enter any two numbers: ";
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << "the largest number is: " << a << endl;
    }
    else if (b > a)
    {
        cout << "the largest number is: " << b << endl;
    }
    else
        cout << "invalid input" << endl;
    return 0;
}