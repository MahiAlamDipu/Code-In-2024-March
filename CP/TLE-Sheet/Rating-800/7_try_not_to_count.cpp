#include<bits/stdc++.h>
using namespace std ;
int main()
{


    // int n,m; 
    // cin>>n>>m;  // eforc    force

    string x,s ;
    cin>>x>>s;
   int ans = 0 ;
   int  found= 0;
   if(x==s)
   {
    cout<<0<<endl;
   }
   else
   {

    do
    {
        
       
        x = x+x;
        ans++;
        cout<< " X : "<<x<<endl;
        if(s.find(s) != -1 )
        {
            found = 1;
        }
       
        
    } while (x.length()<s.length());


   
    cout<<"found"<<found<<endl;
    // cout<< " X : "<<x<<endl;

    cout<<ans<<endl;
   }
    

   





    

    

    // int tc ; 
    // cin>>tc;
    // while(tc)
    // {
        
    //     tc--;
    // }

    return 0 ;
}