#define _CRT_SECURE_NO_DEPRECATE
#include <bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
#define endl '\n'

ll arr[100000];
ll arrTemp[100000];


void merge(ll arr[], int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;

    int A[n1];
    int B[n2];

    for (int i = 0; i < n1; i++)
    {
        A[i] = arr[i + p];
    }
    for (int j = 0; j < n2; j++)
    {

        B[j] = arr[j + q + 1];
    }

    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n1 && j < n2)
    {
        if (A[i] <= B[j])
        {
            arr[k+p] = A[i];
            i++;
        }
        else
        {
            arr[k+p] = B[j];
            j++;
        }
        k++;
    };
    while (i < n1)
    {

        arr[k+p] = A[i];
        i++;
        k++;
    }
    while (j < n2)
    {

        arr[k+p] = B[j];
        j++;
        k++;
    }
}

void merge_sort(ll arr[], int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        merge_sort(arr, p, q);
        merge_sort(arr, q + 1, r);
        merge(arr, p, q, r);
    }
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int numOfStones;
    cin >> numOfStones;
    //arrTemp will hold elements but in sorted order
    for (int i = 0; i < numOfStones; i++)
    {
        int x;
        cin >> x;
        arrTemp[i] = x;
        if (i != 0)
        {
            arr[i] = arr[i - 1] + x;
        }
        else
            arr[i] = x;
    }
    //sorting the arrTemp to solve the second question
    
    merge_sort(arrTemp, 0, numOfStones - 1);
    
    //making the prefix sum of the arrTemp 

    for (int i = 0; i < numOfStones; i++)
    {
        if (i != 0)
            arrTemp[i] = arrTemp[i] + arrTemp[i - 1];
    }
    
    int numOfQuestions;
    cin >> numOfQuestions;
    int l, r, q;
    //getting questions
    for (int i = 0; i < numOfQuestions; i++)
    {
        cin >> q;
        cin >> l;
        cin >> r;

        if (q == 1)
        {
            if (l - 2 >= 0)
            {
                cout << arr[r - 1] - arr[l - 2] << endl;
            }
            else
            {
                cout << arr[r - 1] << endl;
            }
        }
        else
        {
            if (l - 2 >= 0)
            {
                cout << arrTemp[r - 1] - arrTemp[l - 2] << endl;
            }
            else
            {
                cout << arrTemp[r - 1] << endl;
            }
        }
    }
    return 0;
}