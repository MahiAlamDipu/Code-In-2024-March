#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int tc;
    cin>>tc;

    while(tc!=0)
    {
        int n,k,work=0;
        cin>>n>>k;
        vector<int> arr[n];
        for(int i = 0 ; i< n ; i++)
        {
            int ele;
            cin>>ele;
            arr[i].push_back(ele);
        }
        for(int i = 0 ; i< n-1 ; i++)
        {
            if(arr[i]>arr[i+1])
            {
                work=1; // unsorted 
                break;
                
            }
        }
        if(work)
        {
            if(k<=1)
            {
                cout<<"NO"<<endl;
            }
            else
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
}