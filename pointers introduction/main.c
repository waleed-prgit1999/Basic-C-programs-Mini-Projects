#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=3;
    int *j;
    j = &i;

    printf("\n Address of i = %u",&i);
    printf("\n Address of i = %u",j);
    printf("\n Address of j = %u",&j);
    printf("\n Value of j = %u",j);
    printf("\n Value of i = %d",i);
    printf("\n Value of i = %d",*(&i));
    printf("\n Value of i = %d",*j);

    return 0;
}
