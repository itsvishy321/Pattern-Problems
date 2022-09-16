// for n = 5
// only valid for odd input

/*

        *
        *   *
*   *   *   *   *
        *   *
        *

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sp = n / 2;  //space
    int st = 1;    //star
    for (int i = 1; i <= n; i++)
    {
        if (i == (n / 2) + 1)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << "*  ";
            }
        }
        else
        {
            for (int j = 1; j <= sp; j++)
            {
                cout << "   ";
            }
            for (int j = 1; j <= st; j++)
            {
                cout << "*  ";
            }
        }

        if (i <= n / 2)
        {
            st++;
        }
        else
        {
            st--;
        }
        cout << "   " << endl;


    }

    return 0;
}