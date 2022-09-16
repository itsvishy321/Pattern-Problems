//  for n=4

//  1234
//   234
//    34
//     4


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
        int space = i - 1;
        while (space--)
        {
            cout << " ";
        }

        while (j <= n - i + 1)
        {
            cout << 1 + i + j - 2;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}