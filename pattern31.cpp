// for n=5

/*

        *
    *       *
*               *
    *       *
        *

*/


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int inspace = -1;
    int outspace = n / 2;
    for (int i = 1; i <= n; i++)
    {
        // for outer space
        for (int j = 1; j <= outspace; j++)
        {
            cout << "    ";
        }
        // for first star
        cout << "*   ";
        // for inner space
        for (int j = 1; j <= inspace; j++)
        {
            cout << "    ";
        }
        // for second star
        if (i > 1 && i < n)
        {
            cout << "*";
        }
        cout << endl;
        if (i <= n / 2)
        {
            outspace--;
            inspace += 2;
        }
        else
        {
            outspace++;
            inspace -= 2;
        }
    }


    return 0;
}