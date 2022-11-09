#include <iostream>
using namespace std;

void even_odd(int data)
{
    if (data % 2 == 0)
    {
        cout << "the given number is even";
    }
    else
        cout << "the given number is odd";
}

int main()
{
    int a;
    cout << "enter any number: ";
    cin >> a;
    even_odd(a);
}