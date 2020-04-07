#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int cntOne = 0, len;
        cin>>len;
        string str;
        cin>>str;
        for(int i = 0; i < len; i++)
            if(str[i] == '1') cntOne++;
        cout<<(cntOne * (cntOne + 1)) / 2<<endl;
    }
    return 0;
}
