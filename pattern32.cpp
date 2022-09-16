// for n=4

/*

FIBONACCI SERIES

0
1   1
2   3   5
8   13  21  34

*/


#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int i = 1;
    int first_term = 0;
    int second_term = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << first_term << "   ";
            int temp;
            temp = second_term;
            second_term += first_term;
            first_term = temp;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}