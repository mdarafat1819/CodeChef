#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t, f[] = {0, 1, 2, 3, 0, 9};
    cin>>t;
    while(t--)
    {
        long long int n, value = 1;
        cin>>n;
        while(value < n) value *= 2;
        if(value > n) value /= 2;
        value %= 60;
        int index  = log2(value);
        cout<<f[index]<<endl;
    }

    return 0;
}
