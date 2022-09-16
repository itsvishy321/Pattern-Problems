// for n=3

// A   B   C
// D   E   F
// G   H   I


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;
    int count = 0;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << char('A' + count++) << "    ";
            j++;
        }
        cout << endl;
        i++;

    }


    return 0;
}