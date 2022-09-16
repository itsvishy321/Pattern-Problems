// for n=4

//  ****
//   ***
//    **
//     *

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = n;
    while (i >= 1)
    {
        int j = 1;
        int space = n - i;

        // printing spaces
        while (space--)
        {
            cout << " ";
        }

        // printing *
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i--;


    }

    return 0;
}