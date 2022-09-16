// for n = 4

//     1
//    23
//   456
//  78910

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    int count = 1;
    while (i <= n)
    {
        int j = 1;
        int space = n - i;
        while (space--)
        {
            cout << " ";
        }

        while (j <= i)
        {
            cout << count++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}