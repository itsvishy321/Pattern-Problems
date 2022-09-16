// for n=4

//     1
//    121
//   12321
//  1234321

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int space = n - i;
        // printing spaces
        while (space--)
        {
            cout << " ";
        }
        // printing pattern
        while (j <= i)
        {
            cout << j;
            j++;
        }
        j -= 2;
        while (j)
        {
            cout << j;
            j--;
        }
        cout << endl;
        i++;
    }

    return 0;
}