#include <iostream>
using namespace std;

int main()
{
    int a[2][2] = {1, 2, 3, 4};
    int b[2][2] = {5, 6, 7, 8};
    int c[2][2];
    // addition
    cout << "addition: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    // substraction
    cout << "substraction: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    // multiplication
    cout << "multiplication: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int sum = 0;
            for (int k = 0; k < 2; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            c[i][j] = sum;
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}