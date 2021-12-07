#define _CRT_SECURE_NO_DEPRECATE
#include <bits/stdc++.h>
#define ll long long
#define N 100000000
using namespace std;
#define endl '\n'
int arr[150000];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int numOfLogs;
    cin >> numOfLogs;
    int widthOfPiano;
    cin >> widthOfPiano;
    int min, indexToBeShown;
    for (int i = 0; i < numOfLogs; i++)
    {
        int x;
        cin >> x;
        if (i > 0)
            arr[i] = x + arr[i - 1];
        else
            arr[i] = x;
    }
    min = arr[widthOfPiano - 1];
    indexToBeShown = 1;
    for (int i = widthOfPiano; i < numOfLogs; i++)
    {
        if (arr[i] - arr[i-widthOfPiano] < min)
        {
            min = arr[i] - arr[i-widthOfPiano];
            indexToBeShown = i + 2-widthOfPiano;
        }
    }
    cout << indexToBeShown;
    return 0;
}