#include <stdio.h>

char *xstrchr(char *string, char ch) 
{
    while (*string != '\0') 
    {
        if (*string == ch) 
        {
            return string;
        }
        string++;
    }
    
    return NULL;
}

int main() 
{   
    int length;
    printf("Enter the string length :");
    scanf("%d",&length);

    char str[length];
    printf("Enter the string :");
    scanf("%s",str);

    char chr;
    printf("Enter a character: ");
    scanf(" %c",&chr);

    char *result = xstrchr(str, chr);
    int conc=result-str;
    
    if (result != NULL) {
        printf("\nCharacter '%c' found at position %ld.", chr, conc+1);
    } else {
        printf("\nCharacter '%c' not found.", chr);
    }
    
    return 0;
}
