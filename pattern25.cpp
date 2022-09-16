// for n=5

//  1234554321
//  1234**4321
//  123****321
//  12******21
//  1********1

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
        // printing first triangle
        while (j <= n - i + 1)
        {
            cout << j;
            j++;
        }
        // printing * triangle
        j = 1;
        while (j < i)
        {
            cout << "*";
            j++;
        }
        j = 1;
        while (j < i)
        {
            cout << "*";
            j++;
        }
        j = 1;
        while (j <= n - i + 1)
        {
            cout << n - i - j + 2;
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}