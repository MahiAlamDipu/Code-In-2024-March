#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc)
    {
        int n;
        int ans1 = 0,ans2=0 ;
        cin >> n;

        string str;
        cin>>str;
        for(int i = 0 ; i<n ; i++)
        {
            if(str[i]=='.')
            {
                ans1++;
            }
            if(str[i]=='.' && str[i+1]=='.' && str[i+2]=='.')
            {
                ans2++;
                break;
            }
        }
        if(ans2==0)
        {
        cout<<ans1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
        tc--;
    }

    return 0;
}