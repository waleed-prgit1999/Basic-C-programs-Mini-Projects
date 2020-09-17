#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct employee
{
    int number;
    char name[20];
    char sex[20];
    float gross_salary;
};
int main()
{
    int choice2;
    char choice;
    float new_salary;
    char another ='y';
    char empname[20];
    FILE *fp;
    struct employee e;
    int recsize = sizeof(e);

    printf("\t\tEnter your choice\n");
    printf("\n1 Add new record\t2 Delete Record\t\t3 Modify Record\n\n");

    scanf("%d",&choice2);

switch(choice2)
{
    case 1:

    fp = fopen("employee.txt","a");

    if(fp==NULL)
    {
        printf("File could not open\n");
        exit(1);
    }

    while(1)
    {
        printf("\nEnter the serial number of employee\n");
        scanf("%d",&e.number);
        fprintf(fp,"\nSerial number: %d\n",e.number);

        printf("Enter the name of employee\n");
        scanf("%s",&e.name);
        fprintf(fp,"Name: %s\n",e.name);

        printf("Enter the sex of employee\n");
        scanf("%s",&e.sex);
        fprintf(fp,"Sex: %s\n",e.sex);

        printf("Enter the Gross Salary of employee\n");
        scanf("%f",&e.gross_salary);
       fprintf(fp,"Gross Salary: %f\n",e.gross_salary);
//fwrite(&e,sizeof(e),1,fp);
        printf("Add another record (Y/N)\n");
        choice = getche();
        if(choice!= 'y')
             break;
        printf("\n");
        fprintf(fp,"\n\n");
    }
    fclose(fp);

    break;


    case 2 :
        fp = fopen("employee.txt","r+");
         if(fp==NULL)
    {
        printf("File could not open\n");
        exit(1);
    }

    printf("Enter the name of the employee\n");
    scanf("%s",empname);
    printf("Enter the current gross salary\n");
    scanf("%f",&new_salary);

    while(fread(&e,recsize,1,fp)==1)
    {
        e.gross_salary==new_salary;

    }


break;







    return 0;
}

}
