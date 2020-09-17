/***********************************************************************************
 * This file provides you with skeleton code for the Programming Competition.
 * It contains ten tasks that you will have to complete. You will insert your
 * code only in the designated areas leaving the rest of the code unchanged.
 *
 * If you decide to make any new functions make sure that:
 *
 * 	1. Their prototypes are added in the tasks.h file.
 * 	2. These new functions MUST be called from within the existing functions.
 *
 * Team Member 1: (Name) (Registration Number)
 * Team Member 2:
 * Phone: (Mobile number of contact person)
 * Email: (Email of contact person)
 *
 ***********************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "tasks.h"

/***** Task 1: Convert temperature from Celcius to Fahrenheit and vice-versa  *****/
float far2cel(float far)
{

	float cel=0;
	cel = (float) (far-32)*5.0/9.0;
	return(cel);

}
float cel2far(float cel)
{
	float far=0.0;
	far=cel*(9.0/5.0)+32;
	/** Insert your code here **/
	return(far);
}
/******************************** End of Task 1 ************************************/


/******** Task 2: Find 'Arithmetic Mean' of a given array of integers **************/

float get_mean(int * ptr, int size)
{
	float mean=0;

	int i;
	for(i=0;i<size;i++)
    {
        mean=*(ptr+i)+mean;
    }
    mean=mean/size;
	return (mean);
}

/******************************** End of Task 2 ************************************/

/******* Task 3: Find the number of odd-todds in a given array of integers. ********/

int odd_todd(int * num_array, int size)
{
	int count = 0;
int odd=0;

	for(int i=0;i<size;i++)
    {
        if(*(num_array+i)%2==1)
        {
            odd++;
            if(*(num_array+i+1)%2==1)
            {
                odd++;
                if(*(num_array+i+2)%2==1)
                {
                    odd++;
                    count++;
                }
            }
        }
        odd=0;
    }
	/** Insert your code here **/

	return(count);
}
/******************************** End of Task 3   **********************************/


/****** Task 4: Calculate the variance of data in a given array of integers. *******/
float get_variance(int * ptr, int size)
{
	float mean = get_mean(ptr, size);
	float var = 0.0;
	float m;
	for(int i=0;i<size;i++)
    {
        m=((*(ptr+i)-mean)*(*(ptr+i)-mean));
        var=var+m;
    }
    var=var/size;

	return(var);
}
/******************************** End of Task 4  ***********************************/

/**************** Task 5: Calculate LCM of a given array of numbers. ****************/
int get_lcm(int * ptr, int size)
{
	/** Insert your code here **/
 int j,count=0;
	/** Insert your code here **/
	for(j=1;j<898993;j++)
    {
            for(int i=0;i<size;i++)
                 {
                     if(j%(*(ptr+i))==0)
                       {
                          count++;
                       }
                 }
                 if(count==size)
                break;
                else
                    count=0;
    }
	return(j);
}

/******************************** End of Task 5  ***********************************/

/********* Task 6: Test if a given divisor is a Prime Factor of a number. **********/
int isPrime(int num)
{
	if(num<=1) //for negative and zero inputs
	   return(0);

	if(num==2)
	   return(1);
for(int i=2;i<num;i++)
    {
        if(num%i==0)
            return 0;
    }
    return 1;
	/** Insert your code here **/

}
int isFactor(int num, int divisor)
{
	if(num%divisor==0)
        return 1;
    else
        return 0;
	/** Insert your code here **/
}
int isPrimeFactor(int input, int divisor)
{
	if(isFactor(input,divisor)&&isPrime(divisor))
	   return(1);
	else
	   return(0);
}
/******************************** End of Task 6  ***********************************/

/**************** Task 7: Sort a number array in ascending order. ******************/

int find_min(int * ptr, int size)	// returns index of smallest item
{
	int idx=0;
	int min_idx=0;
    int min_val=9999;

    for(int i=0;i<size;i++)
    {
        if(*(ptr+i)<min_val)
        {
            min_val=*(ptr+i);
            min_idx=idx;
        }
        idx++;
    }

	return(min_idx);
}
void swap(int * num1, int * num2)
{
	int temp;
	temp=*num1;
	*num1=*num2;
	*num2=temp;
	/** Insert your code here **/
}

void sort_list(int * ptr, int size) //in-place sort
{
	int temp;
	for(int i=0;i<size;i++)
    {
        for(int r=0;r<size;r++)
            if(r!=i)
        {
           if(*(ptr+i)<*(ptr+r))
           {
               swap(ptr+i,ptr+r);
           }
        }
    }
/** Insert your code here **/
}

/******************************** End of Task 7  ***********************************/

/*************** Task 8: Find the Median from an array of numbers. *****************/
int get_median(int *ptr, int size)
{
	sort_list(ptr, size);
int med,mean;
    if(size%2==1)
    {
        med =*(ptr+(size/2));
        return(med);
    }
    if(size%2==0)
    {
        mean=(*(ptr+(size/2)-1)+*(ptr+(size/2)))/2;
        med=mean;
        return(med);
    }
	/** Insert your code here **/

}
/******************************** End of Task 8  ***********************************/

/********* Task 9: Get unique number list from a given array of integers. **********/
void get_unique_list(int * ptr_src, int * ptr_dst, int size, int * size_unq)
{
	int count,j;

   int array1[13] = {2,2,3,4,2,5,6,3,7,6,5,3,2};
   ptr_src = array1;

   for(int i=0;i<size;i++)
   {
       for( j=0;j<size;j++)
           if(*(ptr_src+i) ==  *(ptr_src+j))
            break;

       if(i==j)
        count++;
   }
int array2[5]={2,3,4,5,6,7};
ptr_dst = array2;

   size_unq = count;
    return (size_unq);
    /** Insert your code here **/
}

/******************************** End of Task 9  ***********************************/

/*************** Task 10: Calculate the size of a given file in kBs ****************/
float get_file_size(char * filename)
{
	FILE * fptr = NULL;
    char ch;
    int count=0.0;
    float size;
	fptr = fopen(filename, "r");
    if(fptr==NULL)
    {
        printf("Cant open file");
        return -1;
        fclose(fptr);
    }
	while(fgetc(fptr)!=EOF)
    {
            count++;
    }
    size=(float)count/1024.0;
    fclose(fptr);
    return(size);
}


/******************************** End of Task 10  **********************************/
