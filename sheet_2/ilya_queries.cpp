#define _CRT_SECURE_NO_DEPRECATE
#include <bits/stdc++.h>
//#include<ofstream>
//#include<ifstream>
//#include<ctime>
#define ll long long
#define N 100000000
//#include <cstdlib>
using namespace std;
#define endl '\n'
int arr[100000];
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    if (s[0] == s[1])
    {
        arr[0] = 1;
    }

    for (int i = 1; i < s.size(); i++)
    {
        if (i + 1 < s.size() && s[i] == s[i + 1])
        {
            arr[i] = 1 + arr[i - 1];
        }
        else
        {
            
            arr[i] =  arr[i - 1];
        }
        
    }
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int l;
        int r;
        cin >> l;
        cin >> r;
        l--;
        r--;
        if (l - 1 >= 0)
        {
            cout << arr[r-1] - arr[l - 1] << endl;
        }
        else
        {
            cout << arr[r-1] << endl;
        }
    }

    return 0;
}