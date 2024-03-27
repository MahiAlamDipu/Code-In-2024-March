#include<bits/stdc++.h>
using namespace std ;
int main()
{

    int tc ; 
    cin>>tc;
    map<string,int>map ; // eta bahire nite hobe karon ami count korte chacchi 
                         // sob gula case er jonno " tai aalda vave proti tar jonno new map nibo na "
    while(tc)
    {
        string s ;
        char c ;
        cin>>c ;
        getline(cin,s);
        s=c+s;
        map[s]++;
        if(map[s]>1)
        {
            cout<<s<<map[s]-1<<endl;
        }
        else
        {
            cout<<"OK"<<endl;
        }

        
        tc--;
    }

    return 0 ;
}