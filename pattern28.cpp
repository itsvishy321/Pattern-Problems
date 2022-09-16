//  for n=5

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
        // printing space
        for (int j = 1; j < i; j++)
        {
            cout << "    ";
        }
        // for printing star
        cout << "*" << endl;

    }

    return 0;
}