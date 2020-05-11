#include <bits/stdc++.h>

using namespace std;

#define eps 10e-9
#define SIZE 1000001

int main()
{
    int t, n;
    double* ans;
    ans = (double*)malloc(SIZE * sizeof(double));
    for(int i = 1; i < SIZE; i++)
        ans[i] = log10(i);
    ans[0] = 0;
    for(int i = 1; i < SIZE; i++)
        ans[i] = ans[i] + ans[i-1];
    cin>>t;
    while(t--)
    {
        cin>>n;
        int res = ans[n] + 1 + eps;
        cout<<res<<endl;
    }
    free(ans);
    return 0;
}

