#include <bits/stdc++.h>
using namespace std;
int main()
{

    int tc;
    cin >> tc;
    while (tc)
    {
        int n;
        cin>>n;
        map<int, int> map;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            map[x]++;
        }
        if (map.size() == 1)
        {
            cout << "YES" << endl;
        }
        else if (map.size() == 2)
        {

            auto it = map.begin();
            int a = it->second;
            it++;
            int b = it->second;

            if (n % 2 == 0 && a==b)
            {
                cout<<"YES"<<endl;
            }
            else if (n % 2 != 0 && ((a+1==b) || (b+1==a) ))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }

        }
        else
        {
            cout << "NO" << endl;
        }

        tc--;
    }

    return 0;
}