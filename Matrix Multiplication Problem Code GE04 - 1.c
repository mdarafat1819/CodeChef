#include <stdio.h>

int main()
{
    //freopen("input.txt", "r", stdin);
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int ra, ca, rb, cb, i, j;
        scanf("%d%d", &ra, &ca);
        int a[ra][ca];
        //input A
        for(i = 0; i < ra; i++)
            for(j = 0; j < ca; j++)
                scanf("%d", &a[i][j]);
        scanf("%d%d", &rb, &cb);
        //input B
        int b[rb][cb];
        for(i = 0; i < rb; i++)
            for(j = 0; j < cb; j++)
                scanf("%d", &b[i][j]);
        //calculation
        if(ca!=rb)
            printf("IMPOSSIBLE");
        else
        {
            for(i = 0; i < ra; i++)
            {
                int mul = 0, k = 0, cnt = 0;
                for(j = 0; j < ca; j++)
                {
                    if(cnt == cb)
                        break;
                    mul = mul + a[i][j] * b[j][k];
                    if(j == (ca - 1))
                    {
                        cnt++;
                        printf("%d ", mul);
                        mul = 0;
                        j = -1;
                        k++;
                    }
                }
            }
            printf("\n");
        }
    }
    return 0;
}

