
// Bubble sort 

#include<bits/stdc++.h>
using namespace std ;
int main()
{

    int tc ; 
    cin>>tc;
    while(tc)
    {
        int n ;
        cin>>n ;
        int arr[n];
        for(int i = 0 ; i<n ; i++)
        {
            cin>>arr[i];
        }
        int NO = 0 ;
        int unsorted = 0 ;
        for(int i = 0 ; i<n ; i++)
        {
            if(arr[i]>n)
            {
                NO=1;
            }
        }
        // cout<<"NO"<<" "<<NO<<endl;
         if(NO!=1)
        {
            for(int i = 0 ; i<n-1 ; i++)
            {
                if(arr[i]>arr[i+1])
                {
                    unsorted=1;
                    break;
                }
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
        // cout<<"Unsorted"<<unsorted<<endl;
        if(unsorted)
        {
            for(int i = 0 ; i<n-1 ; i++)   // (n-1) beacuse sesh 1 ta element auto sorted
            {

            for(int j = 1 ; j<n-(1+i) ; j++)
            {
                if(arr[j-1]<arr[j] && arr[j]>arr[j+1])
                {
                    int tem = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1]=tem;
                }
            }
            }

            for(auto u : arr)
            {
                cout<<u<<" ";
            }
            cout<<endl;


            unsorted=0;


            for(int i = 0 ; i<n-1 ; i++)
            {
                if(arr[i]>arr[i+1])
                {
                    unsorted=1;
                    break;
                }
            }
            // cout<<"Unsorted"<<unsorted<<endl;
            if(unsorted==1)
            {
                cout<<"NO"<<endl;

            }
            else if(unsorted==0)
            {
                cout<<"YES"<<endl;
            }

        }
        else
        {
            cout<<"YES"<<endl;
        }
        tc--;
    }

    return 0 ;
}