//  for n=3

// A
// B   B
// C   C   C


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
        while (j <= i)
        {
            cout << char('A' + i - 1) << "      ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}