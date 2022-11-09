#include <iostream>
using namespace std;

int main()
{
    cout << "how many elements do you want to enter:";
    int a;
    cin >> a;
    cout << "enter " << a << " elements: ";
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    int num = 0;
    for (int i = 0; i < a; i++)
    {
        if (num < arr[i])
        {
            num = arr[i];
        }
    }

    cout << "the largest number is: " << num;
    return 0;
}