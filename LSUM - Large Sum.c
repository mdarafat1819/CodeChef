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
char summation[110];
void sum(char str1[], char str2[])
{
    if(strlen(str2)>strlen(str1))
    {
        char temp[110];
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
    printf("%s\n", summation);
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        char num1[110], num2[110];
        scanf("%s%s", &num1, &num2);
        sum(num1, num2);
    }

    return 0;
}
