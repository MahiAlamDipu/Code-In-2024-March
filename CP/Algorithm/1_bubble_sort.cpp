
// bubble sort --> """ Push the maximum """ to the last by ** adjacent swaps **
#include<bits/stdc++.h>
using namespace std ;
int main()
{

    int n ;
    cin>>n ;
    int arr[n];
    for(int i = 0 ; i<n ; i ++)
    {
        cin>>arr[i];
    }

    for(int i = 0 ; i < n-1 ; i++)  // after each loop the maximum will go at last
    {
        int didswap = 0;
        for(int j = 0 ; j<n-(1+i) ; j++)
        {
            if(arr[j]>arr[j+1])
            {

            int temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1] = temp;
            didswap = 1;

            }
        }
        if(didswap==0)
        {
            break;
        }
    }

    for(auto u : arr)
    {
        cout<<u<<" ";
    }
    cout <<endl;

    return 0 ;
}