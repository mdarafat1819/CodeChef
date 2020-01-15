#include <stdio.h>
#include <string.h>

char* revString(char str[])
{
    int len = strlen(str), i;
    for(i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    return str;
}
char summation[1001];
void sum(char str1[], char str2[])
{
    if(strlen(str2)>strlen(str1))
    {
        char temp[1001];
        strcpy(temp, str1);
        strcpy(str1, str2);
        strcpy(str2, temp);
    }
    int len1 = strlen(str1) - 1, len2 = strlen(str2) - 1;
    int carry = 0, k = 0, i;
    for(i = len2; i >= 0; i--, len1--, k++)
    {
        int digitSum = (str1[len1] - '0') + (str2[i] - '0') + carry;
        summation[k] = (digitSum % 10) + '0';
        carry = digitSum / 10;
    }
    for(i = len1; i >= 0; i--, k++)
    {
        int digitSum = (str1[i] - '0') + carry;
        summation[k] = (digitSum % 10) + '0';
        carry = digitSum / 10;
    }
    if(carry)
    {
        summation[k] = carry + 48;
        summation[k + 1] = '\0';
    }
    else summation[k] = '\0';
    revString(summation);
}

void fibo(int nth)
{
    char term1[1001] = "0", term2[1001] = "1";

    int i;
    for(i = 1; ; i ++)
    {
        if(!((term1[strlen(term1)-1] - '0') % 2)) nth--;
        if(nth < 0)
        {
            printf("%s\n", term1);
            break;
        }
        char temp[1001];
        strcpy(temp, term1);
        strcpy(term1, term2);
        int term1len = strlen(term1);
        int templen = strlen(temp);
        sum(term1, temp);
        strcpy(term2, summation);
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    fibo(num);

    return 0;
}
