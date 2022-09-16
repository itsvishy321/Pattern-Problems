// for n=5

/*

        1
    2   3   2
3   4   5   4   3
    2   3   2
        1

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sp = n / 2;
    int st = 1;
    int rval = 1;

    for (int i = 1; i <= n; i++)
    {
        int cval = rval;
        for (int j = 0; j < sp; j++)
        {
            cout << "   ";
        }
        for (int j = 1; j <= st; j++)
        {
            cout << cval << "  ";
            if (j <= (st / 2))
            {
                cval++;
            }
            else
            {
                cval--;
            }

        }
        if (i <= (n / 2))
        {
            sp--;
            st += 2;
            rval++;
        }
        else
        {
            sp++;
            st -= 2;
            rval--;
        }

        cout << endl;
    }


    return 0;
}