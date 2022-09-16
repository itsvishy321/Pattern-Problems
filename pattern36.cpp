//  for n = 4

/*

1                       1
1   2               2   1
1   2   3       3   2   1
1   2   3   4   3   2   1

*/

// row = n
// coloumn = 2n - 1
// spaces = 2n - 3

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int space = (2 * n) - 3;
    int st = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= st; j++)
        {
            cout << j << "  ";
        }
        for (int j = 1; j <= space; j++)
        {
            cout << "   ";
        }
        if (i == n)
        {
            st--;
        }
        for (int j = 1; j <= st; j++)
        {
            if (i == n)
            {
                cout << i - j << "  ";
            }
            else
            {
                cout << i - j + 1 << "  ";
            }
        }
        st++;
        space -= 2;
        cout << endl;

    }

    return 0;
}