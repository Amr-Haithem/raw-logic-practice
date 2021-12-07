#define _CRT_SECURE_NO_DEPRECATE
#include <bits/stdc++.h>
#define ll long long
#define N 100000000
using namespace std;
#define endl '\n'
int cards[1001];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> cards[i];
    }

    int i = 0;
    int j = n - 1;
    int x = 0;
    int y = 0;
    bool turnOfX = true;

    while (i <= j)
    {
        if (cards[i] >= cards[j])
        {

            if (turnOfX)
            {
                x += cards[i];
                turnOfX=!turnOfX;
            }
            else
            {
                y += cards[i];
                turnOfX=!turnOfX;
            }
            i++;
        }
        else
        {
            if (turnOfX)
            {
                x += cards[j];
                turnOfX=!turnOfX;
            }
            else
            {
                y += cards[j];
                turnOfX=!turnOfX;
            }
            j--;
        }
    }
    cout << x << " " << y;

    return 0;
}
