#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the number of row/column of square matrix: ";
    cin >> n;
    int a[n][n];
    cout << "enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "your matrix is: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // transpose
    cout << "transpose of the matrix: " << endl;
    int b[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[i][j] = a[j][i];
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    // multiplication
    cout << "multiplication of matrix and it's transpose: " << endl;
    int c[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int sum = 0;
            for (int k = 0; k < n; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            c[i][j] = sum;
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    // orthogonal check
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (a[i][j] == 1)
                {
                    count++;
                }
            }
            else if (a[i][j] == 0)
            {
                count++;
            }
        }
    }
    cout << endl;
    if (count == 2 * n)
    {
        cout << "***matrix is orthogonal***" << endl;
    }
    else
        cout << "***matrix is not orthogonal***" << endl;
    return 0;
}
