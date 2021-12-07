#define _CRT_SECURE_NO_DEPRECATE
#include <bits/stdc++.h>
#define ll long long
#define N 100000000
using namespace std;
#define endl '\n'
int arr[1000]={0};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    int heightestTower = 1;
    int counterOfAll = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[x-1]++;
    }
    for (int i = 0; i < 1000; i++)
    {
        if (arr[i] > heightestTower)
        {
            heightestTower = arr[i];
        }
        if (arr[i] > 0)
        {
            counterOfAll++;
        }
    }
    cout << heightestTower ;
    cout<<" ";
    cout<<counterOfAll;

    return 0;
}