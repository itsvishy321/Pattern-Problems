// for n=4

// A   A   A   A
// B   B   B   B
// C   C   C   C
// D   D   D   D

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << char('A' + i - 1) << "      ";
            j++;
        }
        cout << endl;
        i++;
    }


    return 0;
}