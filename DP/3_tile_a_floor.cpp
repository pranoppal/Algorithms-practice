#include <iostream>
using namespace std;

int main()
{
    long c[70];
    int t, w;
    cin >> t;
    c[0] = 0;
    c[1] = 1;
    for (int i = 2; i < 70; i++)
    {
        c[i] = c[i - 1] + c[i - 2];
        cout << c[i] << "\t";
    }
    while (t--)
    {
        cin >> w;
        cout << c[w++] << "\n";
    }
    return 0;
}