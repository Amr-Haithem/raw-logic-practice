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

    for (int j = 0; j < n; j++)
    {
        int x;
        cin >> x;
        int arr[10001] = {0};
        int freqOfOriginal[11] = {0};
        int freqOfFreq[10001] = {0};
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < x; i++)
        {
            freqOfOriginal[arr[i]]++;
        }
        for (int i = 1; i < 11; i++)
        {
            freqOfFreq[freqOfOriginal[i]]++;
        }
        int biggest = 1;
        for (int i = 1; i <= x; i++)
        {
            if (freqOfFreq[i] > freqOfFreq[biggest])
            {
                biggest = i;
            }
        }
        cout << biggest << endl;
    }

    return 0;
}
