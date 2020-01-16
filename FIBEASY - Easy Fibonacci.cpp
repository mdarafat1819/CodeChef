#include<iostream>
#include <bits/stdc++.h>

using namespace std;
int fibo(int nth)
{
    int term1 = 0, term2 = 1;
    for(int i = 1; i < nth; i++)
    {
        int temp = term1;
        term1 = term2;
        term2 = (term2 + temp) % 10;
    }
    return term1;
}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        long long int n, value = 1;
        cin>>n;
        while(value < n) value *= 2;
        if(value > n) value /= 2;
        value %= 60;
        cout<<fibo(value)<<endl;
    }

    return 0;
}
