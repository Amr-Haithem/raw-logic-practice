#define _CRT_SECURE_NO_DEPRECATE
#include <bits/stdc++.h>
#define ll long long
#define N 100000000
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int l, r;
    int counter;
    for (int i = 0; i < n; i++)
    {
        counter = 0;
        cin >> l;
        cin >> r;

        for (int i = l; i <= r; i++)
        {
            string s = to_string(i);
            if (s[s.size() - 1] == '3' || s[s.size() - 1] == '2' || s[s.size() - 1] == '9')
            {
                counter++;
            }
        }

        cout << counter << endl;
    }
    return 0;
}