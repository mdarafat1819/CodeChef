#include <stdio.h>
#include <string.h>

void revWord(char word[])
{
    int len = strlen(word), i;
    for(i = 0; i < len / 2; i++)
    {
        char temp = word[i];
        word[i] = word[len - i - 1];
        word[len - i - 1] = temp;
    }
    printf("%s ", word);
}
int main()
{
   char str[110], word[50];
   scanf("%[^\n]", str);
   int len = strlen(str), index = 0, i;
   for(i = len - 1; i >= 0; i--)
   {
       if(str[i] == ' ')
       {
           word[index] = '\0';
           index = 0;
           revWord(word);
       }
       else {
        word[index] = str[i];
        index++;
       }
   }
   word[index] = '\0';
   revWord(word);

    return 0;
}
