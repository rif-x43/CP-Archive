#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, p, v, t, res, count = 0;

    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cin >> p >> v >> t;
        if (p == 1 || p == 0 && v == 1 || v == 0 && t == 1 || t == 0)
        {
            res = p + v + t;
            if (res >= 2)
            {
                count++;
            }
        }
    }

    cout << count;
}