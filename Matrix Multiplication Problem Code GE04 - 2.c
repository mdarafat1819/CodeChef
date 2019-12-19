#include <stdio.h>

int main()
{
    //freopen("input.txt", "r", stdin);
    int t;
    scanf("%d", &t);
    while(t--)
    {
    int ra, ca, rb, cb, i, j, k;
    scanf("%d%d",&ra, &ca);
    int a[ra][ca];
    for(i = 0; i < ra; i++)
        for(j = 0; j < ca; j++)
            scanf("%d",&a[i][j]);
    scanf("%d%d",&rb, &cb);
    int b[rb][cb];
    for(i = 0; i < rb; i++)
        for(j = 0; j < cb; j++)
            scanf("%d", &b[i][j]);
    //calculation
    if(ca != rb)
        printf("IMPOSSIBLE");
    else
    {
    for(i = 0; i < ra; i++)
    {
        for(k = 0; k < cb; k++)
        {
            int mul = 0;
            for(j = 0; j < ca; j++)
                mul = mul + a[i][j] * b[j][k];
            printf("%d ", mul);
        }
    }
    }
    printf("\n");
    }
    return 0;
}
