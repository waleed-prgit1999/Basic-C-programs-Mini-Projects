#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x,y = 0;

    printf("Enter the number\n");
    scanf("%d",&x);

    for(i=1;i<=x/2;i++)
    {
        if(x%i==0)
        {
            y = y+i;
        }
    }

    if(y==x)
      printf("The number %d is Perfect\n",x);

    else
        printf("The number %d is not Perfect\n",x);


}
