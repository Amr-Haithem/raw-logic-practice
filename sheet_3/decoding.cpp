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
    string s;
    cin >> s;
    string news = "";
    if (s.size() % 2 == 1)
    {
        int i = n - 2;
        while (i > 0)
        {
            news += s[i];

            i -= 2;
        }
        news += s[0];

        i = 2;
        while (i < n)
        {
            news += s[i];
            i += 2;
        }
    }
    else
    {
        
        int i = n - 2;
        while (i > 0)
        {
            news += s[i];

            i -= 2;
        }
        news += s[0];

        i = 1;
        while (i < n)
        {
            news += s[i];
            i += 2;
        }
        
    }
    

    cout<<news;

    return 0;
}
