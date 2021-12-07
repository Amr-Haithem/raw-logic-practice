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
int x[10000];


int binarySearch(int arr[],int start,int end,int wanted){
    int middle=(start+end)/2;
    if(arr[middle]==wanted){
        return middle;
    }
    if(arr[middle]<wanted){
        start=middle;
        return binarySearch(arr,start,end,wanted);
    }
    end=middle;
    return binarySearch(arr,start,end,wanted);
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    int num;
    cin>>num;

    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>x[i];
    }
   cout<<"It's at index "<< binarySearch(x,0,n-1,num);
    
    
    
    return 0;
}