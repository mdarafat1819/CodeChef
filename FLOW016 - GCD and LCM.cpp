#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    return !b ? a : gcd(b , a % b);
}
long long int lcm(long long int a, long long int b)
{
    return a * (b / gcd(a, b));
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        cout<<gcd(a, b)<<" "<<lcm(a, b)<<endl;
    }
    return 0;
}
