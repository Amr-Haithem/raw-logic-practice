#define _CRT_SECURE_NO_DEPRECATE
#include <bits/stdc++.h>
#define ll long long
#define N 100000000
using namespace std;
#define endl '\n'
char grid[101][101];
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    int withSwap = 0;
    for (int i = 0; i < n; i++)
    {
        if (i + 1 != n && s[i] == 'b' && s[i + 1] == 'b')
        {

            cnt++;
            withSwap++;

            s[i + 1] = 'r';
        }
        else if (i + 1 != n && s[i] == 'r' && s[i + 1] == 'r')
        {
            cnt++;
            withSwap--;
            s[i + 1] = 'b';
        }
    }
    cout << cnt + abs(withSwap + cnt);

    return 0;
}