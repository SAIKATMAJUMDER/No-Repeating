#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{

    char str[100];
    int i;
    int freq[256] = {0};


    printf("Enter the string: ");
    gets(str);


    for(i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }


    printf("The non repeating characters are: ");
    for(i = 0; i < 256; i++)
    {
        if(freq[i] == 1)
        {
            printf(" %c ", i);
        }
    }
    return 0;
}
