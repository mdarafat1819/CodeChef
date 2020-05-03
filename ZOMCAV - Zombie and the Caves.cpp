#include <bits/stdc++.h>

using namespace std;

void merge_sort(int ara[], int l, int r)
{
    if(l >= r) return;
    int mid = l + (r - l) / 2;
    merge_sort(ara, l, mid);
    merge_sort(ara, mid+1, r);
    int temp[r-l+1], i = l, j = mid+1, k = 0;
    while((i <= mid) && (j <= r))
    {
        if(ara[i] < ara[j]) temp[k++] = ara[i++];
        else temp[k++] = ara[j++];
    }
    while(i <= mid) temp[k++] = ara[i++];
    while(j <= r) temp[k++] = ara[j++];
    for(i = l, j = 0; i <= r; i++, j++)
        ara[i] = temp[j];
}
int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int h[n+1] = {0}, ans[n+1] = {0}, c, l, r, flag = 0;
        for(int i = 1; i <= n; i++)
        {
            cin>>c;
            l = i - c, r = i + c;
            if(l < 1) l = 1;
            ans[l]++;
            if(r < n) ans[++r]--;
        }
        for(int i = 1; i <= n; i++) cin>>h[i];
        for(int i = 1; i <= n; i++)
            ans[i] = ans[i] + ans[i-1];
        merge_sort(h, 0, n);
        merge_sort(ans, 0, n);
        for(int i = 1; i <= n; i++)
        {
            if(ans[i] != h[i])
            {
                flag++;
                break;
            }
        }
        if(!flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
