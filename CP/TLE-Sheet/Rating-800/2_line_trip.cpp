#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int tc ;
    cin>>tc ;
    while(tc)
    {
        int n,x;
        cin>>n>>x;   // want to approch at 'x'
        int arr[n];
        
        for(int i = 0 ; i<n ; i++)
        {
            cin>>arr[i];
        }
        int max_diff= arr[0]-0 ;
        for(int i = 0 ; i< n-1 ; i++)
        {
            if(max_diff< (arr[i+1]-arr[i]))
            {
                
                max_diff = arr[i+1] - arr[i];

                
            }

        }
        if(max_diff< (x - arr[n-1])*2)
        {
            max_diff = (x - arr[n-1])*2 ;
        }
        cout<<max_diff<<endl;

        tc--;
    }

    return 0 ;
}