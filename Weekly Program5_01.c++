#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[100], s;
    int a ;
    scanf("%s", str) ;
    a = strlen(str);
    for (int i = 0; i < a ; i++)
    {
        s = str[i] ;
        if (islower(s))
        {
            printf("%c",toupper(s));
        }
        else if (isupper(s))
        {
            printf("%c",tolower(s));
        }
    }
    
    return 0 ;
}
