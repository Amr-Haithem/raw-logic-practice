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
    //custom code starts here

    string s;
    string temp = "";
    cin >> s;
    int i = 0;
    bool flag = false;

    while (i < s.size())
    {

        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            flag = true;

            i += 3;
            if (flag && s.substr(i, 3) != "WUB" && temp.size() != 0)
            {
                temp += " ";
            }
        }

        else
        {
            temp += s[i];
            flag = false;
            i++;
        }
    }
    cout << temp;
    //and ends here

    return 0;
}
