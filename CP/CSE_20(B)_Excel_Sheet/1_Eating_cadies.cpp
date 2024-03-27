#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int alice = arr[0];
        int bob = arr[n-1];
        int ans= 2;
        int possible=0;
        vector <int>  result ;

        int pointer_a = 0;
        int pointer_b = n-1;

        while(pointer_a<pointer_b)
        {
            if(alice>bob)
            {
                pointer_b--;
                ans++;
                bob = bob + arr[pointer_b];
            }
            else if(alice<bob)                   // why not if (think ) --> Because that time if the codtion will overtake still it will work
            {
                pointer_a++;
                ans++;
                alice = alice +arr[pointer_a];
            }
            else
            {
                possible++;
                result.push_back(ans);
                pointer_a++;
                pointer_b--;
                ans = ans+2 ;
                alice = alice +arr[pointer_a];
                bob = bob + arr[pointer_b];
                // cout<<"Ans : "<<ans<<endl;
                
            }
        }
        if(possible)
        cout<< *max_element(result.begin() , result.end())<<endl;
        else
        cout<<0<<endl;

        tc--;
    }

    return 0;
}