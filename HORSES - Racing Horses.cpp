#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n, ans;
        cin>>n;
        long long int ara[n];
        for(int i = 0; i < n; i++) cin>>ara[i];
        ans = abs(ara[0] - ara[1]);
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(i == j) continue;
                ans = min(ans, abs(ara[i] - ara[j]));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
