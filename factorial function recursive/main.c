#include <stdio.h>
#include <stdlib.h>
int fact_recsv(int);
int main()
{
    int num;
    printf("enter e number \n\n");
    scanf("%d",&num);

    printf("the factorial of number %d is %d\n",num,fact_recsv(num));
    return 0;
}
int fact_recsv(int num)
{
   int result;

   if(num == 2)
       return (2);

   else if(num ==1)
       return (1);

   else
       result = num * fact_recsv(num-1);

   return (result);
}
