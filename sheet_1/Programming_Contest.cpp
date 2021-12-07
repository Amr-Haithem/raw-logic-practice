#define _CRT_SECURE_NO_DEPRECATE
#include <bits/stdc++.h>
#define ll long long
#define N 100000000
using namespace std;
#define endl '\n'
int arr[1000][3];
int main()
{ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int x;
cin>>x;

for (int i = 0; i < x; i++)
{

   for (int j = 0; j < 3; j++)
   {
        cin>>arr[i][j];
        
   }
   
}
int sum=0;
for (int i = 0; i < x; i++)
{

   
        if(arr[i][0]+arr[i][1]+arr[i][2]>=2){
            sum++;

        }
        else;
        
   
   
}
cout<<sum;


    return 0;

    }


    
    

    
