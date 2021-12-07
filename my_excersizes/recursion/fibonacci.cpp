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

int fibonacci(int indexOfFibonacci){
    if(indexOfFibonacci==1){
        return 1;
    }
    if(indexOfFibonacci==2){
        return 1;
    }
    return fibonacci(indexOfFibonacci-1)+fibonacci(indexOfFibonacci-2);

}
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
   cout<<fibonacci(n);
    
    
    return 0;
}