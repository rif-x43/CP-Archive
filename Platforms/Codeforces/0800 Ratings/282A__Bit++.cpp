#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, x = 0, n;
    string input;

    cin >> n;

    if (n >= 1 && n <= 150)
    {
        for(i=1; i<= n; i++)
        {
            cin >> input;
            if (input == "X++")
            {
                x++;
            }
            if (input == "++X")
            {
                ++x;
            }
            if (input == "X--")
            {
                x--;
            }
            if (input == "--X")
            {
                --x;
            }
        }

        cout << x;
    }

}