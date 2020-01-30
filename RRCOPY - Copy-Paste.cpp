#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, cnt = 0;
        cin>>n;
        int ara[n];
        for(int i = 0; i < n; i++) cin>>ara[i];
        sort(ara, ara + n);
        for(int i = 0; i < n; i++)
        {
            if(ara[i] == ara[i + 1]) continue;
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
