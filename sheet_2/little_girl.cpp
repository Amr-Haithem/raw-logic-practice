#define _CRT_SECURE_NO_DEPRECATE
#include <bits/stdc++.h>
#define ll long long
#define N 100000000
using namespace std;
#define endl '\n'
int numsHolder[200000];
int queriesFreqHolder[20000];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int numOfElements, numOfQueries;
    cin >> numOfElements;
    cin >> numOfQueries;
    int counterOfAll = 0;
    int l, r;
    for (int i = 0; i < numOfElements; i++)
    {
        cin >> numsHolder[i];
    }
    int l, r;
    int counter = 0;
    for (int i = 0; i < numOfQueries; i++)
    {
        cin >> l;
        cin >> r;
        if (l == 1 && r == numOfQueries)
        {
            counter++;
        }
        else
        {
            queriesFreqHolder[l]++;
            queriesFreqHolder[r]++;
        }
    }

    int maxIndex,maxValue;
    maxValue=queriesFreqHolder[1];
    maxIndex=1;
    for (int i = 1; i <= 200000; i++)
    {
        if (queriesFreqHolder[i]>maxValue)
        {
            maxValue=queriesFreqHolder[i];
            maxIndex=i;
            
        }
        
        
    }
    

    return 0;
}