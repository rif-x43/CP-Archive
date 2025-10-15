#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(long long n)
{
    if (n < 0)
        return false;

    if (n == 0)
        return true;

    long long left = 1, right = min(n, (long long)1e9), mid, square;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        square = mid * mid;

        if (n == square)
            return true;
        if (square < n)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return false;
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test;
    cin >> test;

    while (test--)
    {
        int buckets;
        cin >> buckets;

        long long total = 0;

        for (long long i = 0; i < buckets; i++)
        {
            long long input;
            cin >> input;
            total += input;
        }

        cout << ((isPerfectSquare(total)) ? "YES" : "NO") << endl;
    }

    return 0;
}