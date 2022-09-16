// for n = 4

// 1
// 2   3
// 3   4   5
// 4   5   6   7


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        // count = i;
        int j = 0;
        while (j < i)
        {
            cout << i + j << "    ";
            j++;
        }
        cout << endl;
        i++;

    }

    return 0;
}