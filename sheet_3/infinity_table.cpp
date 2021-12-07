#define _CRT_SECURE_NO_DEPRECATE
#include <bits/stdc++.h>
#define ll long long
#define N 100000000
using namespace std;
#define endl '\n'
ll arr[101];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++)
    {
        ll toBeFound;
        toBeFound = arr[j];
        ll base;
        base = sqrt(toBeFound);
        // ll first = base * base + 1;
        ll r;
        ll c;

        ll first = base * base;

        int difference = toBeFound - first;
        if (difference == 0)
        {
            cout << base << " " << 1<<endl;
        }

        else if (difference > base + 1)
        {
            difference -= base + 1;
            r = base + 1;
            c = base + 1 - difference;
            cout << r << " " << c << endl;
        }
        else
        {
            r = difference;
            c = base + 1;
            cout << r << " " << c << endl;
        }
    }
}

/*

        for (int i = 0; i < base + 1; i++)
        {

            if (first == toBeFound)
            {
                cout << r << " " << c << endl;

                break;
            }
            ++first;
            r++;
        }

        c--;
        ++first;

        for (int i = 1; i < base + 1; i++)
        {
            if (first == toBeFound)
            {
                cout << r << " " << c << endl;
                break;
            }
            ++first;

            c--;
        }
    }*/