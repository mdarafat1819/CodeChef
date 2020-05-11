#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll gcd(ll a, ll b)
{
    return ! b ? a : gcd(b , a % b);
}
int main()
{
    long long int t, a, b;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld %lld", &a, &b);
        if(gcd(a, b) == 1) printf("%lld\n", a * b - a - b + 1);
        else printf("-1\n");
    }
    return 0;
}
