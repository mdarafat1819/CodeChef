#include <bits/stdc++.h>

using namespace std;

#define eps 10e-9

int digit_count(int n)
{
    double ans = 0;
    for(int i = 1; i <= n; i++)
        ans += log10(i);
    return ans + 1 + eps;
}

int main()
{
    int t, input, n, ans[100000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i = 0; i < n; i++)
        {
            cin>>input;
            ans[i] = digit_count(input);
        }
        for(int i = 0; i < n; i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
