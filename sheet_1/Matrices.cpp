#define _CRT_SECURE_NO_DEPRECATE
#include <bits/stdc++.h>
#define ll long long
#define N 100000000
using namespace std;
#define endl '\n'
int arr[5][5];
int main()
{ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int iHolder;
int jHolder;
for (int i = 0; i < 5; i++)
{

   for (int j = 0; j < 5; j++)
   {
        cin>>arr[i][j];
        if(arr[i][j]==1){
            iHolder=i+1;
            jHolder=j+1;
        }
        
   }

   
}

cout<< abs(iHolder-3) +abs(jHolder-3);
    return 0;

    }


    
    

    
