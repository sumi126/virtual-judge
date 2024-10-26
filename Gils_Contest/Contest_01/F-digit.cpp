#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m = 0;
    cin >> n;
    if (n == 0)
    {
        cout << 1 << endl;
    }
    else
    {
        while (n)
        {
            n /= 10;
            m++;
        }
        cout << m << endl;
    }
    return 0;
}