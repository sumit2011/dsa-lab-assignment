#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, t, s;
    cout << "how many elements do you want to enter in 1st and 2nd array respectively=";
    cin >> n1 >> n2;
    int a[n1], b[n2];

    // input of 1st array
    cout << "enter the " << n1 << " elements in 1st array=";
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    // sorting of 1st array
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            if (a[i] < a[j])
            {
                s = a[i];
                a[i] = a[j];
                a[j] = s;
            }
        }
    }
    // output of 1st sorted array
    cout << "first sorted array=";
    for (int i = 0; i < n1; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // input of 2nd array
    cout << "enter the " << n2 << " elements in 2nd array=";
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }
    // sorting of 2nd array
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (b[i] < b[j])
            {
                t = b[i];
                b[i] = b[j];
                b[j] = t;
            }
        }
    }
    // output of 2nd sorted array
    cout << "second sorted array=";
    for (int i = 0; i < n2; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;

    // output of common elements of 1st and 2nd array
    cout << "common elements are=";
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (a[i] == b[j])
            {
                cout << a[i] << " ";
            }
        }
    }
    return 0;
}