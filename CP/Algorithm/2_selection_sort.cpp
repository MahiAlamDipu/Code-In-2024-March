// selection --> select the minimum swap it 

#include<bits/stdc++.h>
using namespace std ;
int main()
{

    int n ;
    cin>>n ;
    int arr[n];
    for(int i = 0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    // after each swap  --> " first element automatically sorted "
    // 0 --> 1--> progress the sorted

    for(int i = 0 ; i< n-1 ; i++)
    {
        int min = i ;
        for(int j = i ; j<n ; j++)
        {
            if (arr[j]<arr[min])
            {
                min = j;
            }
        }
         // prothom unsorted er sathe swap tai " i " use korte hobe
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i]= temp;
    } 

    for(auto u : arr)
    {
        cout<<u <<" ";
    }
    cout<<endl;
    return 0 ;
}