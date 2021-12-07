#define _CRT_SECURE_NO_DEPRECATE
#include <bits/stdc++.h>
//#include<ofstream>
//#include<ifstream>
//#include<ctime>
#define ll long long
#define N 100000000
//#include <cstdlib>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int x, y;

    string s;
    for (int i = 0; i < n; i++)
    {
        cin>>y;
        cin >> x;
        cin >> s;
        int xIncrementer = 0;
        int yIncrementer = 0;
        int starterx = 1;
        int startery = 1;
        int holderOfBiggestNumber = 0;
        int step = 0;
        for (int z = 1; z <= y; z++)
        {
            for (int j = 1; j <= x; j++)
            {
                step = 0;
                
                    xIncrementer=0;
                    yIncrementer=0;
                    
                for (int k = 0; k < s.size(); k++)
                {
                    if (s[k] == 'L' && j + xIncrementer > 1)
                    {
                        xIncrementer--;
                        step++;
                    }
                    else if (s[k] == 'R' && j + xIncrementer < x)
                    {

                        xIncrementer++;

                        step++;
                    }
                    else if (s[k] == 'U' && z + yIncrementer < y)
                    {

                        yIncrementer++;

                        step++;
                    }
                    else if (s[k] == 'D' && z + yIncrementer > 1)
                    {

                        yIncrementer--;

                        step++;
                    }
                }
                if (step > holderOfBiggestNumber)
                {

                    starterx = j;
                    startery = z;

                    holderOfBiggestNumber = step;
                }
            }
        }
        cout << startery << " " << starterx << endl;
    }
    return 0;
}
/*
/*
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == 'L')
            {
                xIncrementor++;
            }
            else if (s[j] == 'R')
            {

                xIncrementor--;
            }
            else if (s[j] == 'U')
            {

                yIncrementor--;
            }
            else
            {

                yIncrementor++;
            }
        }*/
/*
        if (xIncrementor <= 0)
        {
            xIncrementor = 1;
        }
        else if (xIncrementor > x)
        {
            xIncrementor = x;
        }

        if (yIncrementor <= 0)
        {
            yIncrementor = 1;
        }
        else if (yIncrementor > y)
        {
            yIncrementor = y;
        }*/
//cout<<yIncrementor<<" "<<xIncrementor<<endl;