// for n=4

// A     
// B    C
// C    D   E
// D    E    F   G   


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = i;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << char('A' + i + j - 2) << "    ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}