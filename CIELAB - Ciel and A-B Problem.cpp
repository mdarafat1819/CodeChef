#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, lastDigit;
    cin>>a>>b;
    a = a - b;
    if((a % 10) == 9) a--;
    else a++;
    cout<<a<<endl;
    return 0;
}
