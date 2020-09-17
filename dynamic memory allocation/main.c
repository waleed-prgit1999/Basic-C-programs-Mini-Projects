#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*printf("Allocating some memory space dynamically: \n");
    printf("Malloc: \n");
    int *ptr=(int *)malloc(100*sizeof(int));
    //ptr=(int *) malloc(100*sizeof(int)); /// (cast-type) malloc(byte-size)
    for(int i=0;i<100;i++)
    {
        *(ptr+i)=i;
        printf("%d\t",*(ptr+i));
    }
    printf("\nCalloc: \n");
    int *ptr1=(int *)calloc(25, sizeof(int));
    for(int i=0;i<100;i++)
    {
        printf("%d\t",*ptr1);
    }
    printf("\nFreeing memory space: \n");
    free(ptr);*/
    int n,i,*ptr,sum=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));

    if(ptr==NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }
    printf("Enter elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
        sum +=*(ptr+i);
    }
    printf("Sum = %d",sum);
    free(ptr);
    return 0;
}
