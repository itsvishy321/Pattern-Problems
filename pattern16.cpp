//  for n
// D
// C    D
// B    C   D
// A    B   C   D


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = i;
        while (j >= 1)
        {
            cout << char('A' + n - j) << "     ";
            j--;
        }
        cout << endl;
        i++;
    }

    return 0;
}