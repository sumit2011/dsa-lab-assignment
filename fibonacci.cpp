#include <iostream>
using namespace std;

int fib(int target, int term1, int term2);

int main()
{
    cout << fib(20, 0, 1);
    return 0;
}

int fib(int target, int term1, int term2)
{
    cout << term1 << " ";
    if (target == 0)
    {
        return term1 + term2;
    }
    else
    {
        fib(target - 1, term2, term1 + term2);
    }
    return 0;
}