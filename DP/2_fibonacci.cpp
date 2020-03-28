#include <iostream>
using namespace std;
int getFib(int n)
{
    int fib[n + 2];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < n + 2; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        cout << fib[i] << "\n";
    }
    return fib[n];
}
int main()
{
    int value;
    cin >> value;
    cout << getFib(value);
    return 0;
}