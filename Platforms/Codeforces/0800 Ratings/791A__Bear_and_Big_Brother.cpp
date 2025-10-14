#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b, year = 0;
    cin >> a >> b;

    while (a <= b)
    {
        a = 3 * a;
        b = 2 * b;
        year++;
    }

    cout << year << endl;

    return 0;
}