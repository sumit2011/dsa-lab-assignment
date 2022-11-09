#include <iostream>
using namespace std;

int main()
{
    cout << "how many elements do you want to enter:";
    int a;
    cin >> a;
    cout << "enter " << a << " elements: ";
    int arr[a];
    // input of array
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    // sorting of array
    int s;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (arr[i] < arr[j])
            {
                s = arr[i];
                arr[i] = arr[j];
                arr[j] = s;
            }
        }
    }
    // output of sorted array
    cout << "sorted array: ";
    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}