#define _CRT_SECURE_NO_DEPRECATE
#include <bits/stdc++.h>
#define ll long long
#define N 100000000
using namespace std;
#define endl '\n'
int entered[100001];
int exitedAtWhatTime[100001];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    int mx=0;
    int counter=0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> entered[i];
    }
    
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        exitedAtWhatTime[x] = i;
    }
    for (int i = 1; i < n; i++)
    {
        if (mx<exitedAtWhatTime[entered[i]])
        {
            mx=exitedAtWhatTime[entered[i]];
            
        }else
        {
            counter++;
        }
        
    }
    cout<<counter;

    return 0;
}