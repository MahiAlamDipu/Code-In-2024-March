#include<bits/stdc++.h>
using namespace std ;
int main()
{

    int tc ; 
    cin>>tc;
    map<string,int>map;
    while(tc)
    {
        string s ;
        char c;
        cin>>c ;
        getline(cin,s);
        s= c+s ;
        map[s]++;
        if(map[s]>1)    // input deyar sathe sathei check korte hobe 
                        // karon 1st harry te output "No" 2nd harry te output "Yes"
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

        
        tc--;
    }

    return 0 ;
} 
