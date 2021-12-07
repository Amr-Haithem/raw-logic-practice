#define _CRT_SECURE_NO_DEPRECATE
#include <bits/stdc++.h>
#include <iostream>
#define ll long long
#define N 100000000
using namespace std;
#define endl '\n'
int arr[26];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool yes = false;
    if (n==1)
    {
        cout<<"Yes";
        return 0;
    }
    
    for (int i = 0; i < n; i++)
    {
        arr[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] >= 2)
        {
            yes = true;
            break;
        }
    }
    if (yes)
    {
        cout << "Yes"<<endl;
    }
    else
    {
        cout << "No"<<endl;
    }

    return 0;
}
