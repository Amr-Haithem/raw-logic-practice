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
    for (int i = 0; i < n; i++)
    {
        string s;
        int k;
        cin>>k;
        cin>>s;
        string s2;
        cin>>s2;
        int c1=0;
        int c2=0;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j]=='1')c1++;
            if (s2[j]=='1')c2++;
            
            
            
        }
        if (c1==c2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
        

    }
    
    
    return 0;
}