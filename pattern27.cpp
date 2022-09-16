// for n(row)=5

// pttern valid when n is odd


/*

*  *  *     *  *  *
*  *           *  *
*                 *
*  *           *  *
*  *  *     *  *  *

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int space = 1;
    int star = (n / 2) + 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= star; j++)
        {
            cout << "*  ";
        }
        for (int j = 1; j <= space; j++)
        {
            cout << "   ";
        }
        for (int j = 1; j <= star; j++)
        {
            cout << "*  ";
        }
        cout << endl;
        if (i < (n / 2) + 1)
        {
            space += 2;
            star--;
        }

        else
        {
            space -= 2;
            star++;
        }
    }

    return 0;
}