

#define _CRT_SECURE_NO_DEPRECATE
#include <bits/stdc++.h>
#define ll long long
#define N 100000000
using namespace std;
#define endl '\n'

vector<int> x{1, 1, 1};
vector<int> y{1, 1, 1};
int total = 0;
int multiplier = 0;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for (int i = x.end(); i != x.start(); i--)
    {
        total = total + i * y * multiplier;
        multiplier *= 10;
    }
    cout << total;

    return 0;
}