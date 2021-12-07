#define _CRT_SECURE_NO_DEPRECATE
#include <bits/stdc++.h>
#define ll long long
#define N 100000000
using namespace std;
#define endl '\n'
int arr[100] = {0};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n < 26)
    {
        cout << "NO";
        return 0;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            arr[tolower(s[i]) - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] == 0)
            {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";

    return 0;
}