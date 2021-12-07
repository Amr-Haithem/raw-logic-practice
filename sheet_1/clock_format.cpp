#define _CRT_SECURE_NO_DEPRECATE
#include <bits/stdc++.h>
#define ll long long
#define N 100000000
using namespace std;
#define endl '\n'
int arr[5][5];
int main()
{ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

string s;
cin>>s;
string temp="";
    temp=s.substr(s.size()-2,s.size()-1);
    if (temp =="AM"){
        temp =s.substr(0,2);
        int x=stoi(temp);
        if(x==12){
            cout<<"00"+s.substr(2,6);
        }
        else cout<<s.substr(0,8);


    }
    else{
        
        temp =s.substr(0,2);
        int x=stoi(temp);
        if(x!=12){
            cout<<to_string(x+=12)+s.substr(2,6);
        }
        else cout<<s.substr(0,8);



    }
    return 0;

    }


    
    

    
