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
int arr[26];
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n>26){
        cout<<-1;
        return 0;

    }
    int counter=0;

    for (int i = 0; i < n; i++)
    {
        arr[s[i]-'a']++;

        
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i]>1)
        {
            counter=counter+arr[i]-1;

            
        }
    }
    cout<<counter;
    
    

    return 0;
}