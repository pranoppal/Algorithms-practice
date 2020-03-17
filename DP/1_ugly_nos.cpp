#include <bits/stdc++.h>
using namespace std;
int getUglyNo(int n)
{
    int arr[n];
    int i2 = 0, i3 = 0, i5 = 0, next5 = 5, next2 = 2, next3 = 3, next = 1;
    arr[0] = 1;
    for (int i = 1; i < n; i++)
    {
        next = min(next2, min(next3, next5));
        arr[i] = next;
        if (next == next2)
        {
            i2++;
            next2 = arr[i2] * 2;
        }
        if (next == next3)
        {
            i3++;
            next3 = arr[i3] * 3;
        }
        if (next == next5)
        {
            i5++;
            next5 = arr[i5] * 5;
        }
    }
    return next;
}
int main()
{
    int n;
    cin >> n;
    cout << getUglyNo(n);
    return 0;
}