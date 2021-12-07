#define _CRT_SECURE_NO_DEPRECATE
#include <bits/stdc++.h>
#define ll long long
#define N 100000000
using namespace std;
#define endl '\n'

int main()
{ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int x =0;
int y;
string z;
cin>>y;
cin>>z;
for (int i = 0; i < z.size(); i++)
{
    if(z[i]=='A')x++;
    else x--;

}
if(x>0)cout<<"Anton";
else if(x<0) cout<<"Danik";
else cout<<"Friendship";




    return 0;

    }


    
    

    
