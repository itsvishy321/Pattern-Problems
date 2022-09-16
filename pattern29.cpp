// for n=5

/*

                *
            *
        *
    *
*

*/


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // for space
        for (int j = 1; j <= n - i; j++)
        {
            cout << "    ";
        }
        // for star
        cout << "*" << endl;
    }

    return 0;
}