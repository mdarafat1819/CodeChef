#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, k, value, index = 0;
        scanf("%d%d", &n, &k);
        int ara[n + 1];
        for(int i = 0; i < n; i++) scanf("%d", &ara[i]);
        value = ara[k - 1];
        for(int i = 0; i < n; i++)
            if(ara[i] < value) index++;
        printf("%d\n", index+1);

    }

    return 0;
}
