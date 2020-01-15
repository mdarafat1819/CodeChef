#include <stdio.h>

void fibo(int n)
{
    long long int term1 = 0, term2 = 1;
    while(1)
    {
        if(term1 % 2 == 0) n--;
        if(n < 0)
    {
        printf("%lld\n", term1);
        break;
    }
    long long int temp = term1;
    term1 = term2;
    term2 = term1 + temp;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    fibo(n);

    return 0;
}
