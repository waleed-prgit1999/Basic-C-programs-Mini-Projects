#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[9];
    char *ptr=name;
    printf("enter your name :\n");
    scanf("%s",&name);
    printf("your name is %s",name);

   /* while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }*/
    return 0;
}
