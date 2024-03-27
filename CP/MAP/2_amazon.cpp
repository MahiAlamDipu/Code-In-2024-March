#include <bits/stdc++.h>
using namespace std;
int main()
{

    int tc;
    cin >> tc;
    while (tc)
    {
        // String Input

        string s;
        char c;
        cin >> c;
        getline(cin, s);
        s =  c+s ;   // age c er pore s mind it nahole m seshe chole jabe 

        // now seperate the every word whose are seperate by space

        string temp;

        vector<string> vec;

        for (auto u : s) // don't use normal loop
        {
            if (isspace(u))
            {
                vec.push_back(temp);
                temp.clear();  // must must 
                
            }
            else
            {
                temp = temp + u;
            }
        }
        vec.push_back(temp);


        // for(auto u : vec)
        // {
        //     cout<<u <<endl;   // auto use korle pore obossoi amader ke U diyei kaj korte hobe 

        // }


        map<string,int> map;

        int max_freq = 0 ;

        for(auto u : vec)
        {
            map[u]++;
            if(map[u]>max_freq)
            {
                max_freq = map[u];
            }
        }

        // int max_freq = 0 ;


        // for(auto u : map)
        // {
        //     if(u.second >max_freq)
        //     {
        //         max_freq= u.second;
        //     }
        // }


        for(auto u : map)
        {
            if(max_freq == u.second)
            {
                cout<<u.first<<" "<<max_freq<<endl; // alphabatically asbe age 
                break ;  // cause ekadik same freq asle ami first tai chachhi 
            }
        }

        for(auto u : vec)
        {
            if(map[u]== max_freq)
            {
                cout<<u<<" "<<max_freq<<endl; // string e je age se asbe 
                break;  // cause ekadik same freq asle ami first tai chachhi 
            }
         }

        
  

        tc--;
    }

    return 0;
}