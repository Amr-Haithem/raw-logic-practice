#define _CRT_SECURE_NO_DEPRECATE
#include <bits/stdc++.h>
#define ll long long
#define N 100000000
using namespace std;
#define endl '\n'
int sequence[2001];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int d;
    cin >> d;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> sequence[i];
    }

    for (int i = 1; i < n; i++)
    {
        if (sequence[i] <= sequence[i - 1])
        {

            int numOfD = (-1 * (sequence[i] - sequence[i - 1]) / d) + 1;

            cnt += numOfD;

            sequence[i] += numOfD * d;

            
        }
    }
    cout << cnt;

    return 0;
}
