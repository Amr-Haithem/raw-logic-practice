#define _CRT_SECURE_NO_DEPRECATE
#include <bits/stdc++.h>
#define ll long long
#define N 100000000
using namespace std;
#define endl '\n'
int arr[100000];

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int counter=0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        if (i!=0)
        {
            arr[i]=arr[i-1]+x;
        }
        else arr[0]=x;
        
    }
    for (int i = 0; i < n; i++)
    {
        if (i!=n-1 && arr[i]==arr[n-1]-arr[i])
        {
            counter++;
        }
        
        
    }
    cout<<counter;
    
    

    return 0;

}