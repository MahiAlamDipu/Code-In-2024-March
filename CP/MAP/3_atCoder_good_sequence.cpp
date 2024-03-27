#include<bits/stdc++.h>
using namespace std ;
int main()
{

    int n ;
    cin>>n ;
    vector<int> vec;
    for(int i = 0 ; i<n ; i++)
    {
        int a ; cin>>a ;
        vec.push_back(a);

    }
    map<int,int>map;
    for(auto u:vec)
    {
        map[u]++;
    }
    int ans =0 ;
    for(auto u : map)
    {
        if(u.first >u.second)
        {
            ans = ans + u.second;
        }
        else
        {
            if(u.first<u.second)
            ans = ans +(u.second - u.first);
        }
    }
    cout<<ans<<endl;

    return 0 ;
}