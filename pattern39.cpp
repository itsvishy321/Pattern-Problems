//  for n=5
// only for odd input

/*

*   *   *       *
        *       *
*   *   *   *   *
*       *
*       *   *   *

*/

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
            if (i == 1 && (j <= (n / 2) + 1 || j == n))
            {
                cout << "*  ";
            }
            else if (i <= n / 2 && (j == (n / 2) + 1 || j == n))
            {
                cout << "*  ";
            }
            else if (i == (n / 2) + 1)
            {
                cout << "*  ";
            }
            else if (i > (n / 2) + 1 && (j == 1 || j == (n / 2) + 1))
            {
                cout << "*  ";
            }
            else if (i == n && (j == 1 || j >= (n / 2) + 1))
            {
                cout << "*  ";
            }
            else {
                cout << "   ";
            }
        }
        cout << endl;

    }


    return 0;
}