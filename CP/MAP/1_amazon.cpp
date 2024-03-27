#include<bits/stdc++.h>
using namespace std ;
int main()
{

    int tc ; 
    cin>>tc;
    while(tc)
    {
        int n;
        cin>>n ;
        int ans=0;
        map<string,int>cnt;
        for(int i = 0 ; i<n ; i++)
        {
            string s;
            cin>>s ;
            cnt[s]++;
        }
        for(auto u : cnt)
        {
            
            cout<<u.first<<" "<<u.second<<endl;

            if(u.second==2)
            {
                ans++;
            }
        }
        cout<<ans<<endl;
        
        tc--;
    }

    return 0 ;
}