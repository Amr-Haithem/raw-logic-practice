#define _CRT_SECURE_NO_DEPRECATE
#include <bits/stdc++.h>
#define ll long long
#define N 100000000
using namespace std;
#define endl '\n'
int arr[100001];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int expectedValue = n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[x]++;
        if (x == expectedValue)
        {
            for (int j = expectedValue; j >= 1; j--)
            {
                if (arr[j]==0)
                {
                    break;
                }
                
                if (arr[j] == 1)
                {
                    arr[j] = 0;
                    expectedValue--;
                    cout << j << " ";
                }
            }
            cout << endl;
        }
        else
        {
            cout << endl;
        }
    }

    return 0;
}