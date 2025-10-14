#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tests;
    cin >> tests;
    string word;

    while (tests--)
    {
        cin >> word;
        int size = word.length() - 2;
        if (size > 8)
            cout << word[0] << size << word[size + 1] << endl;
        else
            cout << word << endl;
    }
}