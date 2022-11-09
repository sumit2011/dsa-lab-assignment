//print student result using switch case statement

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "enter the percentage of the student: ";
    cin >> a;
    int b = a / 10 + 1;
    switch (b)
    {
    case 10:
        cout << "your grade is: 'A+' " << endl;
        break;
    case 9:
        cout << "your grade is: 'A' " << endl;
        break;
    case 8:
        cout << "your grade is: 'B+' " << endl;
        break;
    case 7:
        cout << "your grade is: 'B' " << endl;
        break;
    case 6:
        cout << "your grade is: 'C+' " << endl;
        break;
    case 5:
        cout << "your grade is: 'C' " << endl;
        break;
    case 4:
        cout << "your grade is: 'F' " << endl;
        break;
    case 3:
        cout << "your grade is: 'F' " << endl;
        break;
    case 2:
        cout << "your grade is: 'F' " << endl;
        break;
    case 1:
        cout << "your grade is: 'F' " << endl;
        break;
    default:
        break;
    }
    return 0;
}