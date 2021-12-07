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

    for (int i = 0; i < n; i++)
    {

        ll x, y;
        cin >> x >> y;
        ll a, b;
        cin >> a >> b;
        ll ans1 = (max(x, y) - min(x, y)) * a + min(x, y) * b;
        ll ans3 = min(x, y) * a + max(x, y) * a;
        ll ans2 = (max(x, y) - min(x, y)) * a + max(x, y) * b;
        cout << min(min(ans1, ans3), ans2) << endl;
    }
    return 0;
}