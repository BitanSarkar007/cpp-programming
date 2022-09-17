// Write a C function mySubStr which takes two character strings s1, s2 and checks whether the
// second string is a substring of the latter. If so, it should return the position (the index value)
// of the occurrence of s2 in s1

#include <stdio.h>
#include <string.h>
#define MAX 100

int mySubStr(char *s1, char *s2)
{
    int i, j, k, flag = 0;
    for (i = 0; i < strlen(s1); i++)
    {
        if (s1[i] == s2[0])
        {
            k = i;
            for (j = 0; j < strlen(s2); j++)
            {
                if (s1[k] == s2[j])
                {
                    flag = 1;
                    k++;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                return i;
            }
        }
    }
    return -1;
}

int main()
{
    char s1[MAX], s2[MAX];
    printf("Enter the first string: \n");
    scanf("%s", s1);
    printf("Enter the second string: \n");
    scanf("%s", s2);
    printf("The first string is: %s\n", s1);
    printf("The second string is: %s\n", s2);
    int pos = mySubStr(s1, s2);
    if (pos == -1)
    {
        printf("The second string is not a substring of the first string\n");
    }
    else
    {
        printf("The second string is a substring of the first string at position %d\n", pos);
    }
    return 0;
}
