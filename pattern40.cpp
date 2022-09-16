//  for n=5
// onlt for odd input


/*

*               *
*               *
*       *       *
*   *       *   *
*               *

*/
// LOGIC: PRINT STAR WHEN j = 1 OR j = n OR AT DIAGNAL POSITION
// WHERE i=j    

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j == n)
            {
                cout << "*  ";
            }
            else if (i > n / 2 && (i + j == n + 1 || i == j))
            {
                cout << "*  ";
            }

            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }

    return 0;
}