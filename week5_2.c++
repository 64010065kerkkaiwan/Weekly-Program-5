#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int a , b ;
    scanf("%s",str);
    a = strlen(str);
    for (int i = 0; i < a; i++)
    {
        b = str[i];
        if (b >= 97)
        {
            b = b - 32 ;
            printf("%c",b);
        }
        else if (b<=90)
        {
            b = b + 32 ;
            printf("%c",b);
        }
    }
    return 0 ;
}